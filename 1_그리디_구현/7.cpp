// 구현 - 3. 왕실의 나이트 문제 (나이트가 이동할 수 있는 경우의 수)
#include <bits/stdc++.h>

using namespace std;

string position;
int cnt = 0;

int main(void){
    cin >> position;
    
    int row = position[1] - '0';
    int col = position[0] - 'a' + 1;

    // 나이트는 2칸 직진으로 움직이고, 1칸 옆으로 움직인다.
    // dx와 dy로 움직임 set을 만든다.
    int dx[8] = {-2, -2, -1, 1, 2, 2, -1, 1};
    int dy[8] = {1, -1, 2, 2, -1, 1, -2, -2};
    
    // 나이트의 움직임을 모두 검사
    for(int i = 0; i < 8; i++) {
        int nrow, ncol = 0;
        nrow = row + dx[i];
        ncol = col + dy[i];

        // 나이트의 현재 좌표에서 움직임 set을 더하여 0 초과 8 이하의 범위를 가지면, 카운트한다.
        if(nrow > 0 && nrow <= 8 && ncol > 0 && ncol <= 8){
            cnt++;
        }
    }

    cout << "나이트가 움직일 수 있는 경우의 수는 " << cnt << " 입니다" << endl;
}