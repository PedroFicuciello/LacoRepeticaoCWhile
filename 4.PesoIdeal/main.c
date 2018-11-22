#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float alt, pesoid;
	int pes, sx;
	
	while(pes <= 15){
	
	printf("Digite sua altura : ");
	scanf("%f", &alt);
	printf("Digite seu sexo \n 1 - Masculino \n 2 - Feminino \n");
	scanf("%d", &sx);
	if (sx == 1) {
		pesoid = (72.7 * alt) - 58;
		printf("Seu peso ideal é: %2.f \n",pesoid);
	}
	else {
		pesoid = (62.1 * alt) - 44.7;
		printf("Seu ideal é: %2.f \n",pesoid);
	}
	
	pes = pes + 1;
}
	return 0;
}
