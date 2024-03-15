#include <stdio.h>
main() {
    char email[50];
    char password[50];
    char email2[] = "admin@gmail.com";
    char password2[] = "123456";

    printf("Enter your email: ");
    gets(email);

    printf("Enter your password: ");
    gets(password);

    if (strcmp(email, email2) == 0 && strcmp(password, password2) == 0)
	 {
        printf("Login successful!\n");
    } else 
	{
        printf("Incorrect email or password. Please try again.\n");
    }

   
}

