#include<bits/stdc++.h>
using namespace std;

struct graf{
	vector <long long> pol; 
}*w;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	long long v,k,a,b,s=0;
	cin>>v>>k;
	
	w = new graf[v+1];
	
	for(int i=0; i<k; i++)
	{
		cin>>a>>b;
		w[a].pol.push_back(b);
		w[b].pol.push_back(a);
	}
	
	for(int i=1; i<=v; i++)
	{
		if(w[i].pol.size()==0)
		{
			s+=2;
		}
		else
		{
			if(w[i].pol.size()==1) s++;
		}
	}
	cout<<s;
	
    return 0;
}