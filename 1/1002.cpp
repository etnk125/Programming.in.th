#include<iostream>
using namespace std;
main()
{
	int num;
	int b,i=0,v=0,x=0,l=0,c=0;
	//cout<<i<<v<<x<<l<<c;
	cin>>num;
	for(int j=1;j<=num;j++)
	{
		b=j/100;
		switch(b)
		{
			case 1:c++;break;
			case 2:c+=2;break;
			case 3:c+=3;break;
		}
		b=j%100;
		switch(b/10)
		{
			case 1:x++;break;
			case 2:x+=2;break;
			case 3:x+=3;break;
			case 4:x++;l++;break;
			case 5:l++;break;
			case 6:x++;l++;break;
			case 7:x+=2;l++;break;
			case 8:x+=3;l++;break;
			case 9:x++;c++;break;
		}
		switch(b%10)
		{
			case 1:i++;break;
			case 2:i+=2;break;
			case 3:i+=3;break;
			case 4:i++;v++;break;
			case 5:v++;break;
			case 6:i++;v++;break;
			case 7:i+=2;v++;break;
			case 8:i+=3;v++;break;
			case 9:i++;x++;break;
		}
		
	}printf("%d %d %d %d %d",i,v,x,l,c);
}
