#include <bits/stdc++.h>
using namespace std;
#define tests(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,n) for(long long i=0;i<n;i++)
#define de(n) cout<<n<<endl

int main()
#define int long long
{
    num(n);
    num(q);

    vector<vector<int>> a(2);

    loop(i,2)
    {
        vector<int> temp(n);
        loop(j,n)
        {
            temp[j]=0;
        }
        a[i]=temp;
    }

    bool pass = true;
    vector<pair<int,int>> rod;
    while(q--)
    {
        int r,c;
        cin>>r>>c;

        r--; c--;

       
        if(a[r][c]==0)
        {
            a[r][c]=1;
            if(r==0)
            {
                if(a[(r+1)%2][c-1]==1){rod.push_back(make_pair(c,c-1));}
                if(a[(r+1)%2][c]==1){rod.push_back(make_pair(c,c));}
                if(a[(r+1)%2][c+1]==1){rod.push_back(make_pair(c,c+1));}
            }
            else
            {
                if(a[(r+1)%2][c-1]==1){rod.push_back(make_pair(c-1,c));}
                if(a[(r+1)%2][c]==1){rod.push_back(make_pair(c,c));}
                if(a[(r+1)%2][c+1]==1){rod.push_back(make_pair(c+1,c));}
            }
        }
        else
        {
            a[r][c]=0;
            if(r==0)
            {
                int i=0;
                while(i!=rod.size())
                {
                    if(rod[i].first==c){rod.erase(rod.begin()+i);}
                    else {i++;}
                }
            }
            else
            {
                int i=0;
                while(i!=rod.size())
                {
                    if(rod[i].second==c){rod.erase(rod.begin()+i);}
                    else {i++;}
                }
            }
        }

//        cout<<rod.size();

        if(rod.size()==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
