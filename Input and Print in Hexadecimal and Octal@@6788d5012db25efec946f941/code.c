#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d", &num);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    return 0;
}