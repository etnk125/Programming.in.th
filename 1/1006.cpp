#include<iostream>
using namespace std;

int T=1;
int F=2;
int L=3;
int B=4;
int R=5;
int D=6;

void turnF()
	{
		int temp=T;
		T=B;
		B=D;
		D=F;
		F=temp;
	}
void turnB()
	{
		int temp=T;
		T=F;
		F=D;
		D=B;
		B=temp;
	}	
void turnL()
	{
		int temp=T;
		T=R;
		R=D;
		D=L;
		L=temp;
	}
void turnR()
	{
		int temp=T;
		T=L;
		L=D;
		D=R;
		R=temp;
	}
void turnC()
	{
		int temp=B;
		B=L;
		L=F;
		F=R;
		R=temp;
	}
void turnD()
	{
		int temp=B;
		B=R;
		R=F;
		F=L;
		L=temp;
	}

main()
{
	char code[1001];
	int k;
	cin>>k;
	int n=k;
	int res[n];
	while(n--)
	{
		T=1;
		F=2;
		L=3;
		B=5;
		R=4;
		D=6;
		cin>>code;
		int i,count[6]={0};
		for(i=0;code[i]!='\0';i++)
		switch (code[i])
		{
			case 'F':turnF();break;
			case 'B':turnB();break;
			case 'L':turnL();break;
			case 'R':turnR();break;
			case 'C':turnC();break;
			case 'D':turnD();break;
		}
	
		res[n]=F;
	}
	while(k--)cout<<res[k]<<" ";
}
