#include <stdio.h>
#include <string.h>

int dlugosc_napisu(char *);

int main(void) 
{	char  *k = "ala ma kota"; /* k[0] = 'h', k[1]='e' k[3]='l' */ 
	/* "ala ma kota" to zmienna statyczna */
	
	printf("\ndlugosc napisu k to %d", dlugosc_napisu(k));	
	printf("\ndlugosc pustego napisu to %d",dlugosc_napisu("") );
	printf("\n");
	return 0;
}

int dlugosc_napisu(char *cos)
{	int i;

	for(i = 0; cos[i] != '\0'; ++i)
	{ /* tu nic nie robimy */
	}
	return i;
}