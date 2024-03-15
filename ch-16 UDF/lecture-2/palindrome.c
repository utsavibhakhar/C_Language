#include <stdio.h>
int Palindrome(char str[]) 
{
    int i,length = strlen(str);
    for (i = 0; i < length; i++) 
	{
        if (str[i] != str[length - i - 1]) 
		{
            return 1;
        }
    }
    return 0;
}

int main() 

{
    char String[100];
    printf("Enter a string: ");
    scanf("%s",String);

    if (Palindrome(String))
	 {
        printf("The string is not a palindrome.\n");
    } else
	 {
        printf("The string is  a palindrome.\n");
    }

    return 0;
}

