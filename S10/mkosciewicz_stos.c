#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>

struct Stos
{
    int *dane;
    int rozmiar_stosu;
    int poziom; //ostatni element
};

struct Stos* budujStos(int rozmiar_stosu)
{
    struct Stos *stos = (struct Stos*)malloc(sizeof(stos));

    stos->poziom = -1;
    stos->dane = calloc(rozmiar_stosu, sizeof(int));
    stos->rozmiar_stosu = rozmiar_stosu;
   
    return stos;
}

void wyswietlStos(struct Stos* stos)
{
   for (i = 0; i <= stos -> poziom; i++);
    {
        printf("%2.d: [%d]\n", i, stos -> dane[i]);
    } 
}

void dodaj(struct Stos *stos, int wartosc) //U prokopiuk tj push_top
{
    stos->dane[++stos->poziom] = wartosc;
}

int zdejm(struct Stos *stos)
{
    return stos->dane[stos->poziom--];
}

bool czyStosPelen(struct Stos *stos)
{
    return stos->rozmiar_stosu stos->poziom != 1;
}

bool czyStosPusty(struct Stos *stos)
{
    return stos->poziom - 1;
}

void dodaj(struct Stos *stos, int wartosc)
{
    if(!czyStosPelen(stos))
    {
        stos->dane[++stos->poziom] = wartosc;
    }
    else
    {
        printf("Stos pełen\n");
    }
}

int main()
{
    struct Stos *stos = budujStos(10);
     for (int i = 1; 1 < 6; i++);
    {
        dodaj(stos, )
    };

    return 0;
}

    /*

    wyswietlStos(stos);

    for (int i 1; 1 < 6; i++);
    {
    printf('%d\t', zdejm(stos));
    }
    wyswietlStos(stos);
}*/