#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	
	stack <int> stos,pom,stoss;
	vector <int> odp;
	bool czyjest[50005]={};
 
	int t,a,b,aa;
	int klocek,ilosc,kloc;
	cin>>t;
 
	for(int i=0; i<t; i++)
	{
		cin>>a>>b;
		stoss.push(a);
		stoss.push(b);
	}
	
	for(int i=t*2-1; i>=0; i--)
	{
		aa=stoss.top();
		stoss.pop();
		stos.push(aa);
	}
 
	while(!stos.empty())
	{
		klocek=stos.top();
		if(!stos.empty())stos.pop();
 
		if(czyjest[klocek]==1)
		{
			ilosc=pom.size();
			kloc=pom.top();
			if(!pom.empty())
			{
				czyjest[pom.top()]=0;
				pom.pop();
			}
			if(kloc!=klocek)
			{
				odp.push_back(ilosc);
				stos.push(kloc);
				stos.push(klocek);
			}
		}
		else
		{
			pom.push(klocek);
			czyjest[klocek]=1;
		}
 
	}
 
	cout<<odp.size()<<endl;
	for(int i=0; i<odp.size(); i++)
	{
		cout<<odp[i]<<endl;
	}
 
	return 0;
}