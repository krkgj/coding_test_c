// 구현 - 1. 상하좌우 문제
#include <bits/stdc++.h>

using namespace std;

int n;
string plans;
int x, y = 1;

int main(void){
    cin >> n ;
    cin.ignore();
    getline(cin, plans);
    
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
    char directionSet[4] = {'R', 'L', 'U', 'D'};
    // size() : class에서 그 class의 길이를 리턴?
    // plans를 검토한다. 임시로 사용할 좌표인 nx, ny를 선언한다.
    for(int i = 0; i < plans.size(); i++){
        int nx, ny;
        // strlen : 배열의 길이를 리턴, sizeof : 배열의 총 바이트수를 리턴
        // plans[i]를 directionSet 값과 비교한다. 같은 문자가 있으면 dx와 dy를 이용하여 움직인다.
        for(int j = 0; j < strlen(directionSet); j++){
            if(plans[i] == directionSet[j]){
              nx = x + dx[j];
              ny = y + dy[j];
            }
        }
        // nx와 ny의 범위가 0 미만 n 초과이면 무시하고 plans for문 처음으로 돌아간다.
        if(nx > n || nx < 0 || ny > n || ny < 0) continue;
        // 0이상 n이하 일 때는 x와 y에 nx, ny 값을 할당해준다.
        else {
            x = nx;
            y = ny;
        }
    }
    cout << "최종 위치는 " << x << ", " << y << " 입니다. " << endl;
}