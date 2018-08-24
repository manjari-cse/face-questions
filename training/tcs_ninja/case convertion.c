#include <stdio.h>

int main() {
	char c;
	scanf("%c", &c);
	
	// Upper to lower case
	if('A' <= c && c <= 'Z')
	{
	    printf("%c", 'a' + (c - 'A'));
	}
	
	// Lower to upper case
	if('a' <= c && c <= 'z')
	{
	    printf("%c", 'A' + (c - 'a'));
	}
	
	return 0;
}
