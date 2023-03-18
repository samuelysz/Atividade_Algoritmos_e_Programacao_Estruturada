#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Samuel Sales Souza
// 17/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    float custo, frete, despesas, venda, lucro;
    
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo);
    
    printf("Digite o valor do frete: ");
    scanf("%f", &frete);
    
    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesas);

    custo = custo + frete + despesas;
    
    printf("Digite o valor de venda: ");
    scanf("%f", &venda);
    
    lucro = (venda - custo - frete - despesas) / custo * 100;
    
    printf("A porcentagem de lucro da mercadoria: %.2f%%", lucro);
    
    return 0;
    
}
