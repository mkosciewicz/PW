#include <stdio.h>
#include <stdlib.h>

#define N 5

int main () 
{
    int a[N][N], b[N][N],Suma[N][N], Iloczyn[N][N];
    int a_wiersze, a_kolumny, b_wiersze, b_kolumny;
    int i, j, k;

    //Treść macierzy A
    printf("Ustal wiersze i kolumny macierzy A: \n");
    scanf("%d %d", &a_wiersze, &a_kolumny);

    printf("Wprowadź elementy macierzy A: \n");
    for (i = 0; i < a_wiersze; ++i)
    {
        for (j = 0; j < a_kolumny; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //Treść macierzy B
    printf("Ustal wiersze i kolumny macierzy B: \n");
    scanf("%d %d", &b_wiersze, &b_kolumny);
    
    while (a_wiersze != b_wiersze || a_kolumny != b_kolumny)
    {
        printf("\nBŁĄD: Aby dodać macierze ilość wierszy i kolumn musi być ta sama w obydwu macierzach.\n");
        printf("\nWprowadź jeszcze raz:\n");

        printf("Ustal wiersze i kolumny macierzy A: \n");
        scanf("%d%d", &a_wiersze, &a_kolumny);
        printf("Ustal wiersze i kolumny macierzy B: \n");
        scanf("%d%d", &b_wiersze, &b_kolumny);
    }

   
        printf("Wprowadź elementy macierzy B: \n");
        for (i = 0; i < b_wiersze; ++i)
            {
                for (j = 0; j < b_kolumny; ++j)
                {
                    scanf("%d", &b[i][j]);
                }
            }
        
    
    

    printf("\n");
    //Dodawanie A, B i przedstawienie
    for(i = 0; i < a_wiersze; ++i)
			for( j = 0; j < b_kolumny; j++)
				Suma[i][j] = a[i][j] + b[i][j];
                
		printf("\nDodanie macierzy:\n");
		for(i = 0;i < a_wiersze; ++i)
		{
			for(j = 0;j < b_kolumny; ++j)
				printf("[%d] ", Suma[i][j]);
			printf("\n");
		}

    //Mnożenie A, B i przedstawienie
    for (i = 0; i < a_wiersze; ++i)
    {
        for (j = 0; j < b_kolumny; ++j)
        {
            for (k = 0; k < a_kolumny; ++k)
            {
               Iloczyn[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nIloczyn macierzy\n");
    for (i = 0; i < a_wiersze; ++i)
    {
        for (j = 0; j < b_kolumny; ++j)
        {
            printf("[%d] ", Iloczyn[i][j]);
        }
       printf("\n");
    }
    return 0;
}