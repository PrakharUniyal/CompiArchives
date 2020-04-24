#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

vector<long long> dtb(long long n) 
{ 
    // array to store binary number 
    vector<long long> binaryNum(64); 
  
    // counter for binary array 
    long long i = 0; 
    while (n > 0) { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 

    return binaryNum;
} 

int main()
#define int long long
{
    int m = 1e9 + 7;
    num(t);
    while(t--)
    {
        num(l);
        num(r);

        if(r<(int) pow(2,floor(log2(l))+1)) {r++;}
        else {r = (int) pow(2,floor(log2(l))+1);}

        vector<int> ll = dtb(l);
        //loop(i,32){cout<<ll[i];}
        
        int d = l;
        int ans = 0;

        int i=0;
        int x = l;
        while(d!=r && i<64)
        {
            if(ll[i]==1)
            {
                //cout<<ans<<" "<<x<<" "<<min((int)(pow(2,i)),r-d)<<" "<<d<<endl;
                ans+=((x%m)*(min((int)(pow(2,i)),r-d)%m))%m;
                ans%=m;
                d+=min((int)(pow(2,i)),r-d);
                x-=pow(2,i);
            }
            i++;
        }

        cout<<ans<<endl;

    }
    return 0;
}
