#include <stdio.h>

int main()
{
    float numa; 
    float numb; 
    float numc; 
    float maximum;
    
    printf("Enter a number: \n");
    scanf("%f", &numa);
    printf("Enter another number: \n");
    scanf("%f", &numb);
    printf("Enter a third number: \n");
    scanf("%f", &numc);
    
    maximum = numa;
    
    if (numb > maximum){
        maximum = numb;
    }
    if (numc > maximum){
        maximum = numc;
    }

    printf("Maximum: %.2f\n", maximum);    

    return 0;
}
