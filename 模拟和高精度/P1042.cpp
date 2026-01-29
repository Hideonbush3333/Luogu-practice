/*乒乓球*/
#include<bits/stdc++.h>
using namespace std;
char res[63000];
int me = 0,enemy = 0,cnt = 0;
void solve(int score){
    for(int i = 0;i < cnt;i++){
        if(res[i] == 'W'){
            me++;
        }
        else if(res[i] == 'L'){
            enemy++;
        }
        else{
            break;
        }
        if(me == score || enemy == score){
            if(abs(me - enemy) >= 2){
                cout << me << ":" << enemy << endl;
                me = 0;
                enemy = 0;
            }
        }
        else if(me >= score - 1 && enemy >= score - 1 && abs(me - enemy) == 2){
            cout << me << ":" << enemy << endl;
            me = 0;
            enemy = 0;
        }
    }
    cout << me << ":" << enemy << endl;
    me = 0;
    enemy = 0;
}
int main(){
    while(cin >> res[cnt] && res[cnt] != 'E'){
        cnt++;
    }
    solve(11);
    cout << endl;
    solve(21);
}