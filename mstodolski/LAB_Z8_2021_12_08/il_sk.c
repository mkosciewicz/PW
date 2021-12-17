#include <stdio.h>
/* praca samodzielna
** odejmowanie struktur typu cplx
** mnożenie liczb typu cplx
** iloczyn kartezjanski dwu wektorów z elementam typu cplx
*/

double il_sk(double a[], double b[], int rozmiar)
{	double wynik=0;
	for(int i=0; i<rozmiar;++i)
		wynik += a[i]*b[i];
	return wynik;
}

#define N 10

int main(void)
{	double a[2*N], b[N];
	for(int i=0;i<N;++i)
	{ 	a[i]=i;
		b[i]=i+1;
	}
	printf("\nwynik il sk=%lf", il_sk(a,b,N));
	printf("\n\nrozmiar a=%d", sizeof(a)/sizeof(a[0]));
	printf("\n\nrozmiar a=%d w bajtach, rozmiar elementu a w bajtach = %d", sizeof(a),sizeof(a[0]));
	/* sizeof(a) rozmiar wektora a wyrazony w bajtach
	** sizeof(a[0]) rozmiar jednego elementu wyrazony w bajtach
	*/
}