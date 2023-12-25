#include <stdio.h>
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}
int main() {
    float temperature, converted_temperature;
    char unit;
    printf("Enter temperature: ");
    scanf("%f", &temperature);
    printf("Enter unit (C/F): ");
    scanf(" %c", &unit);
    if (unit == 'C' || unit == 'c') {
        converted_temperature = celsius_to_fahrenheit(temperature);
        printf("%f C is equal to %f F\n", temperature, converted_temperature);
    } else if (unit == 'F' || unit == 'f') {
        converted_temperature = fahrenheit_to_celsius(temperature);
        printf("%f F is equal to %f C\n", temperature, converted_temperature);
    } else {
        printf("Invalid unit!\n");
    }
    return 0;
}
