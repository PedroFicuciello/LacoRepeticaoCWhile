#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int erro;
	char senha [6], se[5] = {'a','s','d','f','g'};
	
	while(erro < 3) {
		printf("Digite a senha : ");
		scanf("%s",&senha);
	
		if(strcmp(senha,se)==0) {
			printf("Senha valida.");
		return 0;
		}
		else {
			printf("Senha invalida.\n");
		erro = erro + 1;
		}
	}
	return 0;
}
