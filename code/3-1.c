// 함수 내부에서 배열 수정X read-only 함수
// 주석 제거하면 compile error 남
#include <stdio.h>

void read_only(const int *arr, int size) {
    // arr[0] =  base;
    
    for (int i=0; i<size; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    read_only(nums, 5);
    return 0;
}
