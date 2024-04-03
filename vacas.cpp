#include <stdio.h>
#include <stdlib.h>

int main ()
{
	
	int vacas[3][7], i, j, k, vaca, auxvaca[7];
	float medv[3], medd[7], soma, men, vol;
	
	vaca = 1;
	vol = 0;
	
	for(i = 0; i<3; i++)
	{
		j = 0;
		
			printf("\nVaca: %d", vaca);
			printf("\nSegunda: ");
			scanf("%d", &vacas[i][j]);
			vol=vol+vacas[i][j];
			printf("Terca: ");
			scanf("%d", &vacas[i][j+1]);
			vol=vol+vacas[i][j+1];
			printf("Quarta: ");
			scanf("%d", &vacas[i][j+2]);
			vol=vol+vacas[i][j+2];
			printf("Quinta: ");
			scanf("%d", &vacas[i][j+3]);
			vol=vol+vacas[i][j+3];
			printf("Sexta: ");
			scanf("%d", &vacas[i][j+4]);
			vol=vol+vacas[i][j+4];
			printf("Sabado: ");
			scanf("%d", &vacas[i][j+5]);
			vol=vol+vacas[i][j+5];
			printf("Domingo: ");
			scanf("%d", &vacas[i][j+6]);
			vol=vol+vacas[i][j+6];

		vaca++;
	}
	
	for(i = 0; i<3; i++)
	{
		soma = 0;
		for(j = 0; j<7; j++)
		{
			soma=soma+vacas[i][j];	
		}
		medv[i]=soma;
	}
	
	printf("\n---------------------------------");
	
	vaca = 1;
	printf("\nMEDIA DAS VACAS: ");
	
	for(i = 0; i<3; i++)
	{
		printf("\nVaca %d = %.2f",vaca,medv[i]/7);
		vaca++;
	}
	
	for(i = 0; i<7; i++)
	{
		soma = 0;
		for(j = 0; j<3; j++)
		{
			soma=soma+vacas[j][i];	
		}
		medd[i]=soma;
	}
	
	i = 0;
	
	printf("\n---------------------------------");
	
	printf("\nMEDIA DOS DIAS: ");
	
		printf("\nSegunda = %.2f",medd[i]/3);
		printf("\nTerca = %.2f",medd[i+1]/3);
		printf("\nQuarta = %.2f",medd[i+2]/3);
		printf("\nQuinta = %.2f",medd[i+3]/3);
		printf("\nSexta = %.2f",medd[i+4]/3);
		printf("\nSabado = %.2f",medd[i+5]/3);
		printf("\nDomingo = %.2f",medd[i+6]/3);
 	
    printf("\n---------------------------------\n");
    
    i = 0;
	men=medd[i];
	k = 0;
	j = 0;
    
    for(i = 0; i<7; i++)
	{
		if(medd[i]<men)
		{
			men=medd[i];
			k=i;
		}
	}
	
	
	for(i = 0; i<7; i++)
	{
		if(medd[i]==men)
		{
			auxvaca[j]=i;
			j++;
		}
	}
	
	printf("O(s) dia(s) com menor quantidade de leite: ");
	
	for(i = 0; i!=j; i++)
	{
		if(auxvaca[i]==0)
		{
			printf("Segunda, ");
		}
		if(auxvaca[i]==1)
		{
			printf("Terca, ");
		}
		if(auxvaca[i]==2)
		{
			printf("Quarta, ");
		}
		if(auxvaca[i]==3)
		{
			printf("Quinta, ");
		}
		if(auxvaca[i]==4)
		{
			printf("Sexta, ");
		}
		if(auxvaca[i]==5)
		{
			printf("Sabado, ");
		}
		if(auxvaca[i]==6)
		{
			printf("Domingo, ");
		}
	}
	
	printf("com um total de = %.2fL", men);
	
	printf("\n---------------------------------\n");
	
	
	i = 0;
	j = 0;
	men=medd[i];
	k = 0;
    
    for(i = 0; i<7; i++)
	{
		if(medd[i]>men)
		{
			men=medd[i];
			k=i;
		}
	}
	
	for(i = 0; i<7; i++)
	{
        if(medd[i]==men)
		{
			auxvaca[j]=i;
			j++;
		}
	}
	
	printf("O(s) dia(s) com maior quantidade de leite: ");
	
	for(i = 0; i!=j; i++)
	{
		if(auxvaca[i]==0)
		{
			printf("Segunda, ");
		}
		if(auxvaca[i]==1)
		{
			printf("Terca, ");
		}
		if(auxvaca[i]==2)
		{
			printf("Quarta, ");
		}
		if(auxvaca[i]==3)
		{
			printf("Quinta, ");
		}
		if(auxvaca[i]==4)
		{
			printf("Sexta, ");
		}
		if(auxvaca[i]==5)
		{
			printf("Sabado, ");
		}
		if(auxvaca[i]==6)
		{
			printf("Domingo, ");
		}
	}
	
	printf("com um total de = %.2fL", men);
	
	printf("\n---------------------------------\n");
	
	
	printf("Volume total de leite na semana = %.2fL", vol);
	
	
	return 0;
}