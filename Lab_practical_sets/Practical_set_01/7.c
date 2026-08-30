#include <stdio.h>
int main(){

    float temp;

    printf("Enter temperature in celcius = ");
    scanf("%f", &temp);

    printf("%f celcius is %f in fahrenheit\n", temp, temp * (9.0/5.0) + 32);

    return 0;
}