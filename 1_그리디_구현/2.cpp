// 그리디 $ 구현 - 2. 1이 될 때까지
#include <bits/stdc++.h>

using namespace std;

int n, k = 0;
int cnt = 0;

int main(void) {
    cin >> n >> k;
    // while(1) {
    //     if(n >= k) {
    //         if (n % k == 0) {
    //             n /= k;
    //             cnt++;
    //         }
    //         else if(n % k != 0){
    //             n -= 1;
    //             cnt++;
    //         }
    //     }
    //     else {
    //         n -= 1;
    //         cnt++;
    //         if (n == 1) break;
    //     }
    // }
    while (1) {
        int target = (n / k) * k;
        cnt += (n - target);
        n = target;

        if(n < k) break;
        cnt++;
        n /= k;
    }
    cnt += (n-1);
    cout << n << endl;
    cout << "연산 횟수 => " << cnt << endl;
}