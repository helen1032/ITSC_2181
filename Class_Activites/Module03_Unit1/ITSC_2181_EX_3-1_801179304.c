#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a,b;
	float f = 0.0;
	int i = 0;
	int result = 0;

	printf("Enter two characters, a space, a float, a space, and a decimal:\n");
	result = scanf("%c%c %f %d", &a,&b,&f,&i);

	printf("%c%c\n",a,b);
	printf("%f\n",f);
	printf("%d\n",i);
}