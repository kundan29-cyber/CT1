// Kundan Krishnan
// 2010991602
// Set : 03
// q1 : rearrange an array with alternate high and low elements

#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
	if(n%2 != 0)
	{
		for(ll i=1;i<n;i++)
		{
			if(n%2 != 0 and i%2 != 0) swap(arr[i],arr[i+1]);
		}
	}
	else
	{
		for(ll i=1;i<n;i+=2)
		{
			if(i+1 == n) continue;
			swap(arr[i],arr[i+1]);
		}
	}
	for(ll i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
}
