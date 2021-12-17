#include<stdio.h>
#include<vector>
using namespace std;
main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	vector<int> line(a+1);
	for(int i=1;i<=a;i++)
	line[i]=i;
	int temp=b,run=0;
	while(line.size()!=2)
	{
		temp+=run;
		temp%=line.size()-1;
		while(temp<=0)temp+=line.size()-1;
//		for(int i=1;i<line.size();i++)
//		printf("%d ",line[i]);
//		printf("\nrun=%d temp=%d\n",run,temp);
		run=line[temp]-1;
		line.erase(line.begin()+temp);
	}
	printf("%d",line[1]);
}
