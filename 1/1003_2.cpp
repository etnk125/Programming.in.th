#include<iostream>
using namespace std;
main()
{
	int n,i=0,j=0,k=0,count=0,t,temp,c,sum;
	cin>>n;
	int a[n]={0};
//	cout<<n<<endl;
	
	for(i=0 ;(20*i+9*j+6*k) <= n ; i++)
	{
		for(j=0 ;(20*i+9*j+6*k) <= n ; j++)
		{
			for(k=0 ;(20*i+9*j+6*k) <= n ; k++)
			{
				if((20*i+9*j+6*k)!=0)
				{
					sum=(20*i+9*j+6*k);
					if(count==0)a[count++]=sum;
					else
					{
						c=0;
						for(int o=0;o<count;o++)
						{
							if(a[o]==sum)
							{
								c++;
						//		cout<<"c="<<c;
							}
							
						}//cout<<" res="<<c<<endl;
						
						
						if(c==0)
						{
							a[count]=sum;
							temp=a[count];
							t=count;
							while(t>0&&a[t-1]>temp)
							{
								a[t]=a[t-1];
								t--;
							}
							a[t]=temp;
							count++;
						}
						
					}
					
				}
					
			}
			k=0;
		}
		j=0;	
	}
	if(count==0)cout<<"no";
	else 
	{
		for(i=0;i<count;i++)
		cout<<a[i]<<endl;
	}
	

}
