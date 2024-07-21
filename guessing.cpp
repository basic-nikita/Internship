#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	int x=78,count=0;
	int turn;
	cin>>turn;
	cout<<"guess a number b/w 1 and 99:";
	for(int i=1;i<=turn;i++){
		cin>>n;
		count=i;
		if(n<x)  cout<<"your guess is smaller than number.";
	    else if(n>x) cout<<"your guess is greater than number.";
		else cout<<"you are correct.";
		if(n==x) break;
	}
	cout<<endl;
	cout<<"you took\n"<<count<<"\nchance.";
	return 0;

}
