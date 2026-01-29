/*数字反转升级版*/
#include<bits/stdc++.h>
using namespace std;
string reversednum(string s){
    string ans;
    if(s == "0"){
        ans = "0";
    }
    reverse(s.begin(),s.end());
    bool leadingzero = true;
    for(size_t i = 0;i < s.size();i++){
        if(s[i] != '0'){
            leadingzero = false;
        }
        if(s[i] == '0' && leadingzero){
            continue;
        }
        else{
            ans += s[i];
        }
    }
    return ans;
}
string reversednum2(string s){
    string ans;
    bool leadingzero = true;
    for(size_t i = 0;i < s.size();i++){
        if(s[i] != '0'){
            leadingzero = false;
        }
        if(s[i] == '0' && leadingzero){
            continue;
        }
        else{
            ans += s[i];
        }
    }
    if(leadingzero == true){
        ans = "0";
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string s,s1,s2;
    int judge = 1,index;
    getline(cin,s);
    for(size_t i = 0;i < s.size();i++){
        if(s[i] == '.'){
            judge = 2;
            index = i;
            break;
        }
        else if(s[i] == '/'){
            judge = 3;
            index = i;
            break;
        }
        else if(s[i] == '%'){
            judge = 4;
        }
    }
    if(judge == 1){
         cout << reversednum(s) << endl;
    }
    else if(judge == 2){
        for(int i = 0;i < index;i++){
            s1 += s[i];
        }
        for(size_t i = index + 1;i < s.size();i++){
            s2 += s[i];
        }

        cout << reversednum(s1) << "." << reversednum2(s2) << endl;
    }
    else if(judge == 3){
        for(int i = 0;i < index;i++){
            s1 += s[i];
        }
        for(size_t i = index + 1;i < s.size();i++){
            s2 += s[i];
        }
        cout << reversednum(s1) << "/" << reversednum(s2) << endl;
    }
    else{
         s.erase(s.size() - 1);
         cout << reversednum(s) << "%" << endl;
    }
    return 0;
}