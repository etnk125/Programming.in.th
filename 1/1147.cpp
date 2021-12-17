#include<stdio.h>
main()
{
	int n,q,index,index2,i,max;
	char com;
	scanf("%d%d ",&n,&q);
	int arr[n]={0};
	while(q--)
	{
//		com=getchar();
		scanf(" %c",&com);
//		cout<<com<<endl;
		if(com=='U')
		{
			scanf("%d",&index);
			scanf("%d",&arr[--index]);
		}
		else
		{
			
			scanf("%d%d",&index,&index2);
			max=arr[index-1];
			for(i=index;i<index2;i++)
			if(max<arr[i])max=arr[i];
			printf("%d\n",max);
		}
	}
}
