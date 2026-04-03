#include <stdio.h>
//char* 포인터 배열에 문자열 주소 입력하고 값 출력

int main() {
    char *alphas[] = {"abc", "def", "hij"};
    
    int size = sizeof(alphas) / sizeof(alphas[0]);
    
    for (int i=0; i<size; i++) {
        printf("%s\n", alphas[i]);
    }
    return 0;
}
