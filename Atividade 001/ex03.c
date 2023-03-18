#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Samuel Sales Souza
// 17/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int latas, litros, largura, altura, area, consumo, consumoMetro, litrosPorLata;
	
	litrosPorLata = 2000;
	consumoMetro = 300;
	
	
	printf ("Digite a altura da parede que deseja pintar em metros: " );
	scanf("%d", &altura);
	
	printf ("Digite a largura da parede que deseja pintar em metros: " );
	scanf("%d", &largura);
	
	area = altura * largura;
	
	consumo = (area * consumoMetro) / 1000;
	
	litros = consumo / (litrosPorLata / 1000);
	latas = litros;
	
	if (consumo % (litrosPorLata / 1000) != 0) {
        latas++;
    }
    
    printf("Serão necessárias %d latas de tinta para pintar a parede.\n", latas);
     
	return 0;
}
