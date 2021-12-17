#include <stdio.h>
#include <string.h>

/* zadanie dla studentów
** liczby podajemy z klawiatury
** piszemy funkcja WZW
** ktora znajdzie najwieskzą wartośc w wektorze
*/

/* proszę zrobić 2 wersje programu
** Pierwsza gdzie funcja zwraca najwiekszą wartość (macie gotowy main)
** Druga copy/paste i zmienić wyswietlanie najwieszej poniewaz
** funcja nie ma zwracac wartosci a indeks pod ktorym jeest najwieksza wartosc
** int best_index = WZW(wektor,N);
** int best_value = wektor[best_index];
*/

#define N 5

int WZW(int * liczby, int n);

int main() 
{	int wektor[N];

	for (int i=0;i<N; ++i)
	{	printf("\npodaj liczbe wektor[%d]=", i);
		scanf("%d", &wektor[i]); /* (wektor+i) */ 
	}
	for (int j=0;j<N; ++j)
	{	printf("\nliczba wektor[%d]=%d", j, wektor[j]);
	}
	printf("\n\n Najwieskza z powyzszych to %d\n", WZW(wektor,N) );
	return 0;
}

int WZW(int * liczby, int n)
{	int najwieksza = liczby[0];

	/* tu widzę petlę */
	/* mozecie zwracac wartosc a w 2giej wersji na której pozycji jest najwięsksza */
	return najwieksza;
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