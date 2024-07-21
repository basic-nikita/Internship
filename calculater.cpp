#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char c;
	cin>>a>>c>>b;
	switch(c)
	{
		case '+':
		     cout<<a<<"+"<<b<<"="<<a+b<<endl;
		     break;
		case '-':
		     cout<<a<<"-"<<b<<"="<<a-b<<endl;
		     break;
		case '*':
		     cout<<a<<"*"<<b<<"="<<a*b<<endl;
		     break;
		case '/':
			cout<<a<<"/"<<b<<"="<<a/b<<endl;
			break;
		default:
			cout<<"Error operator is invalid"<<endl;
			break;
		}
		return 0;
}
	

