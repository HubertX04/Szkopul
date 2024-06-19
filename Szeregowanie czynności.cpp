#include <bits/stdc++.h>
using namespace std;

struct szereg{
	double a,b;
	int pozycja;
	bool operator < (const szereg &x)const
	{
		if(x.a*b==a*x.b)
		{
			return x.pozycja>pozycja;
		}
		else
		return x.a*b<a*x.b;
		
	}
};


int main() {
	
	int t;
	cin>>t;
	szereg szer[10005];
	for(int i=0; i<t; i++)
	{
		cin>>szer[i].a>>szer[i].b;
		szer[i].pozycja=i+1;
	}
	
	sort(szer, szer+t);
	
	for(int i=0; i<t; i++)
	{
		cout<<szer[i].pozycja<<endl;
	}
	return 0;
}