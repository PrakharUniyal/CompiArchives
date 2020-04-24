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
int main()
#define int long long
{
    ok;
    test(t)
    {
        num(n);
        num(m);
        num(k);

        vector<vector<int>> mat;
        loop(i,0,n) {arr(a,k);mat.push_back(a);}

        loop(i,0,n)
        {
            vector<int> frq(m,0);
            loop(j,0,k)
            {
                frq[mat[i][j]-1]++;
            }
            // loop(j,0,m){cout<<frq[j]<<" ";}
            cout<<1+max_element(frq.begin(),frq.end())-frq.begin();
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Explain:
K forms.
1 Form = N Questions
1 Question = M options
1 option in correct.

Cij is correct answer for ith question in jth form's answer sheet.

Choose options to be marked for each question in such a way that the least possible score is minimized.

Here's the table:

Question no. \ Question Set:

    1   2   3   4   ... k
1   C11 C12 C13 C14     C1k
2   C21 C22 C23 C24     C2k
3   C31 C32 C33 C34     C3k
4   C41 C42 C43 C44     C4k
...
n   Cn1 Cn2 Cn3 Cn4     Cnk

Lets rearrange them in a way that sorts rows(question vectors) on the frequency of most frequent option for it across the sets.

    1   2   3   4   ... k
s1  Cs11Cs12Cs13Cs14    Cs1k    l11 l12 ... l1m
s2  Cs21Cs22Cs23Cs24    Cs2k    l21 l22 ... l2m
s3  Cs31Cs32Cs33Cs34    Cs3k    l31 l32 ... l3m
s4  Cs41Cs42Cs43Cs44    Cs4k    l41 l42 ... l4m
...
sn  Csn1Csn2Csn3Csn4    Csnk    ln1 ln2 ... lnm

    x1  x2  x3  x4      xk

N = 5
K = 10
M = 6

    1   2   3   4   5   6   7   8   9  10
1   4   5   2   5   4   3   3   6   5   4
2   1   2   3   5   4   2   3   4   2   6
3   1   6   3   4   1   6   3   4   4   5
4   2   4   3   6   3   5   2   6   5   1
5   2   1   3   4   5   6   2   5   4   2

l1<> = 0 1 2 3 3 1 => 4(3)
l2<> = 1 3 2 2 1 1 => 2(3) 
l3<> = 2 0 2 3 1 2 => 4(3)
l4<> = 1 2 2 1 2 2 => 2(2)
l5<> = 1 3 1 2 2 1 => 2(3)

x<> = 3 1 1 1 1 2 1 2 2

2,3,4,5,7
5,2,5,4,3 4 => 5
2,3,5,4,3 2 => 3
6,3,4,1,3 4 => 3
4,3,6,3,2 2 => 3
1,3,4,5,2 2 => 2

N = 1
M = i
K = 1

Ans: C11

N = i
M = j
K = 1

Ans: C1<>



*/