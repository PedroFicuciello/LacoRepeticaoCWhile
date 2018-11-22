#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]){
	float sal = 500, jur = 1;
	
	system ("color 0C");
	
	while (jur<=3){
		sal = (sal * 0.01) + sal;
		jur = jur + 1;
		
		printf("O saldo : %f", sal);
	}
	return 0;
}
