// 그리디 - 1. 거스름 돈
#include <bits/stdc++.h>

using namespace std;

int n = 0;
int cnt = 0;
int coins[4] = {500, 100, 50, 10};

int main(void){
    cin >> n; // n을 입력받는다.
    for(int i = 0; i < 4; i++) {
        cnt += n / coins[i];
        n %= coins[i];
    }
    cout << cnt << endl;
}
