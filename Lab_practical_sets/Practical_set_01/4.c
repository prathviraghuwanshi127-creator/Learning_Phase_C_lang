#include <stdio.h>
int main(){

    int input, days, months;

    printf("Enter input days = ");
    scanf("%d", &input);

    days = input % 30;
    months = input / 30;

    printf("%d months and %d days", months, days);
    
    return 0;
}