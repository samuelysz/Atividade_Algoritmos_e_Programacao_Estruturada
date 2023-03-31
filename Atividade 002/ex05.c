#include <stdio.h>
#include <math.h>
#include <locale.h>

// Samuel Sales Souza
// 25/03


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 0) {
        float quadrado = numero * numero;
        float raiz_quadrada = sqrt(numero);
        printf("Número ao quadrado: %0.2f\n", quadrado);
        printf("Raiz quadrada do número: %0.2f\n", raiz_quadrada);
    } else {
        printf("Número inválido.\n");
    }

    return 0;
}
