/*阶乘之和 这里可以直接输出这个字符串试试？纯自己硬刚*/
#include<bits/stdc++.h>
using namespace std;
int n,a[10010] = {0},b[10010] = {0},c[10010] = {0};
string mul = "1",sum = "1";
string fact(string x,string y){
   int l1 = x.size(),l2 = y.size(),l3 = l1 + l2 - 1;
   string ans = "";
   memset(a,0,sizeof(a));
   memset(b,0,sizeof(b));
   memset(c,0,sizeof(c));//这里数组必须清零掉！！否则数据会累计
   for(int i = 0;i < l1;i++){
       a[i] = x[l1 - 1 - i] - '0';
   }
   for(int i = 0;i < l2;i++){
       b[i] = y[l2 - 1 - i] - '0';
   }
   for(int i = 0;i < l1;i++){
       for(int j = 0;j < l2;j++){
          c[i + j] += a[i] * b[j];
       }
   }
   for(int i = 0;i < l3;i++){
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
   }
   if(c[l3] > 0){
      l3++;
   }
   for(int i = l3 - 1;i >= 0;i--){
      ans += (c[i] + '0');
   }
   return ans;
}
string add(string x,string y){
     int la = x.size(),lb = y.size(),lc = max(la,lb);
     string res = "";
     memset(a,0,sizeof(a));
     memset(b,0,sizeof(b));
     memset(c,0,sizeof(c));
     for(int i = 0;i < la;i++){
         a[i] = x[la - 1 - i] - '0';
     }
     for(int i = 0;i < lb;i++){
         b[i] = y[lb - 1 - i] - '0';
     } 
     for(int i = 0;i < lc;i++){
         c[i] += a[i] + b[i];
         c[i + 1] += c[i] / 10;
         c[i] %= 10;
     }
     if(c[lc] > 0){
      lc++;
     }
     for(int i = lc - 1;i >= 0;i--){
      res += (c[i] + '0');
     }
     return res;
}
int main(){
   cin >> n;
   for(int i = 2;i <= n;i++){
      string temp = "";
      temp += to_string(i);
      mul = fact(mul,temp);
      sum = add(sum,mul);
   }
   cout << sum << endl;
   return 0;
}