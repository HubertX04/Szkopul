#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	int n;
	string a,b;
	queue <string> kolejka;
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(a=="nowy")
		{
			cin>>b;
			kolejka.push(b);
		}
		if(a=="zawolaj")
		{
			cout<<kolejka.front()<<endl;
			kolejka.pop();
		}
		if(a=="ile")
		{
			cout<<kolejka.size()<<endl;
		}
	}
	return 0;
}