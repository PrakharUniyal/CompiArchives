#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define rloop(i,m,n) for(long long i=n-1;i>=m;i--)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)
int main()
#define int long long
{
    ok;
    int cas = 1;
    test(t)
    {
        str(s);
        s = '0' + s + '0';
        
        vector<string> ins(s.size()-1,"");

        loop(i,0,10)
        {
            loop(j,0,s.size()-1)
            {
                if ((s[j] - '0' <= i) && (s[j + 1] - '0' > i))
                {
                    ins[j] += '(';
                //     cout<<"( yeh wala:"<<s[j]<<" "<<s[j+1]<<" "<<ins[j]<<endl;
                }
            }
            loop(j,1,s.size())
            {
                if ((s[j] - '0' <= i) && (s[j - 1] - '0' > i))
                {
                    ins[j-1]+=')';
                    // cout<<") yeh wala:"<<s[j-1]<<" "<<s[j]<<" "<<ins[j-1]<<endl;                    
                }
            }
        }
        // loop(i, 0, s.size() - 1)
        // {
        //     cout << ins[i] << " ";
        // }
        // cout << endl;

        string y= "";
        loop(i,0,s.size()-1) {y += s[i]+ins[i];}
        y+=s[s.size()-1];
        y = y.substr(1,y.size()-2);

        cout<<"Case #"<<cas<<": "<<y<<endl;
        cas++;
    }
    return 0;
}

/*
Explain:
If there are only 0s and 1s(Test set 1)

S = (0)n0times (1)n1times (0)n2times (1)n3times .... 
Simple algo:
If a[i] = 0, a[i+1] = 1; S = a[:i+1]+'(' + a[i+1:]
Else If a[i] = 1, a[i+1] = 0; S = a[:i+1]+')' + a[i+1:]
Else nothing.

For all(0-9):
replace 'd' with ('('*d)+'d'+(')'*d)

(((((5)))2)1(2))
(((3))1(2))
0((2)1)

'0' 1 2 3 4 5 .. j ... n-1 n '0'
   0 1 2 3 4 5    j         n
*/