#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Samuel Sales Souza
// 17/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	float base, altura, area;
	
	printf("Digite a base do retângulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do retângulo: ");
	scanf("%f", &altura);
	
	area = base*altura;
	
	printf("A área do retângulo é: %.2f", area);
	
	return 0;
		
}
