#include <stdio.h>
#include <locale.h>

// Samuel Sales Souza
// 25/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    float salario, prestacao;

    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    if (prestacao > (0.2 * salario)) {
        printf("Empréstimo não concedido.\n");
    } else {
        printf("Empréstimo concedido.\n");
    }

    return 0;
}
