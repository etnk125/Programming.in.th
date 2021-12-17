#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
main()
{
	char com,pint,pint2;
	int num,i=0;
	map<char,int> arr;
	while(1)
	{
		cin>>com;
		if(com=='!')break;
		else 
		{
			if(com=='#')
			{
				cin>>pint;
				cout<<arr[pint]<<endl;
			}
			else 
			{
				if(com=='=')
				{
					cin>>pint>>num;
					arr[pint]=num;
				}
				else
				{
					cin>>pint>>pint2;
					switch (com)
					{
						case '+':
						{
							arr[pint]+=arr[pint2];
							break;
						}
						case '-':
						{
							arr[pint]-=arr[pint2];
							break;
						}
						case '*':
			
						{
							arr[pint]*=arr[pint2];
							break;
						}
						case '/':
						{
							arr[pint]/=arr[pint2];
							break;
						}
					}
				}
			}//printf("%d",i++);
		}
	
	}
	printf("!");
	
	
}

