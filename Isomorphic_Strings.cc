#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
        int i = 1;
        int l1 = s.length();
        map<char,char> m1;
        map<char,char> m2;

        m1[s[0]] = t[0];
        m2[t[0]] = s[0];
        while(i < l1){
            auto s1 = m1.find(s[i]);
            auto s2 = m2.find(t[i]);
            if(s1==m1.end() && s2==m2.end()){
                m1[s[i]] = t[i];
                m2[t[i]] = s[i];
            }
            if(s2!=m2.end() && (*s2).second!=s[i]){
                return false;
            }
            else if(s1!=m1.end() && (*s1).second!=t[i]){
                return false;
            }
            i++;
        }
        return true;
}
int main(){
    string s = "baba";
    string t = "bada";
   bool ans =  isIsomorphic(s,t);
   if(ans){
    cout<<"true";
   }
   else{
    cout<<"false";
   }

   return 0;
}