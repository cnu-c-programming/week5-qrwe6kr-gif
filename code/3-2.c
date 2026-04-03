#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    
    printf("%d\n", x);
    
    int *const ptr = &x; // 포인터는 고정하고 값만 변경 가능
    
    
    *ptr = y;
    
    printf("%d\n", x);
    
    return 0;
}
