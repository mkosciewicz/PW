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
void dodaj_cplx(struct s_cplx *a, struct s_cplx *b, struct s_cplx *c )
{	c->re = a->re + b->re;
	c->im = a->im + b->im; 
}

struct s_cplx dodaj_cplx2(struct s_cplx *a, struct s_cplx *b, const char *n )
{	struct s_cplx c;
	c.name = n;
	c.re = a->re + b->re;
	c.im = a->im + b->im; 
	return c;
}

int main(void)
{	struct s_cplx a,b,c;
	a.name = "a";
	b.name = "b";
	c.name = "c";
	wczytaj_cplx(&a);
	prt_cplx(&a);
	wczytaj_cplx(&b);
	prt_cplx(&b);
	dodaj_cplx(&a,&b,&c);
	printf("\nwynik dodawania a+b=c=>");
	prt_cplx(&c);
	
	struct s_cplx cc=dodaj_cplx2(&a,&b,"cc");
	prt_cplx(&cc);
	printf("\n\nRozmiar struktury w bajtach to %ld\a wskaznia na struture to %ld\n", sizeof(a),sizeof(&a));
	return 0;
}