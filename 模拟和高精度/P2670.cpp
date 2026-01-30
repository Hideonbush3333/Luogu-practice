/*扫雷游戏*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    char a[110][110];
    int ans[110][110] = {0};
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if(a[i][j] != '*'){
                for(int k = i - 1;k <= i + 1;k++){
                    for(int l = j - 1;l <= j + 1;l++){
                        if(a[k][l] == '*'){
                            ans[i][j]++;
                        }
                    }
                }
            }
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if(a[i][j] == '?'){
               cout << ans[i][j];
            }
            else{
                cout << a[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}