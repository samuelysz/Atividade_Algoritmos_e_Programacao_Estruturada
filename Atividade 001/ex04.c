#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Samuel Sales Souza
// 17/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	float base, altura, area;
	
	printf("Digite a base do ret�ngulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do ret�ngulo: ");
	scanf("%f", &altura);
	
	area = base*altura;
	
	printf("A �rea do ret�ngulo �: %.2f", area);
	
	return 0;
		
}
