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

void kopiuj_tabele(int *t1 /* adres pierwszego elementu tablicy z której kopiujemy */
				, int t1_N /* rozmiar tablicy */
				, int *t2  /*adres pierwszego elementu tablicy do której kopiujemy */
				, int t2_N /* rozmiar drugiej tablicy */
				, int t1_od /* kopiuj od tego elementu */
				, int t1_ile) /* kopiuj tyle elementow */
{   int maks = t1_od + t1_ile; /* od 0 2 elementy to max bedzie 3 */
	if( maks > t2_N)
		maks = t2_N;
	
	for(int i = t1_od; i< maks;++i)
	{	t2[i]=t1[i];
	}
}

int main(void)
{	int tab[N]; /* adres tabeli N elementowej */
    int tab2[2*N];  /* adres tabeli 2*N elementowej */

	char * napis = "tab";
	wczytaj_dane(tab, N, napis);
	/*drukuj_tab(tab, N, "tab");*/
	drukuj_tab(tab, N, napis);
	kopiuj_tabele(tab,N,tab2,(2*N), 0, N ); 
	printf("\ntabela po zamianie miejscami pierwszego i os ele");
	drukuj_tab(tab2, N, "tab2");
	kopiuj_tabele(tab,N,tab2+N,(2*N), 0, N ); 
	drukuj_tab(tab2, 2*N, "tab2");
	return 0;
}
