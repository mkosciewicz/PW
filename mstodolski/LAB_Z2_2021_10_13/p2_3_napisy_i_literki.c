#include <stdio.h>
#include <string.h>



int main(void) 
{	char  *k = "ala ma kota"; /* k[0] = 'h', k[1]='e' k[3]='l' */ 
	/* "ala ma kota" to zmienna statyczna */
	char p[30]; /* zmienna typu adres to char *k jak i char p[20]
	** jedyna róznica to ze p wskazuje na obszar 30 znaków a k na obszar napisu */
	
	strcpy(p,k); /* kopiuje do parametru pierwszego  z parametr udrugiego */ 
	printf("\nnapis p to \'%s\'", p);
	strcat(p,"+psa"); /* do napisu, który jest w p dodajmy kolejny - uwaga musi byc wyst miejsca*/
	printf("\nnapis p po modyfiacji to \'%s\'", p);
	printf("\n");

	return 0;
}
