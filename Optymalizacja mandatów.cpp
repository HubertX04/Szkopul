#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	long long n,a,x,wynik=0,poz,pomoc,pomocy,dz;
	
	vector <long long> pom1;
	vector <long long> pom2;
	
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>a;
		pom1.push_back(a);
	}
	
	for(int i=0; i<n; i++)
	{
		cin>>a;
		pom2.push_back(a);
	}
	
	sort(pom1.begin(), pom1.end());
	
	sort(pom2.begin(), pom2.end());
	
	for(int i=0; i<n; i++)
	{
		poz=n-i-1;
		pomoc=pom2[poz];
		pomocy=0;
		while(pomoc>0)
		{
			pomoc/=10;
			pomocy++;
		}
		dz=pow(10,pomocy);
		wynik+=(pom1[i]*dz+pom2[poz]);
	}
	
	cout<<wynik;
    return 0;
}