#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a;
    scanf("%if", &a);
    printf("You entered: %if\n", a);
    return 0;
}