/* First C Program: HelloWorld */
#include <stdio.h>

int main(void)
{
	printf("Hello World from Chen! \n");
	char c = 127 + 2; //equavilant to 'a' and to 0x61
	printf("this is my char: %i \n", c);
	char text [1] = "W";
	printf("%s\n", text);

	return 0;
}


