#include <stdio.h>

int main() {
    int a = 5; 
    int b = 3; 
    int c;

    c = a & b;
    printf("%d & %d = %d\n", a, b, c); // 5 & 3 = 1

    c = a | b;
    printf("%d | %d = %d\n", a, b, c); // 5 | 3 = 7

    c = a ^ b;
    printf("%d ^ %d = %d\n", a, b, c); // 5 ^ 3 = 6

    c = ~a;
    printf("~%d = %d\n", a, c); // ~5 = -6

    return 0;
}
