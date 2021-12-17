#include<stdio.h>
int board[5][5],point=0,m,n;
void fall(int y,int x)
{
	int temp=board[y][x];
	while(board[y+1][x]=='-')
	{
		board[y][x]='-';y++;
	}board[y][x]=temp;
	m=y;n=x;
}
void chk(int y,int x)
{
	int temp=0;
	if(board[y+1][x]==board[y][x])
	{
		board[y+1][x]='-';
		temp=1;point++;
		int j=y;
		while(board[j-1][x]=='-'&&j!=0)j--;
		if(board[j][x]!='#'&&board[j][x]!='-')
		{
			board[y][x]=board[j+1][x];
			board[j+1][x]='-';
		}		
	}
	if(board[y][x+1]==board[y][x])
	{
		board[y][x+1]='-';
		temp=1;point++;
		int j=y;
		while(board[j-1][x+1]=='-'&&j!=0)j--;
		if(board[j][x+1]!='#'&&board[j][x+1]!='-')
		{
			board[y][x+1]=board[j][x+1];
			board[j][x+1]='-';
		}		
	}
	if(board[y][x-1]==board[y][x])
	{
		board[y][x-1]='-';
		temp=1;point++;
		int j=y;
		while(board[j-1][x-1]=='-'&&j!=0)j--;
		if(board[j][x-1]!='#'&&board[j][x-1]!='-')
		{
			board[y][x-1]=board[j][x-1];
			board[j][x-1]='-';
		}		
		
	}
	if(temp>0)board[y][x]='-';
	
}
main()
{
	int i,j,k,move,hit,way,temp;
	scanf("%d %d",&m,&n);
	if(m!=5||n!=5)
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	board[i][j]='#';
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf(" %c",&board[i][j]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",board[i][j]);
		printf("\n");
	}
	scanf("%d",&move);
	while(move--)
	{
		scanf("%d %d %c",&m,&n,&way);
		if(board[m][n]=='-'||board[m][n]=='#')point--;
		else 
		{
			if(way=='R')hit=1;
			if(way=='L')hit=-1;
			if(board[m][n+hit]!='-')point--;
			else
			{
				
				while(1)
				{
					fall(m,n);
					temp=point;
					chk(m,n);
					if(temp==point)break;
					
				}
				
			}
			
		}
		
	}
	
}
