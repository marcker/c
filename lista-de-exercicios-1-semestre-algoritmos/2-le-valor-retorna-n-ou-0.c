#include <stdio.h>

main() {
	int
		limite = 100;
	float
		valor,
		resultado;

	printf("Insira um valor: ");
	scanf("%f", & valor);

	resultado = valor > limite ? valor : 0;

	printf("O resultado e %g. \n", resultado);

	system("pause");
}
