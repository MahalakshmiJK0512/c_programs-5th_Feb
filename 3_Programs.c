// Largest Among Three Numbers//

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Largest number is: %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest number is: %d\n", b);
    else
        printf("Largest number is: %d\n", c);

    return 0;
}

//Checking the leap year//
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}
//Vowels or Consonants//
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is a vowel.\n", ch);
    else
        printf("%c is a consonant.\n", ch);

    return 0;
}
