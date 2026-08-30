#include <stdio.h>
#define pi 3.141;
int main(){

    float r, area;

    printf("Enter radius = ");
    scanf("%f", &r);

    area = r * r * pi;

    printf("Area of circle = %.2f", area);
    
    return 0;
}