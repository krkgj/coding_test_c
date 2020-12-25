// queue 구현, 사용 예제
#include <bits/stdc++.h>

using namespace std;

queue<int> q;

int main(void){
    q.push(5);
    q.push(2);
    q.push(3);
    q.push(7);
    q.pop();
    q.push(1);
    q.push(4);
    q.pop();

    while(!q.empty()){
        // 스택 앞에 위치한 요소를 반환하고, cout으로 출력
        cout << q.front() << endl;
        // 스택 앞에 위치한 요소를 제거한다.
        q.pop();
    }
    
}