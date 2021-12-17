#include<stdio.h>
#include<math.h>
main(){
	int A,B,C,x,a,b,c,d,i,back;
	scanf("%d%d%d",&A,&B,&C);
	if((B*B-4*A*C)>=0)
{
	b=-1*(-1*B+sqrt(B*B-4*A*C));
	d=-1*(-1*B-sqrt(B*B-4*A*C));
	a=2*A;
	c=2*A;	
	while (d%2==0&&b%2==0)
	{
		b=b/2;
		a=a/2;
	}
	while (d%2==0&&c%2==0)
	{
		
		d=d/2;
		c=c/2;
	}

	if(a<=c)printf("%d %d %d %d",a,b,c,d);
	if(a>c)printf("%d %d %d %d",c,d,a,b);

}
else printf("No Solution");
}
