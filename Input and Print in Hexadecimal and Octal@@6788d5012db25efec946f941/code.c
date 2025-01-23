#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d", num);
    print("Hexadecimal: %x\n", num);
    print("Octal: %o\n", num);
    return 0;
}