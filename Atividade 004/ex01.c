#include <stdio.h>
#include <locale.h>

// Samuel Sales Souza
// 04/05

float le_valida_media() {
    float media;
    do {
        printf("Informe a media: ");
        scanf("%f", &media);
    } while (media < 0 || media > 10);
    return media;
}

float calcular_media(int quantidade, float soma) {
    return soma / quantidade;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int i, reprovados = 0, aprovados = 0;
    float media, menorMedia = 10, maiorNota = 0, soma = 0;

    printf("------------------\n");
    printf("Relatorio da turma\n");
    printf("------------------\n");

    for (i = 1; i <= 25; i++) {
        media = le_valida_media();
        soma += media;
        if (media < menorMedia) {
            menorMedia = media;
        }
        if (media > maiorNota) {
            maiorNota = media;
        }
        if (media < 6.9) {
            reprovados++;
        } else {
            aprovados++;
        }
        if (media < 0) {
            break;
        }
    }

    float media_turma = calcular_media(i-1, soma);

    printf("------------------\n");
    printf("Media da turma: %.1f\n", media_turma);
    printf("Maior nota: %.1f\n", maiorNota);
    printf("Menor nota: %.1f\n", menorMedia);
    printf("Reprovados: %d\n", reprovados);
    printf("Aprovados: %d\n", aprovados);
    printf("------------------\n");
    printf("    BSB - 2023\n");

    return 0;
}
