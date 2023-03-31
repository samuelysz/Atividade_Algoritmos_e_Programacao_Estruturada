#include <stdio.h>
#include <locale.h>

// Samuel Sales Souza
// 30/03


int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade<21) {
		printf("Jovem");
	} else if (idade<70) {
		printf("Adulto");
	} else {
		printf("Novos 50");
	}

    return 0;
}
