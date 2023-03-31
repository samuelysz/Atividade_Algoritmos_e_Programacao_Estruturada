#include <stdio.h>
#include <locale.h>

// Samuel Sales Souza
// 30/03


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    float numero;

	char nome[50];
	float nota1, nota2, nota3, nota4, nota5, media;

	printf("Escreva o nome do aluno: ");
	scanf("%49s", &nome);
	
	printf("Escreva a 1° nota do(a) aluno(a) %s: ", nome);
	scanf("%f", &nota1);
	printf("Escreva a 2° nota do(a) aluno(a) %s: ", nome);
	scanf("%f", &nota2);
	printf("Escreva a 3° nota do(a) aluno(a) %s: ", nome);
	scanf("%f", &nota3);
	printf("Escreva a 4° nota do(a) aluno(a) %s: ", nome);
	scanf("%f", &nota4);
	printf("Escreva a 5° nota do(a) aluno(a) %s: ", nome);
	scanf("%f", &nota5);
	
	media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
	
	printf("A media do(a) aluno %s é: %0.2f", nome, media);

    return 0;
}
