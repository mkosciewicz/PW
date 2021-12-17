//Okreslenie MAX element wektora

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  double tab[7];
  printf("Wprowadz ilosc elementow wektora (od 1 do 7): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {             // 'i' pełni tu rolę indeksu tablicy
    printf("Wprowadz element %d: ", i + 1); //element wektora nie moze byc zero
    scanf("%lf", &tab[i]);
  }

  // zapisz najwieksza wartosc do tab[0]
  for (int i = 1; i < n; ++i) {
    if (tab[0] < tab[i]) {
      tab[0] = tab[i];
    }
  }

  printf("MAX element = %.2lf\n", tab[0]); // Użycie %.2lf wynika z faktu że wektor (tablica) przyjmuje wartosci dziesietne, ktore ograniczam do 2 liczb znaczacych porzez '.2'

  return 0;
}
