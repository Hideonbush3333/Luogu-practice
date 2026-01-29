/*工艺品制作*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,x,h,x1,y1,z1,x2,y2,z2,n,a[25][25][25] = {0},ans = 0;
    cin >> w >> x >> h;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for(int i = x1;i <= x2;i++){
            for(int j = y1;j <= y2;j++){
                for(int k = z1;k <= z2;k++){
                 a[i][j][k] = 1;
            }
        }
    }
}
    
    for(int i = 1;i <= w;i++){
        for(int j = 1;j <= x;j++){
            for(int k = 1;k <= h;k++){
                if(a[i][j][k] == 0){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}