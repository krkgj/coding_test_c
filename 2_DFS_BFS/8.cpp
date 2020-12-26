// DFS & BFS - 2. 미로 탈출
// N x M 크기의 직사각형 형태 미로에서 현재 위치는 (1, 1)이고, 출구는 (N, M)이다.
// 괴물이 있는 부분은 0, 괴물이 없는 부분은 1
// 탈출하기 위한 최소 칸의 개수?
#include <bits/stdc++.h>
#define MAX 128

using namespace std;

int n, m;
int graph[MAX][MAX];

int bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    
    // R, L, U, D
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
    // 큐가 빌 때까지 반복한다.
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        // 큐에서 pop을 이용, 제거하는 것을 잊지 말자.
        q.pop();
        // 동서남북 방향 위치를 확인
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            // 미로 공간을 벗어나거나, 0(벽)일 때 무시
            if((graph[nx][ny] == 0) || (nx < 0 || nx >= n || ny < 0 || ny >= m)) continue;
            // 만약 확인한 공간이 길인데, 처음 가는 곳(1)이라면, 
            if(graph[nx][ny] == 1){
                graph[nx][ny] = graph[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    return graph[n - 1][m - 1];
}

int main(void){
    cin >> n >> m;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &graph[i][j]);
        }
    }

    cout << bfs(0, 0) << endl;
}