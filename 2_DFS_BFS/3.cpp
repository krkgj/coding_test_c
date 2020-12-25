// 유클리드 호제법
// 두 자연수 A와 B에 대해 A를 B로 나눈 나머지를 R이라고 하자. (A > B)
// 이때 A와 B의 최대공약수는 B와 R의 최대공약수와 같다.
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(a % b == 0){
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main(void) {
    cout << gcd(192, 162);
}