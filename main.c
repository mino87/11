#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i;
	int sum;
	int grade[5];
	
	for (i=0;i<5;i++)
	{
		printf("grade[%i]=",i);
		scanf("%d",&grade[i]);
	}
	
	
    
	for (i=0;i<5;i++)
	{
		printf("[%i]=%i\n",i,*(grade+i));
		
		sum += *(grade+i);
	}
	printf("%i", sum/5);	
		
}
