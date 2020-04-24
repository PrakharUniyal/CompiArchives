#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) long long a[n]; for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

string res(char a,char b)
{
    if(a==b){string x(1,a); return x;}
    else
    {
        if(a=='S'&&b=='E' || a=='E'&&b=='S') {return "T";}
        if(a=='S'&&b=='T' || a=='T'&&b=='S') {return "E";}
        if(a=='T'&&b=='E' || a=='E'&&b=='T') {return "S";}
    }
    
}

long long numr(string s)
{
    long long ans=0;
    loop(i,s.size())
    {
        if(s[i]=='S'){ans+= 0 * pow(3,s.size()-1-i);}
        if(s[i]=='E'){ans+= 1 * pow(3,s.size()-1-i);}
        if(s[i]=='T'){ans+= 2 * pow(3,s.size()-1-i);}
    }
    return ans;
}

int main()
#define int long long
{
    num(n);
    num(k);

    vector<string> card(n);
    loop(i,n){cin>>card[i];}

    vector<int> cval(n);
    loop(i,n)
    {
        cval[i]=numr(card[i]);
    }

    map<int,string> pp;
    loop(i,n)
    {
        pp.insert(make_pair(numr(card[i]), card[i]));
    }

    int i=0;
    for(auto it : pp)
    {
        cval[i]=it.first;
        card[i]=it.second;

        i++;
    }

    if(n<3){cout<<0<<endl; return 0;}



    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string tbf="";
            loop(ji,k){tbf+=res(card[i][ji],card[j][ji]);}

            if(binary_search(cval.begin()+j,cval.end(),numr(tbf))) {ans++;}
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
