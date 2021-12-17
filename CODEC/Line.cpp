#include<stdio.h>
//#include<math.h>
main(){
	int a,b,m[1],i;
	for (i=0;i<2;i++)
	{
		scanf("%d%d",&a,&b);
		m[i]=-a/b;
	}
	if(m[0]==m[1])printf("No");
	else printf("Yes");
	
}
