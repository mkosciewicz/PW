//Zmiana miejscami MAX element veca z ostatnim

#include <stdio.h>
#include <stdlib.h>

void zamien_el(int *x, int *y)
{	
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main ()
{
  int n;
  int tab[50];
  printf("Wprowadz ilosc elementow (od 1 do 50): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {             // 'i' pełni tu rolę indeksu tablicy
    printf("Wprowadz element %d: ", i + 1); 
    scanf("%d", &tab[i]);
  }
    for (int i = 1; i < n; ++i) {
      if (tab[0] < tab[i]) 
      {
        tab[0] = tab[i];
      }
  }
  printf("MAX element = %d\n", tab[0]);
  tab[0];
  tab[n];

  zamien_el(&tab[0], &tab[n]);

  printf("\nWektor po zamianie max_elem przez ostatni:\n");
  for (int i = 0; i < n; i++);
  printf("%d\n", tab[n]);
  return 0;
}


