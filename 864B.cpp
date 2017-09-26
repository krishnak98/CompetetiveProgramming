#include<bits/stdc++.h>
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


int main()
{
	ios_base::sync_with_stdio(0);	
	int n ;
	cin >> n ;
	string a ;
	cin >> a ;
	si sx ;
	int ans = 0 ;
	for(int i = 0 ; i < n ; ++i ) 
	{
		if ( a[i] >= 'A'&& a[i] <= 'Z') 
		{
			if ( sx.size() > ans ) 
				ans = sx.size() ;
			sx.clear(); 
		}
		else
			sx.insert(a[i]); 

	}
	if ( sx.size() > ans ) 
		ans = sx.size() ;
	cout << ans << endl ; 
	

	return 0 ;
}


