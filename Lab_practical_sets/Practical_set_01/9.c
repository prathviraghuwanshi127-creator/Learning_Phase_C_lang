#include <stdio.h>
int main(){

    float money, rupee, paisa;

    printf("Enter money = ");
    scanf("%f", &money);

    rupee = (int)money;
    paisa = (money - rupee) * 100; 

    printf("%.2f is %.2f rupees and %.2f paisa\n", money, rupee, paisa);

    return 0;
}