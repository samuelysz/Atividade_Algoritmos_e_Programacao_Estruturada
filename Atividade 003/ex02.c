#include <stdio.h>
#include <locale.h>

// Samuel Sales Souza
// 30/03


int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade<=30) {
		printf("Você é muito jovem");
	}

    return 0;
}
