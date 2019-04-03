#include <iostream>
using namespace std;

#include <string.h>
#include <vector>
#define ll long long int
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll s;
        cin>>s;
        string h;
        cin>>h;
        ll count=0;
        vector<ll> poss;
        for(ll i=0;i<s;i++)
        {
            if(h[i]=='1')
            {

                count++;
                poss.push_back(1);
            }
        }

        for(ll i=0; i<poss.size(); i++)
        {
            for(ll j=i+1;j<poss.size();j++)
            {
                count++;
            }

        }

        cout<<count<<endl;

    }

    return 0;
}