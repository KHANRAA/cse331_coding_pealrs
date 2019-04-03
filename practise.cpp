#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256

char getMaxOccuringChar(string str,int len)
{
    // Create array to keep the count of individual
    // characters and initialize the array as 0
    int count[ASCII_SIZE] = {0};

    // Construct character count array from the input
    // string.
    cout<<"max "<<str<<endl;
    int max = 0;  // Initialize max count
    char result;   // Initialize result

    // Traversing through the string and maintaining
    // the count of each character
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }


    return result;
}

int main()
{

    int n;
    cin>>n;
    vector<string> vect;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        vect.push_back(s);
    }
    vector<char> ocT;
    for(int i=0;i<n;i++ )
    {
        int l;
        l=vect[i].size();
        char c=getMaxOccuringChar(vect[i],l);
        ocT.push_back(c);
        //cout<<c<<" ";
    }

    vector<int> slen;
    for(int i=0;i<n;i++)
    {   string s;

        s=vect[i];
        cout<<s<<"<-string"<<endl;
        int co=0;
        for(int j=0;j<vect[i].size();j++)
        {
            if(ocT[i]==s[j])
            {
                cout<<"ocT[i] "<<ocT[i]<<" s[j "<<s[j]<<endl;
                co++;
            }

        }
        slen.push_back(co);
    }

    for(auto x : slen)
    {
        cout<<x<<" ";
    }



    return 0;

}