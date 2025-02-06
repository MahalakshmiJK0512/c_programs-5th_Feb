//Convert Fahrenheit to Celsius//
#include <stdio.h>
int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f\n", celsius);
    return 0;
}

//Swap Two Numbers//
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter the a value: "); 
    scanf("%d", &a);
    printf("Enter the b value: "); 
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
