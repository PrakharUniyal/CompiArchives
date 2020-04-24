#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)

// #define MAXN 1000000001

// // long long spf[MAXN];
// // void sieve() {spf[1] = 1; for (long long i = 2; i < MAXN; i++){spf[i] = i;} for (long long i = 4; i < MAXN; i += 2){spf[i] = 2;} for (long long i = 3; i * i < MAXN; i++) {if(spf[i] == i){for (long long j = i * i; j < MAXN; j += i){if (spf[j] == j){spf[j] = i;}}}}}
// // vector<long long> factors(long long x)
// // {
// // 	vector<long long> ret;
// // 	while (x != 1) { ret.push_back(spf[x]); x = x / spf[x];}
// // 	return ret;
// // }

vector<long long> factors(int n)
{
	vector<long long> ret;
	while (n % 2 == 0){ret.push_back(2);n = n / 2;}
	for (int i = 3; i <= sqrt(n); i = i + 2) {while (n % i == 0){ret.push_back(i); n = n / i;}}
	if (n > 2) {ret.push_back(n);}
	return ret;
}

int main()
#define int long long
{
    ok;
	// sieve();
    test(t)
	{
		num(x);
		num(k);

		if(k<=factors(x).size()) {cout<<1<<endl;}
		else {cout<<0<<endl;}
	}
    return 0;
}

/*
Explain:
if x = 1; that means number is 1 -> k must be 0 for being true.
if x = 2; number is a prime -> k must be 1
x = 3; p^2 k must be 1
x = 4; k: 1,2
x = 5; k: 1
...

...
x = pi(pow(pi,ei)); k:1,2,3,..,sigma()

if k => [1,num(prime factors(x))] then true
*/