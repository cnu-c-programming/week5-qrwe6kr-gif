// 다중 포인터 연산
// 이중 포인터 p에 대해서 +1을 계속 더해줬을 때, base주소와 차이가 
// 어떻게 되는지 확인

#include <stdio.h>

int my_strtol(char *str, char **endptr) {
    long res = 0;
    
    while (문자가 숫자인지 체크) {
        
    }
    
    나머지 문자열을 endptr에 저장
    
    return res;
}

int main() {
    char str[] = "2026hello";
    char *end;
    
    long val = my_strtol(str, &end);
    
    printf("&1d &s\n", val, end);
    return 0 ;
}
