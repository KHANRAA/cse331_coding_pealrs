//
// Created by AKASH KHANRA on 2019-02-07.
//

#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main() {
    // your code goes here
    int t;cin>>t;

    while(t--)
    {
        ll countA=0;
        ll countB=0;
        ll countC=0;
        ll N,A,B,K;
        cin>>N>>A>>B>>K;
        for(ll i=1;i<=N;i++)
        {
            if(i%A==0 && i%B!=0)
            {
               // cout<<"inA"<<endl;
                countA++;
            }else if(i%B==0 && i%A!=0 )
            {
               // cout<<"inB"<<endl;
                countB++;
            }else {
                //cout<<"inC"<<endl;
                countC++;
            }
        }
       if(countA+countB>=K)
        {
            cout<<"Win"<<endl;
        }else
            cout<<"Loss"<<endl;

    }
    return 0;
}
