#include <bits/stdc++.h>
using namespace std;

/*SasteJugaad*/ //Yahee to baad me yaad aaenge.
#define liX long long
#define f(i,x) for(liX i=0; i<x; i++) 
#define fx(i,x,y) for(liX i=x; i<y; i++)
#define tests(t) liX t;std::cin>>t;f(i,t)
#define sve(v) sort(v.begin(),v.end());
//
/*Nomenclature*/ //Naam me kya rakha hai.
#define li(X) liX X;cin>>X;//L-I-Chi(X) and Long(and another Long).
#define ekk(a) double a;cin>>a;//Ek ka Double.
#define su(i) string i;cin>>i;//Sui and Dhaaga(Needle and String).
#define tri(d,n) vector<liX> d(n);f(i,n){cin>>d[i];}//Vector & 3D. 
//
/*Constants*/ //❤️
#define tez std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);//Tez.
liX m(liX t){return (t%1000000007);}
liX itg[100000];
//
/*TimeManagement*/ //Tujhse Shuru, Tujhpe hee khatm.
using namespace std::chrono;
auto shuru()
{return high_resolution_clock::now();}
void khatm(auto begin)
{auto stop=high_resolution_clock::now();
auto duration=duration_cast<microseconds>(stop-begin);
cout<<"t="<<(float) duration.count()/1000000<<"s"<<endl;}
//auto dunia=shuru(); khatm(dunia);

/*Neeche se check kar..*/
int main()
{
    tez;
    //tests(t){}
	li(q);
	f(i,q)
	{
	    li(a);
	    li(b);
	    li(c);
	    liX s= (a+b+c)/2;
	    cout<<s<<endl;
	}
	return 0;
}