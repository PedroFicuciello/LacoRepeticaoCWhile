#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int al;
	float n1, n2, n3, n4, som, med;

	while (al <= 7){
		printf ("Digite a nota do primeiro bimestre: ");
		scanf ("%f", &n1);
	
		printf ("Digite a nota do segundo bimestre: ");
		scanf ("%f", &n2);
	
		printf ("Digite a nota do terceiro bimestre: ");
		scanf ("%f", &n3);
	
		printf ("Digite a nota do quarto bimestre: ");
		scanf ("%f", &n4);
	
		som = n1 + n2 + n3 + n4;
		med = som / 4;
			printf ("A media do aluno foi de %f\n",med);
	
	al = al + 1;
}
	return 0;
}
