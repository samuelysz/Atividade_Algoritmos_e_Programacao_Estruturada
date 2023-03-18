#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Samuel Sales Souza
// 17/03

int main() {
	
    setlocale(LC_ALL, "Portuguese");
	
	float salarioAtual, percentualReajuste, novoSalario;
    
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioAtual);
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    
    novoSalario = salarioAtual * (1 + percentualReajuste/100);
    
    printf("O novo salário do funcionário é: %.2f\n", novoSalario);
    
    return 0;
    
}
