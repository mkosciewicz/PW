#include <stdio.h>
#define N 15

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

int szukaj_w_wektorze_uporzadkowanym(int*tab,int tab_rozm, int wartosc)
{
	/* ja się uda to index pomiedzy 0 a tab_rozm-1 */
	/* jak nie ma to -1 */
	/* zakłądamy wektor uporządowany rosnąco */
	/* jesli w srodku wektora wartosc mniejsza niz szukana to bedziemy szuac na prawo */
	/* w przeciwnym razie na lewo */
	int pocz = 0; 
	int koniec = tab_rozm-1;
	/* algorutm nigdy nie wymaga N kroków - to zabezpieczenie przed nieskonczona petlą */
	for(int i =0; pocz < koniec && i<tab_rozm; ++i)
	{ int srodek = pocz + (koniec-pocz)/2;
	  if( tab[srodek] == wartosc )
	  	return srodek;
	  if( tab[srodek] < wartosc )
	  { pocz=srodek+1;
			
	   } else
	   { koniec = srodek-1;
	   }
	   printf("\n\ntab[srodek]=%d\npocz=%d\nkon=%d\nsr=%d", tab[srodek],pocz,koniec,srodek);
	}
	return -1;
}
int main(void)
{	int tab[N]; /* adres tabeli N elementowej */
	for(int i =0; i<N;++i) 
	{ tab[i] = (i+1)*2; /* wypełniam wartościami */
	}
	drukuj_tab(tab, N, "tab");
	{  int szukana_wartosc=14;
	   int wynik = szukaj_w_wektorze_uporzadkowanym(tab,N, szukana_wartosc);
	   printf("\nszukaana wartos=%d znaleziona na poz%d", szukana_wartosc, wynik);
	}
	return 0;
}
