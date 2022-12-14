#include <stdio.h>
#include <time.h>
#include <stdlib.h>


main()
{
	int mas[100][100];
	
	int n, m;
	
	srand(time(NULL));
	
	int min=-2;
	int max=7;
	
	printf("n=");
	scanf("%i", &n);
	
	printf("m=");
	scanf("%i", &m);
		
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			mas[j][i]=min + rand()%(max-min+1);
		}	
	}
		for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			printf("%7i", mas[j][i]);
		}
		printf("\n\n");	
	}
}
