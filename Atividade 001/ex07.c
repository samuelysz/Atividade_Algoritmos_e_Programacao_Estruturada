#include <stdio.h>#include <stdlib.h>
#include <locale.h>

// Samuel Sales Souza
// 17/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    float custoFabrica, custoConsumidor, percentualDistribuidor, percentualImpostos;
    
	percentualDistribuidor = 0.28;
	percentualImpostos = 0.45;

	printf("Digite o custo de f�brica do carro: R$");
	scanf("%f", &custoFabrica);

	custoConsumidor = custoFabrica * (1 + percentualDistribuidor + percentualImpostos);

	printf("O custo final do carro ao consumidor �: R$ %.2f\n", custoConsumidor);	
    
    return 0;
}
