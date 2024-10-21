#include <stdio.h>
int main()
{
    int choice;
    float temperature, convertedTemperature;
    printf("Temperature Converasion: ");
    printf("1. Convert celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to celsius\n");
    printf("Enter your chouce (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temperature in celsiys: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf("%.2f Celcius = %.2f Fahrenheit", temperature, convertedTemperature);
    }
    else if(choice == 2)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature -32 ) * 5 / 9;
        printf("%.2f Fahrenheit = %.2f Celsius", temperature, convertedTemperature);
    }else{
        printf("Invalid choice.\n");
    }
}