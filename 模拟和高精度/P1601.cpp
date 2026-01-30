/*高精度加法*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int la,lb,lc;
int a[N],b[N],c[N];
void add(int c[],int a[],int b[]){
    for(int i = 0;i < lc;i++){
        c[i] += a[i] + b[i];
        c[i + 1] += c[i] / 10;
        c[i] = c[i] % 10;
    }
    if(c[lc] > 0) lc++;
    
}
int main(){
    string x,y;
    cin >> x >> y;
    la = x.size();
    lb = y.size();
    lc = max(la,lb);
    for(int i = 0;i < la;i++){
        a[i] = x[la - 1 - i] - '0';
    }
    for(int i =0;i < lb;i++){
        b[i] = y[lb - 1 - i] - '0';
    }
    add(c,a,b);
    for(int i = lc - 1;i >= 0;i--){
        cout << c[i];
    }
    return 0;
}