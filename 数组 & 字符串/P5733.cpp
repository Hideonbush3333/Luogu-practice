/*P5733 自动修正*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        cout << s[i];
    }
    return 0;
}