#include<iostream>
#include<list>
using namespace std;
main()
{
	int n,a,b,time,now;
	cin>>n;
	list<char> sms;
	for(int i=0;i<n;i++)
	{
		if(i!=0)
		{
			cin>>a>>b>>time;
			now+=a+3*b;
		}
		else
		{
			cin>>now>>time;
		}
		switch (now)
		{
			case 1:{
				while(time--)
				sms.pop_back();
				break;
			}
			case 2:{
				switch(time%3)
				{
					case 1:{
						sms.push_back('A');
						break;
					}
					case 2:{
						sms.push_back('B');
						break;
					}
					case 0:{
						sms.push_back('C');
						break;
					}
				}
				break;
			}
			case 3:{
				switch(time%3)
				{
					case 1:{
						sms.push_back('D');
						break;
					}
					case 2:{
						sms.push_back('E');
						break;
					}
					case 0:{
						sms.push_back('F');
						break;
					}
				}
				break;
			}
			case 4:{
				switch(time%3)
				{
					case 1:{
						sms.push_back('G');
						break;
					}
					case 2:{
						sms.push_back('H');
						break;
					}
					case 0:{
						sms.push_back('I');
						break;
					}
				}
				break;
			}
			case 5:{
				switch(time%3)
				{
					case 1:{
						sms.push_back('J');
						break;
					}
					case 2:{
						sms.push_back('K');
						break;
					}
					case 0:{
						sms.push_back('L');
						break;
					}
				}
				break;
			}
			case 6:{
				switch(time%3)
				{
					case 1:{
						sms.push_back('M');
						break;
					}
					case 2:{
						sms.push_back('N');
						break;
					}
					case 0:{
						sms.push_back('O');
						break;
					}
				}
				break;
			}
			case 7:{
				switch(time%4)
				{
					case 1:{
						sms.push_back('P');
						break;
					}
					case 2:{
						sms.push_back('Q');
						break;
					}
					case 3:{
						sms.push_back('R');
						break;
					}
					case 0:{
						sms.push_back('S');
						break;
					}
				}
				break;
			}
			case 8:{
				switch(time%3)
				{
					case 1:{
						sms.push_back('T');
						break;
					}
					case 2:{
						sms.push_back('U');
						break;
					}
					case 0:{
						sms.push_back('V');
						break;
					}
				}
				break;
			}
			case 9:{
				switch(time%4)
				{
					case 1:{
						sms.push_back('W');
						break;
					}
					case 2:{
						sms.push_back('X');
						break;
					}
					case 3:{
						sms.push_back('Y');
						break;
					}
					case 0:{
						sms.push_back('Z');
						break;
					}
				}
				break;
			}
		}
	}
	if(!sms.empty())
	{
		now=sms.size();
		for(list<char>::iterator it=sms.begin();it!=sms.end();it++)
		{
			cout<<*it;
		}
	}
	else
	{
		cout<<"null";
	}
}
