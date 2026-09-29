#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int numremainder;
    
    printf("Enter an integer: ");
    scanf("%i", &num1);
    printf("Enter another integer: ");
    scanf("%i", &num2);
    
    while (num2 != 0) {
        numremainder = num1 % num2;
        num1 = num2;
        num2 = numremainder;
    }
    
    printf("The HCF is %i\n", num1);

    return 0;
    
}