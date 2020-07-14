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

// vector<long long> nge(vector<long long> arr) 
// {
//     // O(N)
//     long long n = arr.size();
//     stack <long long> s; 
//     vector<long long> ans(n,0LL);
//     s.push(0LL);
//     for (long long i = 1; i < n; i++)
//     {
//         if (s.empty()) {s.push(i); continue;} 
//         while (s.empty() == false && arr[s.top()] < arr[i]) {ans[s.top()]=i; s.pop();}
//         s.push(i);
//     }
//     while (s.empty() == false){ans[s.top()]=-1; s.pop();}
//     return ans;
// }

vector<long long> nge(vector<long long> &h)
{
    long long n = h.size();
    stack<long long> s;
    vector<long long> mp;
    vector<long long> arr1(n);

    for (long long i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && h[s.top()] <= h[i]) {s.pop();}
        if (s.empty()) {arr1[i] = -1;}
        else {arr1[i] = s.top();}
        s.push(i);
    }

    for (long long i = 0; i < n; i++) {mp.push_back(arr1[i]);}
    return mp;
}

vector<long long> ngee(vector<long long> &h)
{
    long long n = h.size();
    stack<long long> s;
    vector<long long> mp;
    vector<long long> arr1(n);

    for (long long i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && h[s.top()] < h[i]) {s.pop();}
        if (s.empty()) {arr1[i] = -1;}
        else {arr1[i] = s.top();}
        s.push(i);
    }

    for (long long i = 0; i < n; i++) {mp.push_back(arr1[i]);}
    return mp;
}

// vector<long long> ngee(vector<long long> arr) 
// {
//     // O(N)
//     long long n = arr.size();
//     stack <long long> s; 
//     vector<long long> ans(n,0LL);
//     s.push(0LL);
//     for (long long i = 1; i < n; i++)
//     {
//         if (s.empty()) {s.push(i); continue;} 
//         while (s.empty() == false && arr[s.top()] <= arr[i]) {ans[s.top()]=i; s.pop();}
//         s.push(i);
//     }
//     while (s.empty() == false){ans[s.top()]=-1; s.pop();}
//     return ans;
// }

// vector<long long> pge(vector<long long> arr) 
// {
//     // O(N)
//     long long n = arr.size();
//     stack <long long> s; 
//     vector<long long> ans(n,0LL);
//     s.push(n-1);
//     for (long long i = n-2; i > -1; i--)
//     {
//         if (s.empty()) {s.push(i); continue;} 
//         while (s.empty() == false && arr[s.top()] < arr[i]) {ans[s.top()]=i; s.pop();}
//         s.push(i);
//     }
//     while (s.empty() == false){ans[s.top()]=-1; s.pop();}
//     return ans;
// }

// vector<long long> pgee(vector<long long> arr) 
// {
//     // O(N)
//     long long n = arr.size();
//     stack <long long> s; 
//     vector<long long> ans(n,0LL);
//     s.push(n-1);
//     for (long long i = n-2; i > -1; i--)
//     {
//         if (s.empty()) {s.push(i); continue;} 
//         while (s.empty() == false && arr[s.top()] <= arr[i]) {ans[s.top()]=i; s.pop();}
//         s.push(i);
//     }
//     while (s.empty() == false){ans[s.top()]=-1; s.pop();}
//     return ans;
// }

vector<pair<long long, long long>> ans(vector<long long> arr, vector<long long> wt)
{
    // O(N)
    long long n = arr.size();
    vector < pair<long long, long long> > ans(n);
    vector<bool> visited(n,0LL);

    for(long long i=0LL;i<n;i++)
    {
        if(!visited[i])
        {
            if (arr[i] == -1)
            {
                ans[i] = make_pair(i, wt[i]);
                visited[i]=1;
            }
            else
            {
                stack<long long> chain;
                long long wtsum;
                long long cur = i;
                chain.push(cur);
                while(arr[cur]!=-1){chain.push(arr[cur]); cur = arr[cur];}
                while(!chain.empty())
                {
                    long long x = chain.top();
                    wtsum+=wt[x];
                    ans[x] = make_pair(cur,wtsum);
                    visited[x]=1;
                    chain.pop();
                }   
            }
        }   
    }
    return ans;
}

int main()
#define int long long
{
    ok;
    num(n);
    num(q);

    arr(h,n);
    arr(a,n);

    vector<int> ngr= nge(h);
    vector<int> nger = ngee(h);
    reverse(h.begin(),h.end());
    vector<int> ngl= nge(h);
    vector<int> ngel= ngee(h);
    reverse(h.begin(),h.end());
    reverse(ngl.begin(),ngl.end());
    reverse(ngel.begin(),ngel.end());
    loop(i,0,n) {if(ngl[i]!=-1){ngl[i]=n-1-ngl[i];}}
    loop(i,0,n) {if(ngel[i]!=-1){ngel[i]=n-1-ngel[i];}}

    // de("NGE:");aout(ngr,i);
    // de("PGE:");aout(ngl,i);

    vector<pair<int,int>> right = ans(ngr,a);
    vector<pair<int,int>> left = ans(ngl,a);

    // de("right:");loop(i,0,n){cout<<right[i].first<<" "<<right[i].second<<endl;}
    // de("left:");loop(i,0,n){cout<<left[i].first<<" "<<left[i].second<<endl;}
    while (q--)
    {
        num(opt);
        if(opt==1)
        {
            num(b);
            num(k);
            a[b-1] = k;
            right = ans(ngr,a);
            left = ans(ngl,a);
        }
        else
        {
            num(b);
            num(c);
            b-=1;
            c-=1;
            if(b==c){de(a[c]);}
            else if(h[b]<=h[c]) {de(-1);}
            else 
            {
                if(b>c) 
                {
                    if(ngel[b]<c){de(right[c].second-right[b].second + a[b]);}
                    else {de(-1);}
                    // int anss = 0;
                    // while(h[c]<h[b])
                    // {
                    //     anss+=a[c];
                    //     c=ngr[c];
                    //     if(c==-1){break;}
                    // }

                    // if(c==b){de(anss+a[c]);}
                    // else{de("-1");}
                }
                else 
                {
                    if(nger[b]>c) {de(left[c].second - left[b].second + a[b]);}
                    else {de(-1);}
                    // int anss = 0;
                    // while(h[c]<h[b])
                    // {
                    //     anss+=a[c];
                    //     c=ngl[c];
                    //     if(c==-1){break;}
                    // }

                    // if(c==b){de(anss+a[c]);}
                    // else{de("-1");}
                }
            }
        }
    }

    return 0;
}

/*
Explain:

3 1 4 1 5
1 2 4 8 16

+2 2 +4 4 -1
-1 0 -1 2 -1

10 1
1 2 6 4 5 4 7 8 8 20
1 1 1 1 1 1 1 1 2 1
2 10 1



*/