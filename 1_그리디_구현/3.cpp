// 그리디 - 3. 곱하기 혹은 더하기, 가장 큰 수 만들기.
#include <bits/stdc++.h>

using namespace std;

int main(void){
    string str;
    cin >> str;
    int result = str[0] - '0';

    for(int i = 1; i < str.length(); i++){
        // char나 str에서 문자 '0'을 빼게 되면, 숫자로 나오게 된다. 
        // 예를 들어, 문자 'G'의 10진수 아스키 값이 71이고, 'B'가 66이다. 'G'-'B'를 하면 정수 5가 출력.
        int num = str[i] - '0';
        // 0이면 그냥 더한다. 
        // 1이어도 그냥 곱하면 되지 않나?
        if(result == 0 || num == 0) {
            result += num;
        }
        else result *= num;
    }

    cout << "큰 값 : " << result << endl;
}