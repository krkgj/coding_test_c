// BFS 동작 예시 - BFS는 큐를 이용한다.
#include <bits/stdc++.h>

using namespace std;

bool visited[9];
vector<int> graph[9];

void bfs(int start) {
    queue<int> q;
    // queue에 start node인 1을 push
    q.push(start);
    // 노드 1의 방문 처리를 한다.
    visited[start] = true;

    // 큐가 비어있지 않을 때까지 수행하는 while문
    while(q.empty() == false){
        // q의 맨 앞 요소를 반환하여 a에 저장
        int a = q.front();
        // q의 맨 앞 요소를 제거한다.
        q.pop();
        cout << a << ' ';

        // 노드 1에 연결되어있는 모든 노드들을 검사한다.
        for(int i = 0; i < graph[a].size(); i++){
            // 노드 1에 연결된 노드 중 i에 해당하는 노드 값을 b에 할당
            int b = graph[a][i];
            // 만약 b 노드가 방문을 하지 않은 노드라면
            if(!visited[b]){
                // 큐에 push 하고, 방문처리한다.
                q.push(b);
                visited[b] = true;
            }
        }
    }
}

// void bfs(int start) {
//     queue<int> q;
//     q.push(start);
//     // 현재 노드를 방문 처리
//     visited[start] = true;
//     // 큐가 빌 때까지 반복
//     while(!q.empty()) {
//     	// 큐에서 하나의 원소를 뽑아 출력
//         int x = q.front();
//         q.pop();
//         cout << x << ' ';
//         // 해당 원소와 연결된, 아직 방문하지 않은 원소들을 큐에 삽입
//         for(int i = 0; i < graph[x].size(); i++) {
//             int y = graph[x][i];
//             if(!visited[y]) {
//                 q.push(y);
//                 visited[y] = true;
//             }
//         }
//     }
// }

int main(void){
        // 노드 1에 연결된 노드 정보 저장 
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);
    
    // 노드 2에 연결된 노드 정보 저장 
    graph[2].push_back(1);
    graph[2].push_back(7);
    
    // 노드 3에 연결된 노드 정보 저장 
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);
    
    // 노드 4에 연결된 노드 정보 저장 
    graph[4].push_back(3);
    graph[4].push_back(5);
    
    // 노드 5에 연결된 노드 정보 저장 
    graph[5].push_back(3);
    graph[5].push_back(4);
    
    // 노드 6에 연결된 노드 정보 저장 
    graph[6].push_back(7);
    
    // 노드 7에 연결된 노드 정보 저장 
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);
    
    // 노드 8에 연결된 노드 정보 저장 
    graph[8].push_back(1);
    graph[8].push_back(7);

    bfs(1);
}