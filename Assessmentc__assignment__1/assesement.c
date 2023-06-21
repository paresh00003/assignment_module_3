#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], rev[1000];
    int i, j, count = 0;

    char str3[20];

    int freq[256] = {0};

    char line[150];
    int vowels, consonant, digit, space;

    char str1[20], str2[20];
    int ch;

    do
    {
        printf("\tMENU");
        printf("\n------------------------------\n");
        printf("\n1:Find Reverse of String");
        printf("\n2:Find Concatenation of String");
        printf("\n3:Palindrome Strings");
        printf("\n4:Copy String ");
        printf("\n5:Frequency of character in s string ");
        printf("\n6:Find number of vowels and consonants Find number of blank spaces and digits\n");
        printf("\n------------------------------\n");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:

            printf("enter a  reverse string \n");
            scanf("%s", str);

            printf("String Before Reverse: %s\n", str);

            while (str[count] != '\0')
            {
                count++;
            }

            j = count - 1;

            for (i = 0; i < count; i++)

            {
                rev[i] = str[j];

                j--;
            }

            printf("String After Reverse: %s\n", rev);

            break;

        case 2:

            printf("Enter First String\n: ");
            scanf("%s", str1);
            printf("Enter Second string\n: ");
            scanf("%s", str2);

            strcat(str1, str2);
            printf("String After Concatenation : %s\n\n", str1);

        case 3:

            printf("Enter String : ");
            scanf("%s", str3);

            int strSize = strlen(str3);
            if (strSize > 20)
            {
                printf("\nError: strSize should be less than 20 "
                       "characters.");
                return 0;
            }

            char strReversed[20];
            for (int i = strSize - 1; i >= 0; --i)
            {
                strReversed[strSize - 1 - i] = str3[i];
            }

            if (strcmp(str3, strReversed) == 0)
            {
                printf("\n%s is a palindrome", str3);
            }
            else
            {
                printf("\n%s is not a palindrome", str3);
            }

            break;

        case 4:

            printf("Enter a String1: ");
            scanf("%s", str1);
            printf("Enter a String2: ");
            scanf("%s", str2);
            printf("\nString Before Copied:\nString1=\"%s\",String2=\"%s\"\n", str1, str2);
            strcpy(str2, str1);
            printf("-----------------------------------------------\n");
            printf("\"We are copying string String1 to String2\" \n");
            printf("-----------------------------------------------\n");
            printf("String After Copied:\nString1=\"%s\", String2=\"%s\"\n\n", str1, str2);
            break;

        case 5:

            printf("enter string\n");
            scanf("%s", &str);

            for (i = 0; str[i] != '\0'; i++)
            {
                freq[str[i]]++;
            }

            for (i = 0; i < 256; i++)
            {
                if (freq[i] != 0)
                {
                    printf("The frequency of %c is %d\n", i, freq[i]);
                }
            }
            break;

        case 6:

            vowels = 0, consonant = 0, digit = 0, space = 0;

            printf("Enter a line of string: ");
            scanf("%s", &line);
            fgets(line, sizeof(line), stdin);

            for (int i = 0; line[i] != '\0'; ++i)
            {

                line[i] = tolower(line[i]);

                if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
                    line[i] == 'o' || line[i] == 'u')
                {
                    ++vowels;
                }

                else if ((line[i] >= 'a' && line[i] <= 'z'))
                {
                    ++consonant;
                }

                else if (line[i] >= '0' && line[i] <= '9')
                {
                    ++digit;
                }

                else if (line[i] == ' ')
                {
                    ++space;
                }
            }

            printf("Vowels: %d", vowels);
            printf("\nConsonants: %d", consonant);
            printf("\nDigits: %d", digit);
            printf("\nWhite spaces: %d", space);

            break;

        default:
            break;
        }

        printf("Do you want to repeat the operation Y/N: ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
}
