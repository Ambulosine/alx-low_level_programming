#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int _str_length () {

     int length;
     printf("Enter length of the password you want:\n");
     scanf("%d", &length);
     if (length <= 1 )

     {
          printf("password length must be greater than 1\n");
          return 1;
     }
     char *password = malloc(length + 1);

     // char password[length + 1];
     char *digit = "0123456789";
     int digit_length = strlen(digit);
     char *lowers = "abcdefghijklmnopqrstuvxwz";
     int lower_length = strlen(lowers);
     char *uppers = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
     int upper_length = strlen(uppers);
     char *symbol = "@#$%&^*()&";
     int symbol_length = strlen(symbol);

     srand (time(NULL) * getpid());
     for (int i = 0; i < length; i++)
     {
        int char_type = rand() % 4;
        if (char_type == 0)
            password[i] = digit[rand() % digit_length];
        else if (char_type == 1)
            password[i] = lowers[rand() % lower_length];
        else if (char_type == 3)
            password[i] = uppers[rand() % upper_length];
        else
            password[i] = symbol[rand() % symbol_length];
     }
     password[length] = '\0';
     printf("Password: %s\n", password);
     free (password);
     return (0);
}


int main()
{
     int save = _str_length();
}

