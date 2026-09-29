#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    
    printf("Enter a number: ");
    scanf("%i", &num);
    
    for (int i = 1; i <= num; i += 2){
        sum = sum + i;
    }
    
    printf("\nSum of odd numbers: %i\n", sum);
    return 0;
}
