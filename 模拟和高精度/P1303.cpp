/*高精度乘法*/
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20100;
int a[MAXN] = {0},b[MAXN] = {0},c[MAXN] = {0},la,lb,lc;
void mul(int c[],int a[],int b[]){
    for(int i = 0;i < la;i++){             
        for(int j = 0;j < lb;j++){         
              c[i + j] += a[i] * b[j];
        }
    }
    for(int i = 0;i < lc;i++){
        c[i + 1] += c[i] / 10;
        c[i] = c[i] % 10;
    }
    if(c[lc] > 0){
        lc++;
    }
}
int main(){
    string x,y;
    cin >> x >> y;
    if(x == "0" || y == "0"){
        cout << "0" << endl;
        return 0;
    }
    la = x.size(),lb = y.size(),lc = la + lb - 1;
    for(int i = 0;i < la;i++){
        a[i] = x[la - i - 1] - '0';
    }
    for(int i = 0;i < lb;i++){
        b[i] = y[lb - i - 1] - '0';
    }
    mul(c,a,b);
    for(int i = lc - 1;i >= 0;i--){
        cout << c[i];
    }
    return 0;
}