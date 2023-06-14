// 2. Vowel or Consonant using switch case//

#include <stdio.h>

int main()

{

    char c;

    printf("enter a alphabet:");
    scanf("%c", &c);

    switch (c)

    {

    case 'a':

        printf("%c is vowel", c);
        break;

    case 'e':
        printf("%c is vowel", c);
        break;

    case 'i':
        printf("%c is vowel ", c);
        break;

    case 'o':
        printf("%c is vowel", c);
        break;

    case 'u':
        printf("%c is vowel", c);
        break;

    default:
        printf("%c is Consonant ", c);
    }
}