#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%c",&n);
    if (n >='a' && n<='z'){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}