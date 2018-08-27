#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
int check_vowel(char a)
{
if ( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
return TRUE;
   return FALSE;
}
int main()
{
   char string[100], *temp, *pointer, ch, *start;
   scanf("%[^\n]s", string);
   temp = string;
   pointer = (char*)malloc(100);
  if( pointer == NULL )
   {
      exit(EXIT_FAILURE);
   }
start = pointer;
   while(*temp)
   {
      ch = *temp;
      if ( !check_vowel(ch) )
      {
         *pointer = ch;
         pointer++;
      }
      temp++;
   }
   *pointer = '\0';
   pointer = start;
   strcpy(string, pointer); 
   free(pointer);
   printf("%s\n", string);
   return 0;
}
