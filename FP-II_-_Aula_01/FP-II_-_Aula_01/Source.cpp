#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"


#define UB1


#ifdef UB1
	void tratarTouch() {
		printf("Tratando o touch\n\n");
	}
#endif


int main() {

#ifdef UB1
	tratarTouch();
#endif

	float r;
	int opcao = 0;
	printf("Digite o tamanho do raio:");
	scanf_s("%f", &r);
	
	while (opcao < 3) {
		printf("Selecione uma opcao:\n1 - Comprimento\n2 - Area\n3 - Sair\n\n");
		scanf_s("%i", &opcao);
		printf("\n");
		switch (opcao)
		{
		case 1:
			printf("O comprimento da circunferencia e %.2f\n\n\n", comprimento(r));
			break;

		case 2:
			printf("A area da circunferencia e %.2f\n\n\n", area(r));
			break;
		}
	}

	system("pause");
	return 0;

}