#include <stdio.h>
#include <stdio.h>#include <stdlib.h>
#include <locale.h>

// Samuel Sales Souza
// 17/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");
   	
	float n1, n2, n3, media;
    
    printf("Digite a 1° nota do aluno: ");
    scanf("%f", &n1);
    
    printf("Digite a 2° nota do aluno: ");
    scanf("%f", &n2);
    
    printf("Digite a 3° nota dado aluno: ");
    scanf("%f", &n3);
    
    media = ((n1*2) + (n2*3) + (n3*5)) / (2+3+5);
    
    printf("A media ponderada final do aluno é: %.2f\n", media);
    
    return 0;
}
