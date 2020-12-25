// stack 구현, 사용 예제
#include <bits/stdc++.h>

using namespace std;

stack<int> s;

int main(void){
    s.push(5);
    s.push(2);
    s.push(3);
    s.push(7);
    s.pop();
    s.push(1);
    s.push(4);
    s.pop();

    while(!s.empty()){
        // 스택 최상단에 위치한 요소를 cout으로 출력한다.
        cout << s.top() << endl;
        // 스택 최상단에 위치한 요소를 제거한다. pop()은 제거하는 함수일 뿐.
        s.pop()
    }
    
}