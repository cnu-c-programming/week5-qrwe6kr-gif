#include <stdio.h>
#include <stdlib.h>

//fgets 이용해 코드 안전하게 고치기
void echo() {
    char buf[5];
    
    fgets(buf, 4, stdin);
    printf("%s\n", buf);
}

int main() {
    int x = 42;
    echo();
    return 0;
}
