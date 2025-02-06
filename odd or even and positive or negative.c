// Check odd or even//
#include <stdio.h>
        int main()
    {
        int a=20;
        if(a%2==0)
        {
            printf("a is even");
        }
    else
    {
        printf("a is odd");
        }
        return 0;
}

//Check positive or negative//
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is positive.\n", num);
    else if (num < 0)
        printf("%d is negative.\n", num);
    else
        printf("The number is zero.\n");

    return 0;
}
