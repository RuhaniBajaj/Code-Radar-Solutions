#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num;
    scanf("%f", &num);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    return 0;
}