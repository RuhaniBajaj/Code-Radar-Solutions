#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%c",&n);
    if(n=='R'){
        printf("Stop");
    }
    else if(n=='G'){
        printf("Go");
    }
    else if(n=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input")
    }
    return 0;
}