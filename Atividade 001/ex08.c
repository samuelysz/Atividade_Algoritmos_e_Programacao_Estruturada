#include <stdio.h>
#include <stdio.h>#include <stdlib.h>
#include <locale.h>

// Samuel Sales Souza
// 17/03

int main() {
    
	setlocale(LC_ALL, "Portuguese");
	
	float vendas, salarioFixo, valorPorCarro, comissao, salarioFinal;
    int carrosVendidos;

    printf("Digite o sal�rio fixo do vendedor: R$");
    scanf("%f", &salarioFixo);

    printf("Digite o n�mero de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Digite o valor total das vendas: R$");
    scanf("%f", &vendas);

    printf("Digite o valor que o vendedor recebe por carro vendido: R$");
    scanf("%f", &valorPorCarro);

    comissao = carrosVendidos * valorPorCarro;
    salarioFinal = salarioFixo + comissao + (vendas * 0.05);

    printf("O sal�rio final do vendedor �: R$%.2f", salarioFinal);

    return 0;
}
