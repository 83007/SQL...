#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        for(int i=0; i<x.length(); i++)
        {
            if(x[0]!=x[i])
            {
                cout<<"YES"<<endl;
               sort(x.begin(),x.end());
                break;

            }
            cout<<"NO"<<endl;
            break;
        }

    }
}
