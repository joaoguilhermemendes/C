#include <stdio.h>

int main()
{
	/*Um motorista quer completar seu tanque de combust�vel com gasolina, por�m
seu mec�nico o aconselhou adicionar 20% de �lcool para melhorar a mistura. Escreva um
programa que leia a capacidade do tanque em litros, o pre�o da gasolina e do �lcool e
depois calcule e exiba quantos reais ele deve colocar de cada combust�vel.*/

	
	float litragem, gasolina, alcool;
	float gasolinatotal, alcooltotal;
	float valorgasolina ,valoralcool;
	
	printf("Capacidade do tanque: ");
	scanf("%f" ,&litragem);
	
	printf("Preco do litro da gasolina: ");
	scanf("%f" ,&valorgasolina);
	
	printf("Preco do litro do alcool: ");
	scanf("%f" ,&valoralcool);
	
	gasolinatotal = (litragem * 0.8) * valorgasolina;
	alcooltotal = (litragem * 0.2) * valoralcool;
	
	printf("Gasolina --- [R$%.2f]\n" ,gasolinatotal);
	printf("Gasolina --- [R$%.2f]\n" ,alcooltotal);


	return 0;
}

