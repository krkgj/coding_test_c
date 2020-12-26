// DFS & BFS - 1. 음료수 얼려 먹기
// BFS로 구현.
// 두 번째 줄부터 N+1번째 줄까지 얼음 틀의 형태가 주어지고
// 구멍 뚫려있는 부분은 0, 그렇지 않은 부분은 1로 표현
#include <bits/stdc++.h>
// define은 세미콜론 안단다.
#define MAX 512

using namespace std;

int n, m;
int graph[MAX][MAX];

bool bfs(int x, int y){
    // x, y 좌표를 넣기 위한 queue를 정의, queue에는 x, y 좌표가 들어가기 위해 pair<int, int>형으로 선언하였다.
    queue<pair<int, int>> q;
    // make_pair 함수로 x, y를 pair로 만들어 queue에 push 해준다.
    q.push({x, y});

    // x, y 좌표를 검사하여 만약, 그 좌표들이 0 미만, n, m 이상이거나 좌표에 해당하는 값이 1일 때 false를 리턴.
    if(x < 0 || x >= n || y < 0 || y >= m || (graph[x][y] == 1)){
        return false;
    }
    // R L U D, 방향 정의
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
    
    // queue에 좌표가 남아있는 동안에
    while(!q.empty()){
        // a에는 x 좌표를, b에는 y 좌표를 받는다.
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        int nx, ny = 0;
        for(int i = 0; i < 4; i++){
            nx = a + dx[i];
            ny = b + dy[i];

            if((nx >= 0 && nx < n && ny >= 0 && ny < m) && (graph[nx][ny] == 0)){
                q.push({nx, ny});
                graph[nx][ny] = 1;
            }
        }
        
    }
    return true;
}

int main(void) {
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &graph[i][j]);
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(bfs(i, j) == true){
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;
}