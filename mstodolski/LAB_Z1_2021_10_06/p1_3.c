#include <stdio.h>

int main(void) 
{	/* wyświetlanie to wołanie funcji printf (stdio.h) z parametrami */
	/* aby móc korzystać z funcji z biblioteki stdio.h musimy dołączyć
	** deklarcję tych procedur
	*/
	printf("hello world"); /* jest to polecenie więc musi mieć średnik na końcu */
	/* napisy w C to ciąg znaków objęcty w " */
	return 0; /* kazde polecenie języka C konczy znak ; */
	/* przyjęło się, że 0 to OK inna wartość to błąd */
}   