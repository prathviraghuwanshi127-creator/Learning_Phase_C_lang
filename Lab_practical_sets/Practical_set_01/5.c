#include <stdio.h>
int main(){
    int n, d1, d2, d3;

    printf("Enter a three digit number = ");
    scanf("%d", &n);

    d1 = n % 10;
    d2 = (n / 10) % 10;
    d3 = n / 100;

    printf("Sum of digits = %d", d1+d2+d3);
    
    return 0;
}