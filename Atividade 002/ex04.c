#include <stdio.h>
#include <locale.h>

// Samuel Sales Souza
// 25/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    float salario, prestacao;

    printf("Digite o sal�rio do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da presta��o do empr�stimo: ");
    scanf("%f", &prestacao);

    if (prestacao > (0.2 * salario)) {
        printf("Empr�stimo n�o concedido.\n");
    } else {
        printf("Empr�stimo concedido.\n");
    }

    return 0;
}
