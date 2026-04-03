#include <stdio.h>

int sum_range(int *start, int *end) {
    *start  = &start[0];
    *end = &data[sizeof(&data-1)];
    
    for (int i=0; i<end; i++) {
        start += start+i;
        return start;
    }
}

int main() {
    int data[] = {10, 20, 30, 40, 50, 60, 70};
    
    int result = sum_range(&data[1], &data[4]);
    
    printf("%d\n", result);
    return 0;
}
