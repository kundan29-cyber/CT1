// Kundan Krishnan
// 2010991602
// Set : 03
// q2 : find a pair with the given sum in an array

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
	ll sum;
	cin >> sum;
	ll ct=0;
	for(ll i=0;i<n;i++)
	{
		ll find = sum - arr[i]; // find contains the number to be checked.
		for(ll j=i+1;j<n;j++)
		{
			if(arr[j] == find)
			{
				ct++;
				cout << arr[i] << " " << arr[j] << endl;
			}
		}
	}
	if(ct==0) cout << "Pair not found";
}