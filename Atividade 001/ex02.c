#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Samuel Sales Souza
// 17/03

int main() {
    
	setlocale(LC_ALL, "Portuguese");
	
	float raio, area;
    float PI = 3.141592; 
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    
    area = PI * raio * raio;
    
    printf("A area do circulo de raio %.2f é %.2f", raio, area);
    
    return 0;
}
