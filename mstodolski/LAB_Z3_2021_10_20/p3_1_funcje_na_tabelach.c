#include <stdio.h>
#define N 4

void drukuj_tab(int *p, int n, char *nazwa /*zakladam ze to napis czyli onczy go zero*/)
{	for(int i=0; i < n; ++i)
	{ 	printf("\nwartosc %s[%d]=%d", nazwa, i, p[i]);
		/* printf("\nwartosc %s[%d]=%d", nazwa, i, *(p+i)); */
		/* p[i] - i-ty element wektora p */
		/* &p[i] - adres i-tego element wektora p */
		/* (p + i) adres itego elementu wektora p */
		/* *(p + i) i-ty element wektora p JEGO WARTOSC */
		/* (p+i)[0] -> t samo co wyzej -> pierwszy element wektora p przesuni�tego o i elem */
	}
}

void wczytaj_dane(int *t, int n, char *nazwa)
{
	for(int i=0; i < N; ++i)
	{  	printf("\nPodaj %s[%d]", nazwa, i); /* %s -> napis, %d wartosc int */
		scanf("%d",(t+i)); /* adres itego elementu wetora t - scanf oczekuje adressu a nie wartosci */
		/* scanf("%d", &t[i]); */
	}
}

int main()
{	int tab[N];

	char * napis = "tab";
	wczytaj_dane(tab, N, napis);
	/*drukuj_tab(tab, N, "tab");*/
	drukuj_tab(tab, N, napis);
	return 0;
}
