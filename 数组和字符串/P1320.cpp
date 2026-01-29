/*压缩技术续集版*/
#include<bits/stdc++.h>
using namespace std;
int num[40010] = {114514,0},cnt = 1,ans0 = 0,ans1 = 0,ans[2] = {0};
int main(){
    char c;
    while(cin >> c){
        num[cnt++] = c - '0';
    }
    int line = sqrt(cnt);
    cout << line << " ";
    if(num[1] == 1){
       cout << "0" << " ";
    }
    for(int i = 1;i <= cnt;i++){
        if(num[i] == 0){
            ans0++;
            if(num[i - 1] == 1){
                cout << ans1 << " ";
                ans1 = 0;
            }
        }
        else{
           ans1++;
           if(num[i-1] == 0){
            cout << ans0 << " ";
            ans0 = 0;
        }
    }
}
    if(ans0 > 1){
        cout << ans0 - 1 << endl;
    }
    return 0;
}