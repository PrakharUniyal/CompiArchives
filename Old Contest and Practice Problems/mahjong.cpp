#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[3];
    char sui[3];
    for(int i=0;i<3;i++)
    {
        cin>>num[i]>>sui[i];
    }
    
    set <char> ss(begin(sui),end(sui));
    set <int> nn(begin(num),end(num));
    if (ss.size()==3) cout<<2<<endl;
    else if (ss.size()==2)
    {
        if (nn.size()==1) cout<<1<<endl;
        else
        {
            for(int i=0;i<3;i++)
            {
                for(int j=i+1;j<3;j++)
                {
                    if (sui[i]==sui[j])
                    {
                        if (abs(num[i]-num[j])<3)
                        {
                            cout<<1<<endl;
                        }
                        else
                        {
                            cout<<2<<endl;
                        }
                    }
                }
            }
        }
    }
    else
    {
        if (nn.size()==1) cout<<0<<endl;
        else if (nn.size()==2) cout<<1<<endl;
        else
        {
            sort(num,num+3);
            int a=num[1]-num[0];
            int b=num[2]-num[1];
            if(a==1 && b==1) cout<<0<<endl;
            else if (a>2 && b>2) cout<<2<<endl;
            else
            {
                cout<<1<<endl;
            }
        }
    }
    
}