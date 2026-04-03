#include <stdio.h>
#include <string.h>
// 포인터 배열 정렬
// 문자열 주소 입력된 char* 배열 입력받아 알파벳 순서로 정렬하는 함수 구현
// 문자열 자체를 옮기는 것X 포인터 배열에 담긴 주소값의 위치만 서로 바꿔서 정
void sort_string(char **arr, int size) {
    char *temp;
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-1-i; j++) {
            if ((strcmp(arr[j], arr[j+1]) > 0)) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
    }
}
int main() {
    char* words[] = {"apple", "ant", "banana", "cherry"};
    int size = 4;
    
    sort_string(words, size);
    
    for (int i=0; i<size; i++) {
        printf("%s\n", words[i]);
    }
    return 0;

}
