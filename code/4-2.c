#include <stdio.h>
#include <stdlib.h>

//fgets 이용해 코드 안전하게 고치기
void echo() {
    char buf[5];
    
    fgets(buf, 5, stdin);
    printf("%s\n", buf);
}

int main() {
    echo();
    return 0;
}
