#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char greet;
    scanf("%c", &greet);
    printf("You entered: %c\n", greet)
    return 0;
}