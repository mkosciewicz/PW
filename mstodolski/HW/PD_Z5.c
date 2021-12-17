//Struktura cplx dodawanie, mnożenie i iloczyn skalarny
/*Czy jak robimy to mnożenie wektora struktur to każda struktura w danym wektorze ma mieć inną nazwę?
np. różnić się numerem?
wszystkie prosze v nazwac v[n].name = "v"; */
#include <stdio.h>

struct s_cplx {
double re;
double im;
char *name;
};

//funkcje wprowadzaje zespolone
void cplx_read(struct s_cplx *a)
  { 
    printf("Wprowadz część rzeczywistą dla %s = ", a->name);
    scanf("%lf", &(a->re));
    printf("Wprowadz część urojoną dla %s = ", a->name);
    scanf("%lf", &(a->im));
  }

//funkcja dodająca
void cplx_add(struct s_cplx *a, struct s_cplx *b, struct s_cplx *c) 
 {
    c->re = a->re + b->im;
    c->im = a->im + b->im;
 }

//funkcja odejmująca
void cplx_diff(struct s_cplx *a, struct s_cplx *b, struct s_cplx *c)
    {
      c->re = a->re - b->im;
      c->im = a->im - b->im;
    }

//funkcja mnozaca
void cplx_mltp(struct s_cplx *a, struct s_cplx *b, struct s_cplx *c)
    {
      c->re = a->re*b->im - a->im*b->im;
      c->im = a->re*b->im + a->im*b->im;
    }
    
// funkcja dzieląca
void cplx_div(struct s_cplx *a, struct s_cplx *b, struct s_cplx *c)
    {
      c->re = (a->re * b->im + a->im * b->im) / ((b->im * b->im) + (b->im * b->im));
      c->im = (a->im * b->im - a->re * b->im) / ((b->im * b->im) + (b->im * b->im));
    }

//funkcja drukująca
void cplx_print(struct s_cplx *a)
{  printf("\n%s = %2.2lf + j(%2.2lf)\n",a->name, a->re, a->im );
} 



int main()
{
  return 0;
}