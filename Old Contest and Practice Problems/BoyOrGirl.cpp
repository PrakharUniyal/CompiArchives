#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    set <char> letters;
    for(int i=0;i<s.size();i++)
    {
        letters.insert((char)s[i]);
    }
    
    if (letters.size()%2) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}