#include <iostream>
using namespace std;
int main() 
{
	
	int n,k,s=0;
	cout<<"please enter n";
	cin>>n;
	cout<<"please enter k";
	cin>>k;
	int a=240-k;
	for(int i=1;i<=n;i++)
	{
		s=s+5*i;
		if(s>a)
		{
			cout<<i-1;
			break;
		}
	}
	return 0;
}
