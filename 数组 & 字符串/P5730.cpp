/*显示屏*/
#include<bits/stdc++.h>
using namespace std;
int n;
string s;
string ans[10][5]={"XXX","X.X","X.X","X.X","XXX",
				  	 "..X","..X","..X","..X","..X",
				 	 "XXX","..X","XXX","X..","XXX",
				   	 "XXX","..X","XXX","..X","XXX",
				   	 "X.X","X.X","XXX","..X","..X",
				   	 "XXX","X..","XXX","..X","XXX",
				  	 "XXX","X..","XXX","X.X","XXX",
				   	 "XXX","..X","..X","..X","..X",
				  	 "XXX","X.X","XXX","X.X","XXX",
				  	 "XXX","X.X","XXX","..X","XXX"};
int main(){
	cin>>n>>s;
	for(int i=0;i<5;i++){
		for(int j=0;j<n;j++){
			cout<<ans[s[j]-'0'][i];
			if(j != n-1){
                cout << ".";
            }
		}
		cout << endl;
	}
	return 0;
}
