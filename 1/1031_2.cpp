#include<stdio.h>
#include<vector>
using namespace std;
int maxx=-1;
vector<int> warp[10001];
void gogo(int k,int now)
{
	if(maxx<now)maxx=now;
	if(k==0)return;
	int time=warp[now].size(),i;
	for(i=0;i<time;i++)
	gogo(k-1,warp[now][i]);
	
}
main()
{
	int power,hi,a,b,lad,i;
	scanf("%d%d%d",&power,&hi,&lad);
	for(i=0;i<lad;i++)
	{
		scanf("%d%d",&a,&b);
		warp[a].push_back(b);
	}
	gogo(power,1);
	printf("%d",maxx);
}
