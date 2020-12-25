// 그리디 - 2. 1이 될 때까지
#include <bits/stdc++.h>

using namespace std;

int n, k = 0;
int cnt = 0;

int main(void) {
    cin >> n >> k;
    while(1) {
        if(n >= k) {
            if (n % k == 0) {
                n /= k;
                cnt++;
            }
            else if(n % k != 0){
                n -= 1;
                cnt++;
            }
        }
        // n < k 이고, n이 1보다 클 때는 무조건 -1 연산만을 한다.
        else {
            n -= 1;
            cnt++;
            if (n == 1) break;
        }
    }
    // while (1) {
    //     int target = (n / k) * k;
    //     cnt += (n - target);
    //     n = target;

    //     if(n < k) break;
    //     cnt++;
    //     n /= k;
    // }
    // cnt += (n-1);
    cout << n << endl;
    cout << "연산 횟수 => " << cnt << endl;
}