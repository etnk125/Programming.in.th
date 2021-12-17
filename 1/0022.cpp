#include <stdio.h>
#include <conio.h>
main(){
    int N,i,j,k,l,m;
	scanf("%d",&N);
    for(i=0;i<N/2;i++)
    {
    	for(j=i;j<N/2;j++)
    	{
    		printf("-");
		}
			printf("*");
		
		for(j=N/2-i;j<=N/2;j++)
		{
			printf("-");
		}	
		if(i!=0)
		{
			printf("*");
		}
		
		
		for(j=i;j<N/2;j++)
    	{
    		printf("-");
		}//endline
		
		printf("\n");
	}
    	
    	
    	
    	
    	
}

