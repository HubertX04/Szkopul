#include <bits/stdc++.h>
using namespace std;


int main() 
{
	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	stack <int> stos;
	int wynik=0,t,a,b;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>a>>b;
		while(!stos.empty() && stos.top()>b)
		{
			stos.pop();
		}
		if(stos.empty() || stos.top()<b)
		{
			stos.push(b);
			wynik++;
		}
	}
	cout<<wynik;
	return 0;
}