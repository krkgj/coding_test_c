// 구현 - 2. 시각에 3이 포함되있을 경우의 수
#include <bits/stdc++.h>

using namespace std;

int n;
int cnt = 0;

int main(void){
    cin >> n;

    // 00부터 n까지의 시각을 검사, n도 포함이다.
    for(int h = 0; h <= n; h++){
        for(int m = 0; m < 60; m++){
            for(int s = 0; s < 60; s++){
                // h, 시간은 24시까지이므로, 30이상은 없다. 따라서 나머지 연산으로만
                // m과 s, 분과 초는 60까지이므로, 30이상일 때도 있다. 따라서 몫 연산과 나머지 연산을 둘다 수행
                if(h % 10 == 3 || m / 10 == 3 || s / 10 == 3 || m % 10 == 3 || s % 10 == 3) cnt++;
            }
        }
    }
    cout << cnt << endl;
}