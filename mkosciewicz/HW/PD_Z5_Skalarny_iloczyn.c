#include <stdio.h>
#include <math.h>

struct s_cplx{
	double re;
	double im;
	char *name;
};


void prnt_cplx(struct s_cplx *a,int rozmiar)
{	
	for (int i =0; i<rozmiar; ++i)
	{
	printf("\n%s(%5.2lf; %5.2lf)", (a+i)->name, (a+i)->re, (a+i)->im);
	}
}

void read_cplx(struct s_cplx *a, int rozmiar)
{
	for (int i =0; i<rozmiar; ++i)
	{
	printf("\n\nwprowadz wartosci dla %d-tej skladowej wektora %s",i,a->name);
	printf ("\nwprowadz czesc rzeczywista zmiennej %s = ",(a+i)->name);
	scanf("%lf", &((a+i)->re));
	printf ("wprowadz czesc urojona zmiennej %s = ",(a+i)->name);
	scanf("%lf",&((a+i)->im));
	}
}

void add_plx(struct s_cplx *a,struct s_cplx *b,struct s_cplx *c)
{
	c->re = a->re + b->re;
	c->im = a->im + b->im;
}

void subs_cplx(struct s_cplx *a,struct s_cplx *b,struct s_cplx *c)
{
	c->re = a->re - b->re;
	c->im = a->im - b->im;
}

void mltp_cplx(struct s_cplx *a,struct s_cplx *b,struct s_cplx *c)
{
	c->re = (a->re)*(b->re) - (a->im)*(b->im) ;
	c->im = (a->re)*(b->im) + (a->im)*(b->re);
}

void div_cplx(struct s_cplx *a,struct s_cplx *b,struct s_cplx *c)
{
	c->re = ((a->re)*(b->re)) + ((a->im)*(b->im))/((b->re)*(b->re)) + ((b->re)*(b->re));
	c->im = ((a->im)*(b->re)) - ((a->re)*(b->im))/((b->re)*(b->re)) + ((b->re)*(b->re));
}

void scal_mltp(struct s_cplx *a,struct s_cplx *b,struct s_cplx *d,int rozmiar_mniejszego_wektora)
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
	
	read_cplx(&a,1);
	prnt_cplx(&a,1);
	
	read_cplx(&b,1);
	prnt_cplx(&b,1);
	
	add_plx(&a,&b,&c);
	printf("\n\nwynik dodawania a+b =c =>");
	prnt_cplx(&c,1);
	
	subs_cplx(&b,&a,&d);
	printf("\nwynik odejmowania b-a =d =>");
	prnt_cplx(&d,1);
	
	mltp_cplx(&c,&d,&e);
	printf("\nwynik mnozenia c*d =e =>");
	prnt_cplx(&e,1);
	
	div_cplx(&d,&c,&f);
	printf("\nwynik dzielenia d/c =f =>");
	prnt_cplx(&f,1);
	
	read_cplx(&v,5);
	prnt_cplx(&v,5);
	read_cplx(&u,5);
	prnt_cplx(&u,5);
	
	scal_mltp(&v,&u,&g,5);
	prnt_cplx(&g,1);

	return 0;
}
