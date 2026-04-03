// 다중 포인터 연산
// 이중 포인터 p에 대해서 +1을 계속 더해줬을 때, base주소와 차이가 
// 어떻게 되는지 확인

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    int *arr[] = {&a, &b, &c, &d};
    int **pp = arr;
    
    int **base = arr;
    
    printf("%1d\n", (char *)pp-(char *)base);
    
    pp  = pp + 1;
    printf("%1d\n", (char *)pp-(char *)base);
    
    pp = pp + 1;
    printf("%1d\n", (char *)pp-(char *)base);
    
    pp = pp + 1;
    printf("%1d\n", (char *)pp-(char *)base);
    
    return 0;
}
