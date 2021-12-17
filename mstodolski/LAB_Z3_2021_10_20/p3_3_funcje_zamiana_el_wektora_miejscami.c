#include <stdio.h>
#define N 3

void drukuj_tab(int *p, int n, char *nazwa /*zakladam ze to napis czyli onczy go zero*/)
{	for(int i=0; i < n; ++i)
	{ 	printf("\nwartosc %s[%d]=%d", nazwa, i, p[i]);
	}
}

void wczytaj_dane(int *t, int n, char *nazwa)
{
	for(int i=0; i < N; ++i)
	{  	printf("\nPodaj %s[%d]", nazwa, i); /* %s -> napis, %d wartosc int */
		scanf("%d",(t+i)); /* adres itego elementu wetora t - scanf oczekuje adressu a nie wartosci */
	}
}

void zamien_el(int *wektor, int i, int j)
{	if (i == j)
		return; /* koniec dzialania funkcji */
	int zapamietaj = wektor[i];
	wektor[i]=wektor[j];
	wektor[j]=zapamietaj;
}

int main(void)
{	int tab[N];

	char * napis = "tab";
	wczytaj_dane(tab, N, napis);
	/*drukuj_tab(tab, N, "tab");*/
	drukuj_tab(tab, N, napis);
	zamien_el(tab,0,N-1); 
	printf("\ntabela po zamianie miejscami FIRST i LAST element");
	drukuj_tab(tab, N, napis);
	printf("\n");

	return 0;
}
