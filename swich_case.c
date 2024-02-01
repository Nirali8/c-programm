#include<stdio.h>

void main()
{
	char c;
	printf("Enter any alphabet:");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'u':
		case 'U':
		case 'o':
		case 'O':
			printf("Alphabet is vowel");
			break;
		default:
			printf("Alphabet is consonant");
	}
}