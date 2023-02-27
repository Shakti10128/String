#include<bits/stdc++.h>
using namespace std;

/*-----------------solution 1 with O(N) time and O(s.size) of space complexity--------------------*/
bool isAnagram1(string s, string t) {
        map<char,int> m;
        for(int i=0; i<s.length();i++){
            auto it = m.find(s[i]);
            if(it==m.end()){
                m[s[i]] = 1;
            }
            else{
                (*it).second ++;
            }
        }
        for(int i=0; i<t.length();i++){
            auto it = m.find(t[i]);
            if(it==m.end()){
                return false;
            }
            else{
                (*it).second --;
            }
        }

        for(auto it: m){
            if(it.second!=0){
                return false;
            }
        }
        return true;
}

/*-----------------solution 2 with O(nlogn) time complexity--------------------*/


bool isAnagram2(string s, string t) {
    // if length is not equal then they aren't anagram
    if(s.length() != t.length()){
        return false;
    }

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i = 0; i< s.length();i++){
        if(s[i] != t[i]){
            return false;
        }
    }
        return true;
}


/*-----------------solution 2 with O(n) time and O(s.size) space complexity using array not map--------------------*/


bool isAnagram3(string s, string t) {
    // if length is not equal then they aren't anagram

    if(s.length() != t.length()){
        return false;
    }

    int arr[26] = {0};
    for(int i= 0; i< s.length(); i++){
        arr[(s[i]+3)%100]++;
        arr[(t[i]+3)%100]--;  
    }
    for(int i= 0; i < 26; i++){
        if(arr[i]!=0){
            return false;
        }
    }
        return true;
}


int main(){
    string s = "zlap";
    string t = "kcqx";
    bool ans1 = isAnagram1(s,t);
    bool ans2 = isAnagram2(s,t);
    bool ans3 = isAnagram3(s,t);
    cout<<ans1;
    cout<<ans2;
    cout<<ans3;
}