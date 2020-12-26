// 정렬 알고리즘 - 삽입 정렬
// 처리되지 않은 데이터를 하나씩 골라 적절한 위치에 삽입하는 정렬
// 선택 정렬에 비해 구현 난이도가 높다 but 더 효율적.
// 현재 index에서 왼쪽 인덱스(index - 1)와 비교하고, 더 작은 수가 왼쪽으로 간다.
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int numbers[] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
    
    for(int i = 0; i < (sizeof(numbers)/sizeof(int)); i++) {
        // i부터 시작하여 왼쪽 index에 위치한 수와 비교하여 더 작은 수가 왼쪽(index - 1)으로 향하게 된다.
        // 왼쪽으로 간 숫자(index - 1)은 더 왼쪽에 있는 숫자(index -2)와 또 비교를 하여, 계속 왼쪽으로 가게되는 정렬
        for(int j = i; j > 0; j--){
            if(numbers[j] < numbers[j - 1]) swap(numbers[j], numbers[j-1]);
        }
    }

    for(int i = 0; i < (sizeof(numbers)/sizeof(int)); i++) {
        cout << numbers[i] << ' ';
    }
}