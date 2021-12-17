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
		/* &t[i] */
	}
}

void zwroc_wiele(int *t, int rozmiar, int *wyniki, int *w1, int *w2)
{  wyniki[0]=-1;
   wyniki[1]=2;
   
   w1[0]=3;
   *w2 = 4;
}

void szukaj_max(int *tab, int rozmiar, int *index_max, int *max_wartosc)
{
	*index_max = 10;
	*max_wartosc = 123;
}

int main(void)
{	int tab[N]; /* adres tabeli N elementowej */
    int wyn[2];  /* adres tabeli 2*N elementowej */
	int ww1, ww2;
	
	zwroc_wiele(tab,N,wyn, &ww1, &ww2 );
	
	printf("\nwyn[0]=%d\nwyn[1]=%d\nww1=%d\nww2=%d", wyn[0], wyn[1], ww1,ww2);

	{ int bestIndex; int bestValue;
		szukaj_max(tab,N,&bestIndex,&bestValue);
		printf("\nnajwieksza wartosc to %d\nznaleziona na pozycji nr%d",bestValue,bestIndex);
	}
	return 0;
}
