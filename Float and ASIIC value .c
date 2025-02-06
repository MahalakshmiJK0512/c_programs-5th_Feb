//Multiplication of two floating values//
#include<stdio.h>
    int main()
    {
        float num1,num2,final_value;
        printf("The value of num1 is: ");
        scanf("%f",&num1);
        printf("The value of num2 is: ");
        scanf("%f",&num2);
        final_value = num1 * num2;
        printf("The final value is: %.2f\n",final_value);
        return 0;
        }
//Print the ASIIC value of a character//
#include <stdio.h>

int main() {
    char letter;

    printf("Enter a character: ");
    scanf("%c", &letter);

    printf("ASCII value of '%c' is %d\n", letter, letter);
    return 0;
}
