#include <stdio.h>
#include <math.h>

struct s_cplx{
	double re;
	double im;
	char *name;
};


void prt_cplx(struct s_cplx *a,int rozmiar)
{	
	for (int i =0; i<rozmiar; ++i)
	{
	printf("\n%s(%5.2lf; %5.2lf)", (a+i)->name, (a+i)->re, (a+i)->im);
	}
}

void wczytaj_cplx(struct s_cplx *a, int rozmiar)
{
	for (int i =0; i<rozmiar; ++i)
	{
	printf("\n\npodaj wartosci dla %d-tej skladowej wektora %s",i,a->name);
	printf ("\npodaj czesc rzeczywista zmiennej %s = ",(a+i)->name);
	scanf("%lf", &((a+i)->re));
	printf ("podaj czesc urojona zmiennej %s = ",(a+i)->name);
	scanf("%lf",&((a+i)->im));
	}
}

void dodaj_cplx(struct s_cplx *a,struct s_cplx *b,struct s_cplx *c)
{
	c->re = a->re + b->re;
	c->im = a->im + b->im;
}

void odejmij_cplx(struct s_cplx *a,struct s_cplx *b,struct s_cplx *c)
{
	c->re = a->re - b->re;
	c->im = a->im - b->im;
}

void mnoz_cplx(struct s_cplx *a,struct s_cplx *b,struct s_cplx *c)
{
	c->re = (a->re)*(b->re) - (a->im)*(b->im) ;
	c->im = (a->re)*(b->im) + (a->im)*(b->re);
}

void dziel_cplx(struct s_cplx *a,struct s_cplx *b,struct s_cplx *c)
{
	int mianownik = pow(b->re,2) + pow(b->im,2);
	c->re = ((a->re)*(b->re) + (a->im)*(b->im))/mianownik ;
	c->im = ( (a->im)*(b->re) - (a->re)*(b->im))/mianownik;
}

void il_skal(struct s_cplx *a,struct s_cplx *b,struct s_cplx *d,int rozmiar_mniejszego_wektora)
{

	for (int i =0;i<rozmiar_mniejszego_wektora;++i)
	{
	d->re += (((a+i)->re)*((b+i)->re) + ((a+i)->im)*((b+i)->im));
	d->im += (((a+i)->re)*((b+i)->im) - ((a+i)->im)*((b+i)->re));
	}
}


int main(void)
{
	struct s_cplx a,b,c,d,e,f,g;
	struct s_cplx v[5];
	struct s_cplx u[5];

	a.name = "a";
	b.name = "b";
	c.name = "c";
	d.name = "d";
	e.name = "e";
	f.name = "f";
	g.name = "g";
	
		for (int n = 0; n < 5; ++n )
		{
			
			v[n].name = "v";
			u[n].name = "u";
		}
	
	wczytaj_cplx(&a,1);
	prt_cplx(&a,1);
	
	wczytaj_cplx(&b,1);
	prt_cplx(&b,1);
	
	dodaj_cplx(&a,&b,&c);
	printf("\n\nwynik dodawania a+b =c =>");
	prt_cplx(&c,1);
	
	odejmij_cplx(&b,&a,&d);
	printf("\nwynik odejmowania b-a =d =>");
	prt_cplx(&d,1);
	
	mnoz_cplx(&c,&d,&e);
	printf("\nwynik mnozenia c*d =e =>");
	prt_cplx(&e,1);
	
	dziel_cplx(&d,&c,&f);
	printf("\nwynik dzielenia d/c =f =>");
	prt_cplx(&f,1);
	
	wczytaj_cplx(&v,5);
	prt_cplx(&v,5);
	wczytaj_cplx(&u,5);
	prt_cplx(&u,5);
	
	il_skal(&v,&u,&g,5);
	prt_cplx(&g,1);

	return 0;
}