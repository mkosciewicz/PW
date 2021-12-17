
int main(void) /* program w języku C zawsze jest to procedura main */
/* w języku C nazwy Duża Mała liter sa rozróżniane, n i N to dwie rózne rzeczy */
/* komentarze w jężyku C  zawierają dwa znaki na początek i dwa zaanki na koniec 
*/
/* zakres procedury zaczyna się i kończy znakami { } */
/* zmienne i nazwy procedur nie mogą zaczynać się od cyfry
** nie mogą zawierać polskich znaków, znaków specjalny @#$%^^&&*
** generalnie to powinny być litery a-Z (ta księ zaczynać)
** potem mogą mieć cyfry
** int i, i1, i12, iiii23;
** deklarując zmienne mówimy jakiego jest typu i jaką ma nazwę
*/
{	/* początek programu / procedury */
	int i; /* deklaracja - od tej pory w programie main istnieje zmienna i typu int */
		/* int - liczba całkowita dodania lub ujemna, 2b +-32000,
		** unsigned int - liczba całkowita bez znaku 2b 64000
		** long int - zazwyczaj 4 bajtowy lub więcej
		*/
	/* zmienna czyli można zmieniac jej zawartość */
	/* po deklaracji zmiennej siedzą tam SMIECI - nieznan jest wartość zmiennej */
	/* dobrym nawykiem jest podstawianie coś w samej deklaracji aby nie było tam śmieci */
	i = 5; /* podstawienie ZMIENNA = (wyrazenie lub stała) */
	return i; /* kazde polecenie języka C konczy znak ; */
}   /* koniec programu / procedury */