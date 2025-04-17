#include <stdio.h>
#include <conio.h>

main(){
	float sal, pcor, vcor, vtotal;
	printf("Digite o valor do salario: ");
	scanf("%f", &sal);
	
	if(sal <= 900){
		pcor = 5;
		}
	if((sal > 900) && (sal<= 1400)){
		pcor = 8;
	}
	if(sal > 1400){
		pcor = 10;
	}
	vcor = sal*pcor/100;
	vtotal = sal+vcor;
	printf("O valor do salario atual e de: %.2f\n", sal);
	printf("O percentual de correcao e de: %.2f\n", pcor);
	printf("O valor do aumento salarial e de: %.2f\n", vcor);
	printf("O valor do novo salario e de: %.2f\n", vtotal);
}
