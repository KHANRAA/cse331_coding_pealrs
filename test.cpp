/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int nos;
        cin>>nos;
        int a[nos];
        for(int i=0;i<nos;i++)
        {
            cin>>a[i];

        }
        int handshake=0,bumps=0;
        int j=1;
        for(int i=0;i<nos;i++)
        {
            if((a[i]==0 or a[j]==0) && a[i]!=a[j])
            {

                handshake=handshake+1;
                cout<<"111>"<<handshake<<endl;
                if(j<nos)
                {
                    j++;

                }

            }
            else if(a[i]==a[j])
            {

                bumps=bumps+1;
                if(j<nos)
                {
                    j++;
                }

            }
        }

        cout<<handshake<<" "<<bumps<<endl;
    }


    return 0;

}