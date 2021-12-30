#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[6],b[6],c;
	int x,i,j;
	cout<<"*******";
	strcpy(a,"science");
	x=strlen(a);
	for(j=0;j<5;j++)
	{
		
		cout<<"enter letter";
		cin>>c;
		for(i=0;i<x;i++)
		{
			if(a[i]==c)
			{
					cout<<c;
				    b[i]=c;
			
			}
			else
			{
				if(a[i]!=b[i])
				{
					cout<<"*";
				    b[i]='*';
				}
				else
				cout<<a[i];
			}
		}	
	}
	int cmp=strcmp(a,b);
	if(cmp==0)
	{
		cout<<endl<<"success";
	}
	else
	{
		cout<<endl<<"chances completed";
	}
}
