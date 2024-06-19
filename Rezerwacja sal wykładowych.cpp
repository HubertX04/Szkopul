#include<bits/stdc++.h>
using namespace std;
 
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	vector <pair <int, int> > tab;
	int czas[100001]={};
	int t,x=0,y=0,pom=0,odp,a,b;
	cin>>t;
		tab.push_back({0,0});
	for(int i=0; i<t; i++)
	{
		cin>>a>>b;
		tab.push_back({b,a});
	}
	sort(tab.begin(), tab.end());
 
 
	czas[0]=0;
	czas[1]=tab[1].first-tab[1].second;
	for(int i=2; i<=t; i++)
	{
		pom=0;
		x=czas[i-1];
		for(int j=0; j<=i; j++)
		{
			if(tab[i].second<tab[j].first)
			{
				pom=j;
				break;
			}
		}
		y=tab[i].first-tab[i].second+czas[pom-1];
		odp=max(x,y);
		czas[i]=odp;
	}
	cout<<czas[t];
	return 0;
}