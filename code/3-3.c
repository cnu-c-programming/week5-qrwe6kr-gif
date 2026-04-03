#include <stdio.h>

int main() {
    int val = 7;
    int other = 77;
    
    const int *const p = &val;
    // *p = 10; 포인터와 값 모두 고정이기 때문에 수정하면 오류남
   // p = &other;
    
    printf("%d\n", *p);
    return 0;
}
