vector<long long> nge(vector<long long> arr) 
{
    // O(N)
    long long n = arr.size();
    stack <long long> s; 
    vector<long long> ans(n,0);
    s.push(0);
    for (long long i = 1; i < n; i++)
    {
        if (s.empty()) {s.push(i); continue;} 
        while (s.empty() == false && arr[s.top()] < arr[i]) {ans[s.top()]=i; s.pop();}
        s.push(i);
    }
    while (s.empty() == false){ans[s.top()]=-1; s.pop();}
    return ans;
}

vector<long long> ngee(vector<long long> arr) 
{
    // O(N)
    long long n = arr.size();
    stack <long long> s; 
    vector<long long> ans(n,0);
    s.push(0);
    for (long long i = 1; i < n; i++)
    {
        if (s.empty()) {s.push(i); continue;} 
        while (s.empty() == false && arr[s.top()] <= arr[i]) {ans[s.top()]=i; s.pop();}
        s.push(i);
    }
    while (s.empty() == false){ans[s.top()]=-1; s.pop();}
    return ans;
}

vector<long long> pge(vector<long long> arr) 
{
    // O(N)
    long long n = arr.size();
    stack <long long> s; 
    vector<long long> ans(n,0);
    s.push(n-1);
    for (long long i = n-2; i > -1; i--)
    {
        if (s.empty()) {s.push(i); continue;} 
        while (s.empty() == false && arr[s.top()] < arr[i]) {ans[s.top()]=i; s.pop();}
        s.push(i);
    }
    while (s.empty() == false){ans[s.top()]=-1; s.pop();}
    return ans;
}

vector<long long> pgee(vector<long long> arr) 
{
    // O(N)
    long long n = arr.size();
    stack <long long> s; 
    vector<long long> ans(n,0);
    s.push(n-1);
    for (long long i = n-2; i > -1; i--)
    {
        if (s.empty()) {s.push(i); continue;} 
        while (s.empty() == false && arr[s.top()] <= arr[i]) {ans[s.top()]=i; s.pop();}
        s.push(i);
    }
    while (s.empty() == false){ans[s.top()]=-1; s.pop();}
    return ans;
}

vector<pair<long long, long long>> ans(vector<long long> arr, vector<long long> wt)
{
    // O(N)
    long long n = arr.size();
    vector < pair<long long, long long> > ans(n);
    vector<bool> visited(n,0);

    for(long long i=0;i<n;i++)
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
                wtsum = 0LL;
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
