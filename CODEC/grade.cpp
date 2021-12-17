#include<stdio.h>
main(){
	int a,b,point,c; 
	scanf("%d%d%d",&b,&c,&a);
	point=a+b+c;
	if(point >= 80) printf("A");
	else if(point >= 75) printf("B+");
	else if(point >= 70) printf("B");
	else if(point >= 65) printf("C+");
	else if(point >= 60) printf("C");
	else if(point >= 55) printf("D+");
	else if(point >= 50) printf("D");
	else printf("F");
}
