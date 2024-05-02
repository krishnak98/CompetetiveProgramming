#include <bits/stdc++.h>
using namespace std;
typedef		vector<int>				 vi;
typedef 	vector<vi>				vii;
typedef		pair<int,int>			pii;
typedef		unsigned long long		ull;
typedef		long long				ll ;
typedef 	vector<ll> 				vl ;
typedef 	vector<vl> 				vll;
typedef 	map<string,int>  		msi;
typedef  	map<int,int> 			mii;
typedef 	set<int> 				si ;

#define MOD (int)(1e9+7)
#define rep(i,n)   		for(int i=0; i < n ; i++ ) 
#define DEBUG(x)		cout << '>' << #x << ':' << x << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second 
#define sz size() 
#define all(s) (s.begin(),s.end()) 
int main() 
{
	ios::sync_with_stdio(0) ; 
	ll a ,b ; 
	cin >> a >> b ;
	ll fin = a*b ; 
	ll prev =0 ; 
	ll i = 1 , j = 1;
	ll masha = 0 , dasha = 0 ;
	while ( prev < fin ) 
	{
		if ( a*i - prev > b*j - prev ) 
		{
			dasha += abs( prev - b*j ) ;
			prev = b*j ; 
			++j ; 
		}
		else if (  a*i - prev < b*j - prev )
		{
			masha += abs( prev - a*i ) ; 
			prev = a*i ; 
			++i ; 
		}
		else 
		{
			if ( a < b ) 
			{
				dasha += abs( prev - b*j ) ; 
			}
			else 
				masha += abs(prev - b*j ) ; 
			prev = b*j ; 
			++i ; 
			++j ; 
			
		}
	}
	if ( dasha < masha ) 
		cout << "Dasha\n";
		else if (masha < dasha ) 
		cout << "Masha\n";
	else 
		cout << "Equal\n";
	//DEBUG(masha) ; 
	//DEBUG(dasha) ; 
	return 0 ; 
}

