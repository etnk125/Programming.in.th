#include<stdio.h>
#define ara 21
int arr[ara][ara]={0},n;
int maxx=-6;
void find(int x,int y)
{
	int temp=arr[x][y];
	arr[x][y]=100;
	if(x-1>=0	&&	arr[x-1][y]!=100	&&	arr[x-1][y]>=temp)find(x-1,y);
	if(x+1<=n-1	&&	arr[x+1][y]!=100	&&	arr[x+1][y]>=temp)find(x+1,y);
	if(y-1>=0	&&	arr[x][y-1]!=100	&&	arr[x][y-1]>=temp)find(x,y-1);
	if(y+1<=n-1	&&	arr[x][y+1]!=100	&&	arr[x][y+1]>=temp)find(x,y+1);
	if(maxx < temp) maxx=temp;
	if(maxx==37)return ;
}
int main()
{
	int x,y;
	scanf("%d%d%d",&n,&x,&y);
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	scanf("%d",&arr[i][j]);
	find(y-1,x-1);
	printf("%d",maxx);
}

