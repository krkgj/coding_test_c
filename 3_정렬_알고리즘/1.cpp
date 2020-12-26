// 정렬 알고리즘 - 선택 정렬
// 처리되지 않은 데이터 중, 가장 작은 데이터를 선택하고
// 맨 앞에 있는 데이터와 바꾸는 것을 반복한다.
// 선택 성렬 시간 복잡도는 O(N^2)
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int numbers[] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
    
    for(int i = 0; i < (sizeof(numbers)/sizeof(int)); i++) {
        int minIndex = i;
        // 제일 작은 수를 가지는 index를 찾아 minIndex에 할당한다.
        for(int j = i + 1; j < (sizeof(numbers)/sizeof(int)); j++){
            if(numbers[minIndex] > numbers[j]) {
                minIndex = j;
            }
        }
        // 맨 앞부터 검사하는 i와 minIndex에 해당하는 값을 바꾼다.
        swap(numbers[i], numbers[minIndex]);
    }
    for(int i = 0; i < (sizeof(numbers)/sizeof(int)); i++) {
        cout << numbers[i] << endl;
    }
}