#include<iostream>
#include<string.h>
using namespace std;
main(){
	char word[16];
	cin>>word;
	int l=strlen(word),i,j;
	cout<<".";
	for(i=0;i<l;i++)
	{
		if((i+1)%3!=0)cout<<".#..";
		else cout<<".*..";
	}
	cout<<"\n.";
	for(i=0;i<l;i++)
	{
		if((i+1)%3!=0)cout<<"#.#.";
		else cout<<"*.*.";
	}
	cout<<endl<<"#";
	for(i=0;i<l;i++)
	{
		if((i+1)%3==0)cout<<"."<<word[i]<<".*";
		else if((i+1)%3==2&&i!=l-1)cout<<"."<<word[i]<<".*";
		else cout<<"."<<word[i]<<".#";
	}
	cout<<endl<<".";
	for(i=0;i<l;i++)
	{
		if((i+1)%3!=0)cout<<"#.#.";
		else cout<<"*.*.";
	}
	cout<<"\n.";
	for(i=0;i<l;i++)
	{
		if((i+1)%3!=0)cout<<".#..";
		else cout<<".*..";
	}
}
