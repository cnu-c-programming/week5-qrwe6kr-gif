#include <stdio.h>
#include <stdlib.h>

// format string에서 width인자 통해 OBB 방지 : (%{숫자}s)
void echo() {
    char buf[5];
    scanf("%4s\n", buf);
    printf("%s\n", buf);
}

int main() {
    int x = 42;
    echo();
    return 0;
}
