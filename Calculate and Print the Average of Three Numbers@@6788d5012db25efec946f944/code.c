#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c, Average;
    scanf("%f %f %f",&a,&b,&c);
    Average=(a+b+c)/3;
    printf("Average: %.2f\n",Average);
    return 0;
}