#include<bits/stdc++.h>
using namespace std;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
    long long n,x,tab[5]={0,2,4,6,8};
    vector <int> odp;
    
    cin>>n;
    
    while(n>0)
    {
    	x=n%5;
    	odp.push_back(tab[x]);
    	n/=5;
	}
	
	for(int i=odp.size()-1; i>=0; i--)
	{
		cout<<odp[i];
	}
    return 0;
}