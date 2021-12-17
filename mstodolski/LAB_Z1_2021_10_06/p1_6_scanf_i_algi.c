#include <stdio.h>

int main(void) 
{	/* wyświetlanie to wołanie funcji printf (stdio.h) z parametrami */
	/* aby móc korzystać z funcji z biblioteki stdio.h musimy dołączyć
	** deklarcję tych procedur
	*/
	int a,b; /* deklaracja */
	
	printf("\npodaj wartosc A\t");
	scanf("%d",&a);
	
	printf("\npodaj wartosc B\t");
	scanf("%d",&b);
	
	/* if (wyrazenie logiczne )
		{ jak prawda }
		else { jak nie prawda }
	*/
	if (a < b )
	{ printf("a < b (%d < %d)", a, b);
	} else
	{ printf("a >= b (%d >= %d)", a, b);
	}
	printf("\n");
	/* jeżeli procedura może zmieniać wartość przekazanej zmiennej to 
	** przekazujemy adres tej zmiennej czyy &N ja wyżej 
	*/
	/* parametry wywołania procedury oddzielamy przecinkami
	** zazwyczaj procedury mają stałą liczbę parametrów określonego typu
	** printf jest wyjątkiem i można przekazać prawie dowolną liczbę parametrów 
	*/
	return 0; /* kazde polecenie języka C konczy znak ; */
	/* przyjęło się, że 0 to OK inna wartość to błąd */
}   