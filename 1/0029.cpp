#include<stdio.h>
#include<math.h>
main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	printf("%.0lf",a>b?2:ceil(b/a));
}

