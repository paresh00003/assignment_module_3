// WAP of Addition, Subtraction, Multiplication and Division using Switch
// case.(Must Be Menu Driven)

#include <stdio.h>

int main()

{
    int a, b;
    char choice;

    printf("Enter your choice\n");

    scanf("%c", &choice);

    printf("Enter 2 integer numbers\n");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
    case 'a':
        printf("%d\n", (a + b));
        break;

    case 'b':
        printf("%d - %d = %d\n", a, b, (a - b));
        break;

    case 'c':
        printf("%d\n", (a * b));
        break;

    case 'd':
        printf("%d\n", (a / b));
        break;

    default:
        printf("You entered wrong choice\n");
    }
}