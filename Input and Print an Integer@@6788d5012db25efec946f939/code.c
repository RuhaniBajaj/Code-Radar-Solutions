#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int number;
    scanf("%d", &number);
    printf("You entered: %d\n", number );
    return 0;
}