#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nret;
	float alt, base, area;
	nret = 1;
	
	while(nret <= 10){
		printf ("Digite a base do retangulo: ");
		scanf ("%f", &base);
	
		printf ("Digite a altura do retangulo: ");
		scanf ("%f", &alt);
	
		area = base * alt;
			printf ("A area do seu retangulo e de: %f\n",area);
			
		nret = nret + 1;
}
	return 0;
}
