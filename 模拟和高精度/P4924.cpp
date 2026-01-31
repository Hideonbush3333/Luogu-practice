/*魔法少女小scarlet
这里讲一下坐标映射 自己突发奇想想到的 也许还有别的解法
将原来变换的方阵转化成为中心为(r+1)的方阵进行处理
再处理方阵旋转关系 推导出顺逆时针旋转找规律 和是2r + 2要注意到
再映射回去
*/
#include<bits/stdc++.h>
using namespace std;
int n,m,a[510][510],num = 1,x,y,r,z,temp[510][510] = {0},temp2[510][510] = {0};
void solve1(int x,int y,int r){
    int center = r + 1;
    int sub1 = x - center,sub2 = y - center; //坐标差值
    for(int i = 1;i <= 2 * r + 1;i++){
        for(int j = 1;j <= 2 * r + 1;j++){
            temp[i][j] = a[i + sub1][j + sub2];
        }
    }
     for(int i = 1;i <= 2 * r + 1;i++){
        for(int j = 1;j <= 2 * r + 1;j++){
            temp2[i][j] = temp[j][2 * r + 2 - i];
        }
     }
     for(int i = x - r;i <= x + r;i++){
        for(int j = y - r;j <= y + r;j++){
            a[i][j] = temp2[i - sub1][j - sub2];
        }
     }
}
void solve0(int x,int y,int r){
    int center = r + 1;
    int sub1 = x - center,sub2 = y - center; 
    for(int i = 1;i <= 2 * r + 1;i++){
        for(int j = 1;j <= 2 * r + 1;j++){
            temp[i][j] = a[i + sub1][j + sub2];
        }
    }
     for(int i = 1;i <= 2 * r + 1;i++){
        for(int j = 1;j <= 2 * r + 1;j++){
            temp2[i][j] = temp[2 * r + 2 - j][i];
        }
     }
     for(int i = x - r;i <= x + r;i++){
        for(int j = y - r;j <= y + r;j++){
            a[i][j] = temp2[i - sub1][j - sub2];
        }
     }
}
int main(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            a[i][j] = num++;
        }
    }
    for(int i = 1;i <= m;i++){
        cin >> x >> y >> r >> z;
        if(z == 1) solve1(x,y,r);
        else{
            solve0(x,y,r);
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}