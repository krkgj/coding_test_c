// DFS 동작 예시 - DFS는 스택이나 재귀함수를 이용하여 구현한다.
#include <bits/stdc++.h>

using namespace std;

// bool형 배열은 선언 시 기본적으로 false로 초기화 된다.
// 방문 처리를 할 bool형 visited 배열 선언 -> true는 방문 / false는 아직 방문하지 않은 것
bool visited[9];
// int형 벡터를 만든다. 하지만 1차원의 범위는 0~8까지 9개로 한정. 
vector<int> graph[9];

void dfs(int a){
    // a 노드를 방문처리한다.
    visited[a] = true;
    cout << a << ' ';
    
    // a노드에 저장되어 있는 노드 정보(연결된 노드들)들을 하나씩 검사
    for(int i = 0; i < graph[a].size(); i++){
        // a에 연결된 노드들을 b 값에 할당
        int b = graph[a][i];
        // 만약 a노드에 연결된 b노드가 false이면 dfs 재귀함수 호출
        if(visited[b] == false) dfs(b);
    }
}

int main(void) {
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

    dfs(1);
}