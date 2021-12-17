#include <stdio.h>

#define LICZBA_K_A 4
#define LICZBA_W_A 3
#define LICZBA_K_B 2

int wez_index(int w, int k, int dekl_liczba_kol )
{ return (w*dekl_liczba_kol)+k;
}

void druk_el_mac_2wym
(double *ad1szego_el
, int w /* index wiersza */
, int k /* index kolumny */
, int dekl_liczba_kol /* deklarowana liczba kolumn A[ile_w][dekl_liczba_kol */
, char *nazwa)
{	int index = wez_index(w,k,dekl_liczba_kol);
	printf("\n%s[%d][%d]=%lf (%d)", nazwa, w, k, ad1szego_el[index], index );
}
void drukuj_macierz(double *ad1szego_el
, int w /* liczba wierszy macierzy */
, int k /* liczba kolumn */
, int dekl_liczba_kol, char *nazwa
)
{  for(int i=0; i < w; ++i )
	{ for (int j=0; j < k; ++j )
	  { druk_el_mac_2wym(ad1szego_el, i, j, dekl_liczba_kol, nazwa);
	  }
	}
}
int main(void)
{
	double A[LICZBA_W_A][LICZBA_K_A];
	double B[LICZBA_K_A][LICZBA_K_B]; /* aby A mnozyło się przez B liczba kol w A == liczba w w B */
	double C[LICZBA_W_A][LICZBA_K_B];
	double *p = &A[0][0];
	int w, k, i, j;
	
	for (w = 0; w < LICZBA_W_A; ++w)
	{	for( k=0; k < LICZBA_K_A; ++ k)
		{ A[w][k]=1;
		}
	}
	drukuj_macierz(p, LICZBA_W_A, LICZBA_K_A, LICZBA_K_A, "A");
	
	for (w = 0; w < LICZBA_K_A; ++w)
	{	for( k=0; k < LICZBA_K_B; ++ k)
		{ B[w][k]=2;
		}
	}
	drukuj_macierz(&B[0][0], LICZBA_K_A, LICZBA_K_B, LICZBA_K_B, "B");
	
	return  0;
}
