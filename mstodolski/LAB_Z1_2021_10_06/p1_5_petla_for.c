#include <stdio.h>

int main(void) 
{	/* wyświetlanie to wołanie funcji printf (stdio.h) z parametrami */
	/* aby móc korzystać z funcji z biblioteki stdio.h musimy dołączyć
	** deklarcję tych procedur
	*/
	int i; /* deklaracja */
	i = 2*5+4; /* może być stała lub wyrażenie */
	printf("Wynik dzialania (2*5+4)=%d a stala 6 jest rowna %d",i,6); /* jest to polecenie więc musi mieć średnik na końcu */
	/* parametry wywołania procedury oddzielamy przecinkami
	** zazwyczaj procedury mają stałą liczbę parametrów określonego typu
	** printf jest wyjątkiem i można przekazać prawie dowolną liczbę parametrów 
	*/
	/* petla for -> for ("coś na początku"; warunek końca pętli ; "coś na końcu" )
	** "coś na początku" - wydarza się raz przed pętlą
	** czy warune spełniony - TAK idziemy dalej, NIE - KONIEC
	** operacje wewnątrz pętli
	** "coś na końcu" - wydarza się każdorazowo
	*/
	/* dodajmy dwie puste linie przed wydruiem w pętli */
	printf("\n\nMoja petla:"); 
	
	for( i=0; i < 5; ++i /* zzwiększ wartość i o 1 to samo co i = i + 1 */)
	{	printf("\nwartosc i w petli wynosi %d\n", i);	
		/* \n wewnątrz napisu oznacza przejdź do nowej linii */
	}
	/* napisy w C to ciąg znaków objęcty w " */
	return 0; /* kazde polecenie języka C konczy znak ; */
	/* przyjęło się, że 0 to OK inna wartość to błąd */
}   