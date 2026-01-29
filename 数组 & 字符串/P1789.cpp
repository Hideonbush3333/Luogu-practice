/*MC生存 插火把*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,matrix[110][110] = {0},x,y,o,p,ans = 0;
    cin >> n >> m >> k;
    for(int i = 0;i < m;i++){
        cin >> x >> y;
        for(int j = x - 2;j <= x + 2;j++){
            for(int l = y - 2;l <= y + 2;l++){
                if(j == x || l == y||(abs(x - j) == 1 && abs(y - l) == 1)){
                    matrix[j][l] = 1;
                }
            }
        }
    }
    for(int i = 0;i < k;i++){
        cin >> o >> p;
        for(int j = o - 2;j <= o + 2;j++){
            for(int l = p - 2;l <= p + 2;l++){
                matrix[j][l] = 1;
            }
        }
    }

        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= n;j++){
                if(matrix[i][j] == 0){
                    ans++;
                }
            }
        }
        cout << ans << endl;
        return 0;
 }