// 구현 - 4. 문자열 재정렬 
// 대문자+숫자 로 입력된 문자열을 정렬된 문자 + 합한 숫자 로 정렬하여 출력하라.
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    // char형 vector
    vector<char> sAry;
    int value = 0;

    for(int i = 0; i < str.size(); i++){
        // 입력받은 문자열 str을 검사하여 A~Z일 때, sAry에 push
        if(str[i] >= 'A' && str[i] <= 'Z'){
            sAry.push_back(str[i]);
        }
        // 숫자일 때는 문자열을 숫자로 바꾸고, (아스키 코드로, -'0'을 하면 10진수로 바뀐다.) 더한다.
        else {
            int num = str[i] - '0';
            value += num;
        }
    }
    // 오름차순으로 정렬한다.
    sort(sAry.begin(), sAry.end());
    
    // vector를 출력할 때는 for문을 통해 출력한다.
    for(int i = 0; i < sAry.size(); i++) {
        cout << sAry[i];
    }
    if(value != 0) cout << value << endl;

}