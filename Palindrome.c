#include<stdio.h>
#include<string.h>
#include<stdbool.h>    
#include<ctype.h>

bool IsPalindrome(char string[]);

int main()
{
    char input[100];

    printf("Enter word: ");
    scanf("%99s", &input);
    
    char result[100];
    strcpy(result, IsPalindrome(input) ? "is a palindrome." : "is not a palindrome.");

    printf("%s %s", input, result);
}

bool IsPalindrome(char string[])
{
    int length = strlen(string);
    bool isPalindrome = true;

    for (int i = 0; i < length/2; i++)
    {
        if(tolower(string[i]) != tolower(string[length - 1 - i]))
        {
            isPalindrome = false;
            break;
        }
    }

    return isPalindrome;
}