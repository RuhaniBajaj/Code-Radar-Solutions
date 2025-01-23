#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1,num2;
    scanf("%d", num1);
    scanf("%d", num2);
    printf("Sum: %d\n", num1+num2);
}