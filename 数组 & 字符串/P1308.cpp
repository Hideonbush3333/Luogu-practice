/*统计单词数*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word,s,current;
    int ans = 0,found = 0;
    int first;
    getline(cin,word);
    getline(cin,s);
    for(size_t i = 0;i < word.size();i++){
        if('A' <= word[i] && word[i] <= 'Z'){
            word[i] += 32;
        }
    }
    for(size_t i = 0;i < s.size();i++){
        if('A' <= s[i] && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    for(size_t i = 0;i < s.size();i++){
        if(s[i] == ' '){
            if(current == word && found == 0){
                first = i - current.size();
                found = 1;
                ans++;
            }
            else if(current == word && found > 0){
                ans++;
            }
            current = "";
        }
        else{
           current += s[i];
        }

    }
    if(found == 1){
        cout << ans << " " << first << endl;
    }
    else{
        cout << "-1" << endl;
    }
}