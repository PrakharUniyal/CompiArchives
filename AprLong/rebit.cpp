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

long long m = 998244353;

vector<long long> pand(vector<long long> p,vector<long long> q)
{
    return 
    {
        (p[0] + (p[1]*q[0])%m + (p[2]*q[0])%m + (p[2]*q[3])%m + (p[3]*q[0])%m + (p[3]*q[2])%m)%m,
        ((p[1]*q[1])%m)%m,
        ((p[1]*q[2])%m + (p[2]*q[1])%m + (p[2]*q[2])%m)%m,
        ((p[1]*q[3])%m + (p[3]*q[1])%m + (p[3]*q[3])%m)%m
    };
}

vector<long long> por(vector<long long> p,vector<long long> q)
{
    return 
    {
        ((p[0]*q[0])%m)%m,
        (p[1] + (p[0]*q[1])%m + (p[2]*q[1])%m + (p[3]*q[1])%m + (p[2]*q[3])%m + (p[3]*q[2])%m)%m,
        ((p[0]*q[2])%m + (p[2]*q[0])%m + (p[2]*q[2])%m)%m,
        ((p[0]*q[3])%m + (p[3]*q[0])%m + (p[3]*q[3])%m)%m
    };
}

vector<long long> pxor(vector<long long> p,vector<long long> q)
{
    return 
    {
        ((p[0]*q[0])%m + (p[1]*q[1])%m + (p[2]*q[2])%m + (p[3]*q[3])%m)%m,
        ((p[1]*q[0])%m + (p[0]*q[1])%m + (p[2]*q[3])%m + (p[3]*q[2])%m)%m,
        ((p[0]*q[2])%m + (p[2]*q[0])%m + (p[3]*q[1])%m + (p[1]*q[3])%m)%m,
        ((p[0]*q[3])%m + (p[3]*q[0])%m + (p[1]*q[2])%m + (p[2]*q[1])%m)%m
    };
}

long long pryret(char c)
{
    switch(c)
    {
        case '(':
            return 1;
        case '^':
            return 2;
        case '&':
            return 3;
        case '|':
            return 4;
    }
    return -1;
}

vector<long long> calculate(char c, vector<long long> p, vector<long long> q)
{
    if(c=='&')
    {
        return pand(p,q);
    }
    else if(c=='|')
    {
        return por(p,q);
    }
    else if(c=='^')
    {
        return pxor(p,q);
    }
}

    int main()
#define int long long
{
    ok;
    test(t)
    {
        str(l);

        int n = l.size();
        stack< vector<int> > opd;
        stack< char > opr;

        loop(i,0,n)
        {
            if(l[i]=='('){opr.push('(');}
            
            else if(l[i]==')')
            {
                while(opr.top()!='(')
                {
                    vector<int> o1 = opd.top(); opd.pop();
                    vector<int> o2 = opd.top(); opd.pop();
                    vector<int> res = calculate(opr.top(),o1,o2);
                    opd.push(res);
                    opr.pop();
                }
                opr.pop();
            }

            else if(l[i]=='^' || l[i]=='&' || l[i]=='|')
            {
                int pri = pryret(l[i]);
                while(!opr.empty() && pryret(opr.top())>=pri)
                {
                    vector<int> o1 = opd.top(); opd.pop();
                    vector<int> o2 = opd.top(); opd.pop();
                    vector<int> res = calculate(opr.top(),o1,o2);
                    opd.push(res);
                    opr.pop(); 
                }
                opr.push(l[i]);
            }
            else
            {
                opd.push({748683265, 748683265, 748683265, 748683265});
            }
        }

        while(!opr.empty())
        {
            vector<int> o1 = opd.top(); opd.pop();
            vector<int> o2 = opd.top(); opd.pop();
            vector<int> res = calculate(opr.top(),o1,o2);
            opd.push(res);
            opr.pop();             
        }

        cout << opd.top()[0] << " " << opd.top()[1] << " " << opd.top()[2] << " " << opd.top()[3] << endl;
    }
    return 0;
}

/*
Explain:
#: p1,p2,p3,p4

& 
0: p1 + p2q1 + p3q1 + p3q4 + p4q1 + p4q3
1: p2q2
a: p2q3 + p3q2 + p3q3
A: p2q4 + p4q2 + p4q4
    0   1   a   A
0   0   0   0   0
1   0   1   a   A
a   0   a   a   0
A   0   A   0   A

| 
0: p1q1
1: p2 + p1q2 + p3q2 + p4q2 + p3q4 + p4q3
a: p1q3 + p3q1 + p3q3
A: p1q4 + p4q1 + p4q4
    0   1   a   A
0   0   1   a   A
1   1   1   1   1
a   a   1   a   1
A   A   1   1   A

^ 
0: p1q1 + p2q2 + p3q3 + p4q4
1: p2q1 + p1q2 + p3q4 + p4q3
a: p1q3 + p3q1 + p4q2 + p2q4
A: p1q4 + p4q1 + p2q3 + p3q2
    0   1   a   A
0   0   1   a   A
1   1   0   A   a
a   a   A   0   1
A   A   a   1   0



*/