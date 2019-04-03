//
// Created by AKASH KHANRA on 2019-02-25.
//


/*
int main()
{

    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(1);
    pq.push(10);
    pq.push(30);
    pq.push(20);
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}

#include <algorithm>
#include <vector>

{
    vector<int> pq;

    make_heap(pq.begin(),pq.end());

    pq.push_back(35);
    pq.push_back(33);
    pq.push_back(42);
    pq.push_back(10);
    pq.push_back(14);
    pq.push_back(19);
    pq.push_back(27);
    pq.push_back(44);
    pq.push_back(26);
    pq.push_back(31);

    while(pq.empty()==false) {
        push_heap(pq.begin(),pq.end());
        cout << pq.front() << " ";
        pop_heap(pq.begin(), pq.end());
        pq.pop_back();
    }
    return 0;

}






#include <iostream>
#include<vector>
#include<string.h>
#include<math.h>
using namespace std;

int concatArray(vector<int> vect){
    int sum = 0;
    int len = vect.size()-1;

    for(int i=0; i<vect.size();i++){
        sum += (pow(10, len) * vect[i]);
        len--;
    }

    //cout<<"Sub: "<<sum<<endl;
    return sum;
}

{

    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        vector<int> arr;
        for(int i=0;i<a;i++)
        {
            int n;
            cin>>n;
            arr.push_back(n);
        }


        sort(arr.begin(),arr.end());
        vector<int> a1;

        for(int i=0;i<a;i=i+2)
        {
            a1.push_back(arr[i]);

        }
        vector<int> a2;
        for(int i=1;i<a;i=i+2)
        {
            a2.push_back(arr[i]);

        }

        cout<<"printing a1"<<endl;
        for(int i=0;i<a1.size();i++)
        {
            cout<<a1[i]<<" ";
        }


        cout<<"printing a2"<<endl;
        for(int i=0;i<a2.size();i++)
        {
            cout<<a2[i]<<" ";
        }


         int s1,s2;


        s1=concatArray(a1);
        s2=concatArray(a2);
        cout<<s1+s2<<endl;

         }
    return 0;
}




*/


#include <vector>
#include <string.h>
#include <iostream>
using namespace std;
//#include<bits/stdc++.h>
int main() {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        string b;
        cin>>b;
        int a1=0;
        int b1=0;
        int i=0;
        while(a[i]!='\0')
        {
            i++;
        }
        a1=i;
        i=0;
        while(b[i]!='\0')
        {
            i++;
        }
        b1=i;
        vector<char> test1;
        vector<char> test2;
        for( i=0;i<a1;i++)
        {
            test1.push_back(a[i]);
        }

        for( i=0;i<b1;i++)
        {
            test1.push_back(b[i]);
        }

        int c=0;
        for( i=0;i<a1;i++)
        {
            for(int j=0;j<b1;j++)
            {
                if(test1[i]==test2[j])
                {
                    c++;
                    break;

                }else
                {
                    j++;
                }
            }
        }
        if(c==a1)
            cout<<1<<endl;
        else
            cout<<0;
    }
    return 0;
}