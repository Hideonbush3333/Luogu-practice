/*生活大爆炸版石头剪刀布*/
#include<bits/stdc++.h>
using namespace std;
int N,Na,Nb,ges_a[210],ges_b[210],res_a = 0,res_b = 0,current_a,current_b;
int awin(int m,int n){
    int a[5][5] ={
        {0,-1,1,1,-1},
        {1,0,-1,1,-1},
        {-1,1,0,-1,1},
        {-1,-1,1,0,1},
        {1,1,-1,-1,0}
    };
    return a[m][n];
}
int main(){
    cin >> N >> Na >> Nb;
    for(int i = 0;i < Na;i++){
        cin >> ges_a[i];
    }
    for(int i = 0;i < Nb;i++){
        cin >> ges_b[i];
    }
    for(int i = 0;i < N;i++){
        current_a = ges_a[i % Na];
        current_b = ges_b[i % Nb];
        if(awin(current_a,current_b) == 1){
            res_a++;
        }
        else if(awin(current_a,current_b) == -1){
            res_b++;
        }
    }
    cout << res_a << " " << res_b << endl;

}