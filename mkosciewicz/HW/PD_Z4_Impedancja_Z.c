//Procedura RLC polega na obliczeniu impedancji połączenia szeregowego elementów R i L oraz C jako liczby zespolonej.
//Do tego potrzebna jest również OMEGA (czyli zmienna w).
//impedancja dla połączenia szeregowego wynosi R + j * w * L -j / (OMEGA * C )
//więc trzeba sprawdzić czy C nie jest ZERO; Jeśli L = 0 to po prostu przewodzący przewód. C = 0 to przerwa w obwodzie
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define RE 0
#define IM 1
#define CPLX_SIZE 2

//funkcje wprowadzaje zespolone
void cplx_read(double c[], const char *s)
  { 
    printf("Wprowadz część rzeczywistą dla %s = ", s);
    scanf("%lf", &c[RE]);
    printf("Wprowadz część urojoną dla %s = ", s);
    scanf("%lf", &c[IM]);
  }
void cplx_read_real(double c[], const char *s)
  { 
    printf("Wprowadz wartosc dla %s = ", s);
    scanf("%lf", &c[RE]);
    c[IM] = 0;
    }
void cplx_read_imag(double c[], const char *s)
  { 
    printf("Wprowadz wartosc dla %s = ", s);
    scanf("%lf", &c[IM]);
    c[RE] = 0;
  }

//funkcja dodająca
void cplx_add(double a[], double b[], double c[]) 
 {
    c[RE] = a[RE] + b[RE];
    c[IM] = a[IM] + b[IM];
 }

//funkcja odejmująca
void cplx_diff(double a[], double b[], double c[])
    {
      c[RE] = a[RE] - b[RE];
      c[IM] = a[IM] - b[IM];
    }

//funkcja mnozaca
void cplx_mltp(double a[], double b[], double c[])
    {
      c[RE] = a[RE]*b[RE] - a[IM]*b[IM];
      c[IM] = a[RE]*b[IM] + a[IM]*b[RE];
    }
    
// funkcja dzieląca
void cplx_div(double a[], double b[], double c[])
    {
      c[RE] = (a[RE] * b[RE] + a[IM] * b[IM]) / ((b[RE] * b[RE]) + (b[IM] * b[IM]));
      c[IM] = (a[IM] * b[RE] - a[RE] * b[IM]) / ((b[RE] * b[RE]) + (b[IM] * b[IM]));
    }

//funkcja drukująca
void cplx_print(double c[] , const char *s)
{  printf("\n%s = %lf + j(%lf)\n", s, c[RE],c[IM] );
} 


/*int main(){
  double R[CPLX_SIZE], L[CPLX_SIZE], C[CPLX_SIZE];
  cplx_read(R, "R");
  cplx_read(L, "L");
  cplx_add(R, L, C);
  cplx_print(C, "C");
  cplx_diff(R, L, C);
  cplx_print(C, "C");
  cplx_mltp(R, L, C);
  cplx_print(C, "C");
  cplx_div(R, L, C);
  cplx_print(C, "C");
}*/

int main()
{
    double R[CPLX_SIZE], L[CPLX_SIZE], C[CPLX_SIZE];
    double X[CPLX_SIZE], Xl[CPLX_SIZE], Xc[CPLX_SIZE], f[CPLX_SIZE], w[CPLX_SIZE], wC[CPLX_SIZE];
    double Vs[CPLX_SIZE], I[CPLX_SIZE], Vr[CPLX_SIZE], Vc[CPLX_SIZE], Vl[CPLX_SIZE];
        

    //Źródło Vs
    printf("​\nNapiecie zrodlowe generatora AC\n​");
    cplx_read_real(Vs, "Vs");
    while (Vs[RE] == 0)
      {
        printf("\nBŁĄD: Nie ma prądu :\n");
        printf("Jeszcze raz; Napiecie zrodlowe generatora AC");
        cplx_read_real(Vs, "Vs");
      }
    
    //Cewka L
    printf("\nCewka L\n");
    cplx_read_imag(L, "L");
    while (L[IM]== 0)
    {
      printf("\nBŁĄD: Badamy ukłąd RLC, a nie kabel przewodzący\n");
      printf("\nWprowadź wartość L jeszcze raz:\n");

      cplx_read_imag(L, "L");
    }

    //Kondensator C
    printf("\nKondensator C\n");
    cplx_read_imag(C, "C");
    while (C[IM]== 0)
    {
      printf("\nBŁĄD: Nie ma zamkniętego układu elelktycznego\n");
      printf("\nWprowadź wartość C jeszcze raz:\n");

      cplx_read_imag(C, "C");
    }
    
    //Opornik R
    printf("\nOpornik R\n");
    cplx_read_real(R, "R");
    while (R[RE]== 0)
    {
      printf("\nBŁĄD: Badamy ukłąd RLC, a nie samo LC\n");
      printf("\nWprowadź wartość L jeszcze raz:\n");

      cplx_read_real(R, "R");
    }
    
    //Częstotliwość generatora AC
    printf("\nCzęstotliwość generatora AC\n");
    cplx_read_real(f, "f");

    double dblpi[2] = {6.28, 0.0};
    double one[2] = {1.0, 0.0};

    
    //Obliczenie OMEGA
    cplx_mltp(dblpi, f, w);

    //Obliczenie wartości Xc
    cplx_mltp(w, C, wC);
    cplx_div(one, wC, Xc);

    //Obliczenie wartości  Xl
    cplx_mltp(w, L, Xl);
    

    //Obliczenie impendacji X
    cplx_diff(Xl, Xc, X);
       
    
    //Obliczenie wartości spadków napięcia
    cplx_div(Vs, R, I);
    cplx_mltp(I, R, Vr);
    cplx_mltp(I, Xc, Vc);
    cplx_mltp(I, Xl, Vl);


    double Z[CPLX_SIZE] = {R[0], X[1]};

    printf("\nImpedancja układu to: \n");
    cplx_print(Z, "Z");
    printf("\nSpadek napięcia na R to: ");
    cplx_print(Vr, "Vr");
    printf("\nSpadek napięcia na Xc to: ");
    cplx_print(Vc, "Vc");
    printf("\nSpadek napięcia na Xl to: ");
    cplx_print(Vl, "Vl");

    cplx_print(Xl, "Xl");
    cplx_print(Xc, "Xc");
    cplx_print(X, "X");

    cplx_print(C, "C");
    cplx_print(f, "f");
    cplx_print(w, "w");
    cplx_print(wC, "wC");

    return 0;
}
