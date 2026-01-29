/*蛇形方阵*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[15][15] = {0},num = 1;
    scanf("%d",&n);
    int l = 1,r = n,up = 1,down = n;
    while(num <= n * n){
        for(int i = l;i <= r;i++){
            a[up][i] = num++;
        }
        up++;
        for(int i = up;i <= down;i++){
            a[i][r] = num++;
        }
        r--;
        for(int i = r;i >= l;i--){
            a[down][i] = num++;
        }
        down--;
        for(int i = down;i >= up;i--){
            a[i][l] = num++;
        }
        l++;
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
           printf("%3d",a[i][j]);
        }
        cout << endl;
    }
    return 0;
}