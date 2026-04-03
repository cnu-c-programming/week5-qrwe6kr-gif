// OBB 코드 고치기
// index를 5이상을 입력 시 OBB 발생
// index의 boundary 고려해 3이 입력시 40 출력, 100 입력시 Error! 문자을 출력
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int index;
    scanf("%d", &index);

    if (index >= size) {
        printf("Error!\n");
    } else {
        printf("%d\n", arr[index]);
    } 
    return 0;
}
