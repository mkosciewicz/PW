#include <stdio.h>
#include <string.h>

/*zadanie dla studentów
**liczby podajemy z klawiatury
**piszemy f(x) wieksza_z_wielu*/

int wieksza_z_3ech(int,int,int);

int main(void) 
{
	int i1,i2,i3;
	{printf("\npodaj liczbe wektor[%d]=");
	scanf("%d", &wektor[i]); /* wektor +i*/
	}

/* wyasnienie co to jest adres i jak uzyskac adres zmiennej i ja podstawic wartosc
** pod to na co wskazuje adres
*/
	int *adres = &i1; /* deklaracja adresu do liczby typu int i przypisanie adresu zmiennej i1
						** pod zmienną adresowa - w C nazywa sie to WSKAZNIK */
	
	adres[0] = 780; /* pod adres zmienne adres wstawiam wartosc a to adres zmiennej i1
					** czyli to to samo co przypisanie 780 do zmiennej i1 */
	printf("\ni1=%d",i1);


	printf("\npodaj a=");
	scanf("%d", &i1);
	printf("\npodaj b=");
	scanf("%d", &i2);
	printf("\npodaj c=");
	scanf("%d", &i3);
	
	printf("\nnajwieksza z (%d,%d,%d) to %d", i1,i2,i3,wieksza_z_3ech(i1,i2,i3) );
	
	printf("\nwartosci zmiennych z programu main nie zmienija sie i1=%d", i1);
	
	return 0;
}

int wieksza_z_3ech(int a,int b,int c)
{	int najwieksza = a;

	if (b > najwieksza )
	{	najwieksza = b;
	}
	if (c > najwieksza )
	{	najwieksza = c;
	}
	a=-1;
	return najwieksza;
}

int dlugosc_napisu(char *cos)
{	int i;

	for(i = 0; cos[i] != '\0'; ++i)
	{ /* tu nic nie robimy */
	}
	return i;
}