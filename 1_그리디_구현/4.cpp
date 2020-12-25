// 그리디 - 4. 모험가 길드
#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> ary;

int main(void){
    // 모험가의 수를 n으로 받는다.
    cin >> n;
    // int형 vector인 ary에 모험가들의 공포도를 입력한다.
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ary.push_back(x);
    }
    // ary의 시작부터 끝까지 오름차순으로 sorting한다.
    sort(ary.begin(), ary.end());

    // 그룹의 수 numOfGroup, 현재 그룹의 그룹원 수 currentGroup
    int numOfGroup = 0;
    int curentGroup = 0;
    
    for(int i = 0; i < n; i++){
        curentGroup++;
        // 현재 그룹의 그룹원을 1명 포함시키고, 그 그룹원의 공포도가 그룹원 수보다 작으면 그룹의 수 ++ 하여 그룹 결성.
        // 현재 그룹의 그룹원 수는 0으로 초기화
        if(curentGroup >= ary[i]){
            numOfGroup++;
            curentGroup = 0;
        }
    }
    cout << "최대 그룹의 수" << numOfGroup << endl;
}