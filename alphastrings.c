#include <stdio.h>
#include <string.h>

int main()
{
	char alpha1[26];
        char* alpha2 = "abcdefghijklmnopqrstuvwxyz";
	char alpha3[52];

	for(int i=0; i <= 25; i++)
	{
		*(alpha1+(i)) = i+65;
	}

	if (strcmp(alpha1, alpha2) == 0)
		printf("the strings are identical\n");
	else
		printf("the strings are different\n");

	strcat(alpha3, alpha1);
	strcat(alpha3, alpha2);

	printf("alpha1 = %s\n", alpha1);
	printf("alpha2 = %s\n", alpha2);
	printf("alpha3 = %s\n", alpha3);

	printf("note: for some reason alpha1 has 4 extra random characters after Z, I haven't been able to figure out why\n");
}
