#include <stdio.h>

/* 
void qq(int i) -> przekazywana do procedury wartość z programu gownego
nie ma możliwości zmiany przekazanej zmienne
i = 4;

int main(void)
{ int kk=5;
  qq(kk);  na pewno kk nie zmieni wartosc 
  
void qq2(int wektor[] ) nie trzeba podawc rozmiaru
void qq3(int *wektor) { wektor[0] = 2; }
przekazywany jest adres pierwszego elementu

wektor[0] = 5 -> zmiana wartosci ele. wektora z programu glownego

int main(void)
{	 int kk=5; int w[6]
	qq3(&kk); -- w wyniu kk=2
	qq3(w); element w[0] zostal zmieniony na 2
*/

/* 

Liczby typu COMPLEX 
Kazda liczba to wetor dwuelementowy
index - 0 część rzeczywista
index - 1 urojona

*/
#define RE 0
#define IM 1
#define CPLX_SIZE 2

void cplx_print(double c[] , const char *s)
{  printf("\nLiczba komplex %s(RE=%5.2lf; IM=%5.2lf)", s, c[RE],c[IM] );
}  

void cplx_read(double c[] , const char *s)
{  	printf("\nPodaj czesc rzeczywista liczby zespolonej %s = ", s);
	scanf("%lf", &c[RE]);
	printf("\nPodaj czesc urojoną liczby zespolonej %s = ", s);
	scanf("%lf", &c[IM]);
}  
void cplx_add(double a[], double b[], double c[])
{
	/* c = a + b c(re,im) = a.re+b.re, a.im+b.im */
	c[RE] = a[RE] + b[RE];
	c[IM] = a[IM] + b[IM];
}
int main (void)
{	double a[CPLX_SIZE], b[CPLX_SIZE], c[CPLX_SIZE] ;

	/* wczytanie zmiennej complex a */
	cplx_read(a, "a");
	cplx_print(a, "a");
	/* wczytanie zmiennej complex a */
	cplx_read(b, "b");
	cplx_print(b, "b");
	
	cplx_add(a,b,c);
	printf("\nwynik dodawania a+b jest równy:\n");
	cplx_print(c, "c");
	printf("\n");
	return 0;
}