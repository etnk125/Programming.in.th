#include<stdio.h>
#include<string.h>
main(){
	int n,i;
	scanf("%d ",&n);
	int num,res;
	int fin[n];
	for(i=0;i<n;i++)
	{	
		char a[100000];
		scanf("%s",a);
		int l=strlen(a);
		if(l==1&&a[0]=='2')fin[i]=1;
		else if(a[l-1]%2!=0)fin[i]=1;
		else fin[i]=2;
			
	}
	for(int i=0;i<n;i++)
	if(fin[i]==1)printf("T\n");
	else printf("F\n");
}
/*include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int b[n];
	for(int i=0;i<n;i++)
	{
		char a[10000];
		scanf("%s",a);
		int l=strlen(a);
		if(l==1&&a[0]=='2') b[i]=1;
		else if(a[l-1]%2!=0) b[i]=1;
		else a[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]==1) printf("T\n");
		else printf("F\n");
	}
}*/
