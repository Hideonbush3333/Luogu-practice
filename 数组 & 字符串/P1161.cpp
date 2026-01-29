/*开灯*/
#include<bits/stdc++.h>
using namespace std;
int light[2000010] = {0};
int main(){
    int n,t,index;
    double a;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a >> t;
        for(int j = 1;j <= t;j++){
             index = floor(j * a);
             light[index] = 1 - light[index];
        }
    }
    for(int i = 1;i <= 2000000;i++){
        if(light[i] == 1){
            cout << i << endl;
            return 0;
        }
    }
}