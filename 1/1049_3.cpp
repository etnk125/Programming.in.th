#include<stdio.h>
main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[m][n];
	int index[m][n];
	int tail[m];
	for(int i=0;i<m;i++)
	tail[i]=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	{
		arr[i][j]=0;
	}
	for(int i=0;i<n;i++)
	{
		int num,lane,speed;
		scanf("%d %d %d",&num,&lane,&speed);
		arr[lane-1][tail[lane-1]]=speed;
		index[lane-1][tail[lane-1]]=num;
		tail[lane-1]++;
//		for(int i=0;i<m;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				printf("%d ",index[i][j]);
//			}
//			printf("\n");
//		}
		
	}

	int longg=0;
	for(int i=0;i<m;i++)
	if(longg<tail[i])longg=tail[i];
//	printf("%d\n",longg);
	for(int i=0;i<longg;i++)
	{
		int indexx=999999999,max=0;
		for(int j=0;j<m;j++)
		{
			if(arr[j][i]>max)
			{
				max=arr[j][i];
				indexx=index[j][i];
			}
		}
		printf("%d\n",indexx);
	}
	
}
