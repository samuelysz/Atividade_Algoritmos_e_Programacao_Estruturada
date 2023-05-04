#include <stdio.h>
#include <string.h>
#include <locale.h>

// Samuel Sales Souza
// 04/05

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    
	char nome[50];
    int i;

    printf("Digite um nome completo: ");
    fgets(nome, 50, stdin);

    nome[strlen(nome)-1] = '\0';

    printf("Nome formatado: ");

    for (i = strlen(nome)-1; i >= 0; i--) {
        if (nome[i] == ' ') {
            printf("%s ", &nome[i+1]);
            nome[i] = '\0';
            break;
        }
    }

    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ' && (i == 0 || nome[i-1] == ' ')) {
            printf("%c. ", nome[i]);
        }
    }

    printf("\n");

    return 0;
}

