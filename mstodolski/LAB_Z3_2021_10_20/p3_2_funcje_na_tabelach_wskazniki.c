#include <stdio.h>
#define N 3

void drukuj_tab(int *p, int n, char *nazwa /*zakladam ze to napis czyli onczy go zero*/)
{	for(int i=0; i < n; ++i)
	{ 	printf("\nwartosc %s[%d]=%d", nazwa, i, p[i]);
		/* printf("\nwartosc %s[%d]=%d", nazwa, i, *(p+i)); */
		/* p[i] - i-ty element wektora p */
		/* &p[i] - adres i-tego element wektora p */
		/* (p + i) adres itego elementu wektora p */
		/* *(p + i) i-ty element wektora p JEGO WARTOSC */
		/* (p+i)[0] -> t samo co wyzej -> pierwszy element wektora p przesuniętego o i elem */
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

int main(void)
{	int tab[N];

	char * napis = "tab";
	wczytaj_dane(tab, N, napis);
	/*drukuj_tab(tab, N, "tab");*/
	drukuj_tab(tab, N, napis);
	
	int *p = tab;
	printf("\n*p=%d a tab[0]=%d]", p[0], tab[0]);
	p = (tab + 1); /* to samo co p = p + 1 */
	printf("\n*p=%d a tab[1]=%d", p[0],tab[1]);
	return 0;
}
