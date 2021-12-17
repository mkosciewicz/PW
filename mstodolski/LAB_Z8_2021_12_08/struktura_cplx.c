#include <stdio.h>

struct s_cplx {
double re;
double im;
char *name;
};

/* struct s_cplx a, *p;
   a.re = 2; przypisalem 2 do czesci rzeczywistej w zmiennej a
   p = &a;
   p->re = -2; poprzez wskazni zmienilem czesc rzeczywista w zmienne a na -2
*/
void prt_cplx(struct s_cplx *a)
{ 	printf("\n%s(%5.2lf; %5.2lf)", a->name, a->re, a->im);
}
void wczytaj_cplx(struct s_cplx *a)
{ 	printf("\nPodaj czesc rzeczywista zmiennej %s = ", a->name);
	scanf("%lf",&(a->re));
 	printf("\nPodaj czesc urojona zmiennej %s = ", a->name);
	scanf("%lf",&(a->im));
}

int main(void)
{	struct s_cplx a,b,c;
	a.name = "a";
	b.name = "b";
	c.name = "c";
	wczytaj_cplx(&a);
	prt_cplx(&a);
	return 0;
}