#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int tab[100005]={}, prefix[100005]={};
	int n,k,a,l,d,m,x;
	cin>>n>>k;
	
	while(k--)
	{
		cin>>a>>l>>d;
		if(d==1)
		{
			m=a+l;
			prefix[a]++;
			prefix[m]--;
		}
		else
		{
			x=0;
			for(int i=a; l>x; i+=d)
			{
				tab[i]++;
				x++;
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		prefix[i]+=prefix[i-1];
	}
	
	
	for(int i=1; i<=n; i++)
	{
		cout<<prefix[i]+tab[i]<<" ";
	}
	return 0;
}