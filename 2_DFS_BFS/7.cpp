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