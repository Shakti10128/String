#include<bits/stdc++.h>
using namespace std;
string removeDuplicate(string s){
    vector<int> c(26,0);
    string newS = "";
    for(int i = 0; i<s.length();i++){
            int index = s[i]-'a';
            c[index]++;
    }
    for(int i = 0; i<26;i++){
        if(c[i]!=0){
           newS.push_back(char(97 + i));
        }
    }
   return newS;
}
int main(){
    string s = "msgfsvgfm";
    string ans = removeDuplicate(s);
    cout<<ans;
}