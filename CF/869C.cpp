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


// perform summation from 1 to min ( a , b ) 







const int maxn = 5005 ;
ll ncr[maxn][maxn] ; 
ll fact[maxn] ;
int mod = 998244353; 
 
void init()
{
	fact[0] = 1 ; 
	for(int i = 1 ; i < maxn ; ++i ) 
	{
		fact[i] = ( (fact[i-1]%mod )* (i%mod ) ) % mod ; 
	}

}

void  nCk ()
{	
	ncr[0][0]  = 1 ; 
	for(int i = 1 ; i < maxn ; ++i ) 
	{
		for(int j = 0 ; j <= i ; ++j ) 
		{
			if ( j == 0 || j == i ) 
				ncr[i][j] = 1 ; 
			else
			{
				ncr[i][j] = ((  ncr[i-1][j-1] % mod ) + ( ncr[i-1][j] % mod ) ) % mod ; 
			}
		}
	}
}

 
	
int main()
{
	ios_base::sync_with_stdio(0);	
	ll a , b , c ;
	cin >> a >> b >> c ;	
	init() ; 
	nCk() ; 
	ll ans , ans1 = 0 , ans2 = 0 , ans3 = 0  ;
	for(int i = 0 ; i <= min ( a, b ) ; ++i ) 
	{
		ans1 +=  (  (( ncr[a][i]*ncr[b][i]) % mod ) * (fact[i] % mod )) % mod ;
		ans1 %= mod ; 
		assert ( fact[i] < mod ) ; 
	}
	for(int i = 0 ; i <= min ( c, b ) ; ++i ) 
	{
		ans2 += (  (( ncr[c][i]*ncr[b][i]) % mod ) * (fact[i] % mod )) % mod ;
		ans2 %= mod ; 
		assert (fact[i] < mod ) ; 
	}
	for ( int i = 0 ; i <= min ( c , a ) ; ++i ) 
	{
		ans3 += (  (( ncr[c][i]*ncr[a][i]) % mod ) * (fact[i] % mod )) % mod ;
		ans3 %= mod ; 
		assert ( fact[i] < mod )  ;
	}
	ans = (ans1 * ans2) % mod ; 
	ans = (ans * ans3 ) % mod ; 
	cout << ans << endl;  
	return 0 ;
}


