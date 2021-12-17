#include<stdio.h>
struct cup
{
	int plus;
	int minus;
	int sg;
	int point;
	char name[1000];
}team[4];
main()
{
	int goal[4][4],i,j;
	for(i=0;i<4;i++)
	gets(team[i].name);
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{
		scanf("%d",&goal[i][j]);
	}
	
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{
		team[i].plus+=goal[i][j];
		team[j].minus+=goal[i][j];
	}
	for(i=0;i<4;i++)
	team[i].sg=team[i].plus-team[i].minus;
	
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{
		if(goal[i][j]>goal[j][i]&&i!=j)team[i].point+=3;
		if(goal[i][j]==goal[j][i]&&i!=j)team[i].point++;
	}
	int index;
	int max=-1;
	for(j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
		{
			if(max<team[i].point)
			{
				max=team[i].point;
				index=i;
			}
			else if(max==team[i].point)
			{
				if(team[i].sg>team[index].sg)
				{
					max=team[i].point;
					index=i;
				}
				else if(team[i].sg==team[index].sg)
				{
					if(team[i].plus>team[index].plus)
					{
						max=team[i].point;
						index=i;
					}
				}
			}	
			
		}
		printf("%s %d\n",team[index].name,team[index].point);
		team[index].point=-1;
		max=-1;	
	}
	
		
}
