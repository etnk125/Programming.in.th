#include<iostream>
using namespace std;
main()
{
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int day,mon,dai=0;
	cin>>day>>mon;
	if(mon==1)
	{
		dai=day%7;
	}
	else
	{
		for(int i=0;i<mon;i++)
		dai+=m[i];
		dai+=day;
		dai%=7;
	}
	switch(dai)
	{
		case 1: cout<<"Thursday";break;
		case 2: cout<<"Friday";break;
		case 3: cout<<"Saturday";break;
		case 4: cout<<"Sunday";break;
		case 5: cout<<"Monday";break;
		case 6: cout<<"Tuesday";break;
		case 0: cout<<"Wednesday";break;
	}

		
}
