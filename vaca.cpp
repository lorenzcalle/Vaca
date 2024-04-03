#include <stdio.h>
#include <stdlib.h>

int main()
{
	int mat[35][7];
	int l, c, i, menordia, maiordia, leitevaca, x, soma;
	int leitetotalnodia[7], leitetotalvaca[35];
	float vetdia[7], vetsemana[35];
	
	printf("-----Bem Vindo a Fazenda Capaxo Baxo Incorporated-----\n");
	l=0;
    while(l<35)
    {
    	c=0;
    	soma=0;
    	while(c<7)
    	{
    		scanf("%d", &mat[l][c]);
    		soma=soma+mat[l][c];
    		c++;
		}
		leitetotalvaca[i]=soma;
		vetsemana[i]=soma/7;
		i++;
	    l++;
	}
	
	printf("a matriz e: \n");
	l=0;
    while(l<35)
    {
    	printf("vaca[%d] ", l+1);
    	c=0;
    	while(c<7)
    	{
    		printf("%d ", mat[l][c]);
    		c++;
		}
	    printf("\n");
	    l++;
	}
	
	for(i=0; i<35; i++)
	{
		printf("Media de leite da vaca[%d] durante a semana foi: %.2f litros \n", i+1, vetsemana[i]);
	}
	
	i=0;
	c=0;
    while(c<7)
    {
    	l=0;
    	soma=0;
    	while(l<35)
    	{
    		soma=soma+mat[l][c];
    		l++;
		}
		leitetotalnodia[i]=soma;
		vetdia[i]=soma/35;
		i++;
	    c++;
	}
	
	i=0;
	menordia=leitetotalnodia[0];
	while(i<7)
	{
		if(menordia>leitetotalnodia[i])
		{
		menordia=leitetotalnodia[i];
		}
	i++;
	}
	
		if(menordia==leitetotalnodia[0])
		{
			printf("Na segunda se produziu menos leite e a quantidade foi: %d litros \n", menordia);
		}
		if(menordia==leitetotalnodia[1])
		{
			printf("Na terca se produziu menos leite e a quantidade foi: %d litros \n", menordia);
		}
		if(menordia==leitetotalnodia[2])
		{
			printf("Na quarta se produziu menos leite e a quantidade foi: %d litros \n", menordia);
		}
		if(menordia==leitetotalnodia[3])
		{
			printf("Na quinta se produziu menos leite e a quantidade foi: %d litros \n", menordia);
		}
		if(menordia==leitetotalnodia[4])
		{
			printf("Na sexta se produziu menos leite e a quantidade foi: %d litros \n", menordia);
		}
		if(menordia==leitetotalnodia[5])
		{
			printf("No sabado se produziu menos leite e a quantidade foi: %d litros \n", menordia);
		}
		if(menordia==leitetotalnodia[6])
		{
			printf("No domingo se produziu menos leite e a quantidade foi: %d litros \n", menordia);
		}  	
	
	i=0;
	maiordia=leitetotalnodia[0];
	while(i<7)
	{
		if(maiordia<leitetotalnodia[i])
		{
		maiordia=leitetotalnodia[i];
		}
	i++;
	}
	
		if(maiordia==leitetotalnodia[0])
		{
			printf("Na segunda se produziu mais leite e a quantidade foi: %d litros \n", maiordia);
		}
		if(maiordia==leitetotalnodia[1])
		{
			printf("Na terca se produziu mais leite e a quantidade foi: %d litros \n", maiordia);
		}
		if(maiordia==leitetotalnodia[2])
		{
			printf("Na quarta se produziu mais leite e a quantidade foi: %d litros \n", maiordia);
		}
		if(maiordia==leitetotalnodia[3])
		{
			printf("Na quinta se produziu mais leite e a quantidade foi: %d litros \n", maiordia);
		}
		if(maiordia==leitetotalnodia[4])
		{
			printf("Na sexta se produziu mais leite e a quantidade foi: %d litros \n", maiordia);
		}
		if(maiordia==leitetotalnodia[5])
		{
			printf("No sabado se produziu mais leite e a quantidade foi: %d litros \n", maiordia);
		}
		if(maiordia==leitetotalnodia[6])
		{
			printf("No domingo se produziu mais leite e a quantidade foi: %d litros \n", maiordia);
		}  	
	
	for(i=0; i<7; i++)
	{
		if(i==0)
		{
			printf("Media de leite na segunda: %.2f litros \n", vetdia[i]);
		}
		if(i==1)
		{
			printf("Media de leite na terca: %.2f litros \n", vetdia[i]);
		}
		if(i==2)
		{
			printf("Media de leite na quarta: %.2f litros \n", vetdia[i]);
		}
		if(i==3)
		{
			printf("Media de leite na quinta: %.2f litros \n", vetdia[i]);
		}
		if(i==4)
		{
			printf("Media de leite na sexta: %.2f litros \n", vetdia[i]);
		}
		if(i==5)
		{
			printf("Media de leite no sabado: %.2f litros \n", vetdia[i]);
		}
		if(i==6)
		{
			printf("Media de leite no domingo: %.2f litros \n", vetdia[i]);
		}
		
	}
	
	i=0;
	x=0;
	leitevaca=leitetotalvaca[0];
	while(i<35)
	{
		if(leitevaca<leitetotalvaca[i])
		{
		leitevaca=leitetotalvaca[i];
		x=i;
		}
	i++;
	}
	printf("A vaca[%d] produziu mais leite durante a semana e a quantidade foi: %d litros\n", x+1, leitevaca);
	
	soma=0;
	for(i=0; i<7; i++)
	{
		soma=soma+leitetotalnodia[i];
	}
	printf("O volume total de leite em litros produzido durante a semana foi: %d litros ",soma);
	
	return 0;
}
