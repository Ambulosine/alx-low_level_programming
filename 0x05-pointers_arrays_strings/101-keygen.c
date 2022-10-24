#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * keygen.c -> this function generate random pwd
 * Return: success
 */

int main(void)
{
	int counter = 0;

	srand (time(NULL));
	char randChar;
	int  passwordLength;

	printf("Type in a password Length \n");
	scanf("%d", &passwordLength);

	while(counter < passwordLength)
	{   //seed random based on time
		//srand(time(NULL));
	randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
	printf("%c", randChar);
	counter++;
    }
    return 0;
}
