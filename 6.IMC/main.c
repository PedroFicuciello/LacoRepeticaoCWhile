#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float alt, peso, imc, altu;
	int resp;

	printf("Calculo de IMC\n");
    printf("Digite 1 para iniciar\n");
	scanf("%d",&resp);
	
	while(resp==1){
		printf("Digite seu peso: ");
		scanf("%f", &peso);
	
		printf("Digite sua altura: ");
		scanf("%f", &altu);
	
		alt= altu*altu;
		imc=(peso/alt);
	
	printf ("Seu imc e de: %.2f ", imc);
		if (imc < 18){
			printf ("Voce esta em nivel de magreza.\n");
		}
			else{
				if(imc = 18 && imc < 25){
					printf("Voce esta saudavel.\n");
				}
				else{
					if(imc = 25 && imc < 30){
						printf ("Voce esta com sobrepeso.\n");
					}
					else{
							if(imc >= 30){
								printf ("Voce esta obeso.\n");
							}
						}
					}
				}
	
	printf("Calculo de IMC\n");
    printf("Digite 1 para iniciar\n");
	scanf("%d",&resp);
	}

return 0;
}
