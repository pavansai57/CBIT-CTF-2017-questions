#include <stdio.h>


int c=12345;

int calc()
{
	int s=1;
	int i;
	for(i=1;i<9;i++)
		s=s*i;
	return s;
}

void secretFunction()
{
	printf("Congratulations! your flag is %o\n",calc());
	printf("You have entered in the secret function!\n");
}

void echo()
{
	char buffer[20];

	printf("Enter some text:\n");
	scanf("%s", buffer);
	printf("You entered: %s\n", buffer);	
}

int main()
{
	echo();

	return 0;
}
