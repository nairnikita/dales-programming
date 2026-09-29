#include <stdio.h>

int main()
{
    float celcius;
    float fahrenheit;
    
    printf("Eneter temperature in celcius: ");
    scanf("%f", &celcius);
    
    fahrenheit = (celcius * 1.8) + 32;
    
    printf("celcius: %.2f, fahrenheit: %.2f\n", celcius, fahrenheit);
    
    return 0;
}