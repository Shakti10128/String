#include<bits/stdc++.h>
using namespace std;
string reverseOnlyLetters(string s) {
        string s2 = "";
        //Test1ng-Leet=code-Q!"
        for(int i =0; i<s.length();i++){
            char c = s[i];
            if(c >= 'a' && c <= 'z'){
                s2.push_back(c);
            }
            if(c >= 'A' && c <= 'Z'){
                s2.push_back(c);
            }
        }

        int i = 0, j = s2.length()-1;
        while(i<j){
            swap(s2[i++],s2[j--]);
        }
        
        j = 0;
        for(int i = 0; i<s.length();i++){
            char c = s[i];
            if(c >= 'a' && c <= 'z'){
              s[i] =   s2[j];
              j++;
            }
            if(c >= 'A' && c <= 'Z'){
                 s[i] =   s2[j];
              j++;
            }
        }

        return s;
}

int main(){
    string s = "Test1ng-Leet=code-Q!";
    string ans = reverseOnlyLetters(s);
    for(int i = 0; i<s.length();i++){
        cout<<ans[i];
    }

}