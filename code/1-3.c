#include <stdio.h>

//포인터 이동 시뮬레이션
// 배열+크기 입력받아 배열 원소들 역순 출력하는 함수 구현
// 포인터 증감 연산 사용

void print_reverse(int *arr, int size) {
    arr = &arr[size-1];
    
    for (int i=size; i>=1; i--) {
        printf("%d ", *arr);
        arr--;
    }
     printf("\n");
 }
 
int main() {
    int nums[] = {1, 2, 3, 4, 5};
    
    print_reverse(nums, 5);
    printf("\n");
    
    return 0;
}
