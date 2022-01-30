#include <stdio.h>

int main(void) {
	
int diference = 0;
int predchozi = 0;

		printf("Zadejte prvni clen Aritmeticke poslopnosti: ");
	scanf("%d", &predchozi);

		printf("\nZadejte druhy clen Aritmeticke posloupnosti: ");
	scanf("%d", &diference);

		printf("\n");

	for (int x = 1; x <= 5; x++) {
		printf("Clen cislo: %d: %d\n", x, predchozi);
		predchozi += diference;
	}
}