#include <stdio.h>
#include <string.h>
/**
* main - function return a void 
* because we are printing a string value
* strcpy()copy the sentence into str1 
* puts() outputs the sentence to the stdout.
*/
int main(void)
{
char str1[100];
strcpy(str1, "\"Programming is like building a multilingual puzzle");
puts(str1);
return (0);
}
