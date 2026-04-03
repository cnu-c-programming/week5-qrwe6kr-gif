// 다중 포인터 연산
// strtol함수처럼 작동하는 my_strol 함수 구현
#include <stdio.h>

long my_strtol(char *str, char **endptr) {
    long res = 0;
    
    while (*str>='0' && *str<='9') { 
        //문자가 숫자인지 체크
        res = res * 10 + (*str - '0');
        str++;
    // 기존 숫자의 자릿수 한 자리 키우고 아스키코드 기준으로 문자 숫자를 
    // 실제 정수 값 기준으로 계산해 더하기
    } 
    *endptr = str;
    
    return res;
}

int main() {
    char str[] = "2026hello";
    char *end;
    
    long val = my_strtol(str, &end); // 주소 넘겨주어 수정 허용
    
    printf("%ld %s\n", val, end);
    return 0 ;
}



