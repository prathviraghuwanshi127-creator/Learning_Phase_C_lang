#include <stdio.h>
int main(){
    
    int p, r, t;

    printf("Enter principal amount = ");
    scanf("%d", &p);
    printf("Enter rate of interest = ");
    scanf("%d", &r);
    printf("Enter time = ");
    scanf("%d", &t);

    printf("Simple interest = %d", (p * r * t)/100);

    return 0;
}