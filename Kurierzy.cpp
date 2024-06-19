#include <bits/stdc++.h>
using namespace std;

	int n,m,a,b,c,val,spr,odp,poz,pol;
	vector <int> tab[1000005];
	vector <int> pomoc;
	vector <int>::iterator it1;
	vector <int>::iterator it2;
	

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	srand(time(NULL));
	
	cin>>n>>m;
	pomoc.push_back(0);
	for(int i=1; i<=n; i++)
	{
		cin>>a;
		tab[a].push_back(i);
		pomoc.push_back(a);
	}
	
	for(int i=0; i<m; i++)
	{
		cin>>a>>b;
		spr=0;
		pol=(b-a+1)/2;
		for(int j=0; j<25; j++)
		{
			poz=rand()%(b-a+1)+a;
			c=pomoc[poz];
			it1=lower_bound(tab[c].begin(), tab[c].end(), a);
			it2=upper_bound(tab[c].begin(), tab[c].end(), b);
			
			if(pol<it2-it1)
			{
				val=c;
				spr=1;
				break;
			}
			
			
		}
		if(spr==0) cout<<0<<endl;
		else cout<<val<<endl;
	}
	
	return 0;
}