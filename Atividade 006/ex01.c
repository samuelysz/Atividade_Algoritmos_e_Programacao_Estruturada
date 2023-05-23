#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Samuel Sales Souza
// 23/05

#define MAX_ESTUDANTES 20
#define MAX_NOTAS 4

struct Disciplina {
    char nome[50];
    int cargaHoraria;
    float notas[MAX_NOTAS];
};

struct Estudante {
    char nome[50];
    int matricula;
    int idade;
    struct Disciplina disciplina;
};

void cadastrarEstudantes(struct Estudante estudantes[], int numEstudantes) {
    int i, j;
    
    for (i = 0; i < numEstudantes; i++) {
        struct Estudante est;
        
        printf("Estudante %d\n", i + 1);
        
        printf("Nome: ");
        scanf("%s", est.nome);
        
        printf("Matricula: ");
        scanf("%d", &est.matricula);
        
        printf("Idade: ");
        scanf("%d", &est.idade);
        
        printf("Disciplina\n");
        
        printf("Nome: ");
        scanf("%s", est.disciplina.nome);
        
        printf("Carga Horaria: ");
        scanf("%d", &est.disciplina.cargaHoraria);
        
        for (j = 0; j < MAX_NOTAS; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &est.disciplina.notas[j]);
        }
        
        estudantes[i] = est;
        
        printf("\n");
    }
}

void exibirEstudantes(const struct Estudante estudantes[], int numEstudantes) {
    int i, j;
    
    printf("Estudantes cadastrados:\n");
    
    for (i = 0; i < numEstudantes; i++) {
        const struct Estudante* est = &estudantes[i];
        
        printf("Estudante %d\n", i + 1);
        printf("Nome: %s\n", est->nome);
        
        float somaNotas = 0;
        for (j = 0; j < MAX_NOTAS; j++) {
            somaNotas += est->disciplina.notas[j];
        }
        
        float mediaNotas = somaNotas / MAX_NOTAS;
        printf("Média das notas: %.2f\n", mediaNotas);
        
        printf("Idade: %d\n", est->idade);
        
        printf("\n");
    }
}

void encontrarMaiorMedia(const struct Estudante estudantes[], int numEstudantes) {
    int i, j;
    
    float maiorMedia = 0;
    char estudantesComMaiorMedia[MAX_ESTUDANTES][50];
    int numEstudantesComMaiorMedia = 0;
    
    for (i = 0; i < numEstudantes; i++) {
        const struct Estudante* est = &estudantes[i];
        
        float somaNotas = 0;
        for (j = 0; j < MAX_NOTAS; j++) {
            somaNotas += est->disciplina.notas[j];
        }
        
        float mediaNotas = somaNotas / MAX_NOTAS;
        
        if (mediaNotas > maiorMedia) {
            maiorMedia = mediaNotas;
            numEstudantesComMaiorMedia = 0;
            strcpy(estudantesComMaiorMedia[numEstudantesComMaiorMedia], est->nome);
        } else if (mediaNotas == maiorMedia) {
            numEstudantesComMaiorMedia++;
            strcpy(estudantesComMaiorMedia[numEstudantesComMaiorMedia], est->nome);
        }
    }
    
    printf("Estudante(s) com a maior média:\n");
    for (i = 0; i <= numEstudantesComMaiorMedia; i++) {
        printf("%s\n", estudantesComMaiorMedia[i]);
    }
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    
	
    struct Estudante estudantes[MAX_ESTUDANTES];
    int numEstudantes;
    
    printf("Quantidade de estudantes (até %d): ", MAX_ESTUDANTES);
    scanf("%d", &numEstudantes);
    
    if (numEstudantes > MAX_ESTUDANTES) {
        printf("O número de estudantes excede o limite.\n");
        return 1;
    }
    
    cadastrarEstudantes(estudantes, numEstudantes);
    printf("\n");
    
    exibirEstudantes(estudantes, numEstudantes);
    printf("\n");
    
    encontrarMaiorMedia(estudantes, numEstudantes);
    
    return 0;
}

