#include <stdio.h>

main() {
	float
		salario_bruto,
		salario_limite = 1200,
		salario_liquido,
		desconto = 0.07;

	printf("Qual o seu salario bruto (R$)? ");
	scanf("%f", & salario_bruto);

	if (salario_bruto <= salario_limite) {
		salario_liquido = salario_bruto - (salario_bruto * desconto);
	} else {
		salario_liquido = salario_bruto;
	}

	printf("O seu salario liquido e R$ %.2f\n", salario_liquido);

	system("pause");
}
