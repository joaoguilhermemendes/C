#include <stdio.h>

int main()
{

	/* Condi��o de Exist�ncia do Tri�ngulo:
	Se a soma das medidas de dois deles � sempre maior que a medida 
	do terceiro, ent�o, eles podem formar um tri�ngulo*/
	
	float ld1, ld2 ,ld3;
	
	scanf("%f %f %f" ,&ld1 ,&ld2 ,&ld3);
	
	if (ld1+ld2>ld3 && ld1+ld3>ld2 && ld2+ld3>ld1)
	{
		float perimetro = (ld1 + ld2 + ld3);
		printf("Perimetro = %.1f\n" ,perimetro);
		
	}
	
	else 
	{
		float area = ((ld1+ld2)*ld3) / 2;
		printf("Area = %.1f\n" ,area);
	}

	return 0;
}

