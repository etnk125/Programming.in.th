#include<stdio.h>
main(){
	long int a[1000],i,d=0,s=2000000000;
	scanf("%ld",&a[0]);
	for(i=1;i<=a[0];i++){
		scanf("%ld",&a[i]);
		if(a[i]!=d){
			if(a[i]>d){
				d=a[i];
			}
		}
		if(a[i]!=s){
			if(a[i]<s){
				s=a[i];
			}
		}
	}
	printf("%ld\n",d);
	printf("%ld\n",s);
}
