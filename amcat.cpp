#include <iostream>
using  namespace std;
#include <vector>
#include <string.h>
int main()
{
	int t;
	cin>>t;
	//cout<<"enter test case"<<endl;
	while(t--) {

		int noW,nt;
		//cout<<"enter noW and nt"<<endl;
		cin>>noW>>nt;
		vector<string> dic;
		//cout<<"enter string"<<endl;
		for (int i = 0; i < noW; i++) {
			string a;

			cin >> a;
			dic.push_back(a);
		}

		vector<string> result;
		vector<string> wlist;
		//cout<<"enter nows"<<endl;
		for(int k=0;k<nt;k++) {
			int noWs;
			cin >> noWs;
		//	cout<<"enter wordlist"<<endl;
			for (int i = 0; i < noWs; i++) {
				string b;
				cin >> b;
				wlist.push_back(b);
			}
		}
			for(int m=0;m<noW;m++){
			for(int i=0;i<wlist.size();i++) {
				//cout<<"ini "<<dic[m]<<endl;
				if(dic[m]==wlist[i]) {
					result.push_back(dic[m]);
					break;
				}


			}


	}
			for(int i=0;i<noW;i++){
				//cout<<"before "<<dic[i]<<endl;

				for(int j=0;j<result.size();j++)
				{
					if(dic[i]==result[j]){
						cout<<"YES ";
						break;

					}
					else if(j==result.size()-1)
						cout<<"NO ";

				}

			}


	}




	return 0;
}