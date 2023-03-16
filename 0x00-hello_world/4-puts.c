#include <stdio.h>
#include <string.h>
/**
* main - function return a void
* 'char str1[100]':array of chars
* strcpy: copy the sentence into str1
* puts: outputs the sentence to the stdout
* return:0 value if there is no error
*/
int main(void)
{
/**
 * Description: prints "\"Programming is like building a multilingual puzzle"
 */
char str1[100];
strcpy(str1, "\"Programming is like building a multilingual puzzle");
puts(str1);
return (0);
}
