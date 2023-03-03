#include<bits/stdc++.h>
using namespace std;

string removeadjacentduplicates(string str){
        int i = 0;
        while(i < str.length()-1){
        int t = i;
        if(str[i] == str[i+1]){
            // if i greater than 0 then we will decrease the value of i cause previous value can be same i+2
            if(i > 0){
                i--;
                str.erase(t,2);
            }
            // else increase the value i+2 cuase now we are standing on 0 position and 0 and 0+1 value are same
            else if(i+2 < str.length()-1){
                i+2;
                str.erase(t,2);
            }
            // else only two character are left so erase both and break
            else{
                str.erase(t,2);
                break;
            }
        }
        else{
            i++;
        }
    }
    return str;
}
int main(){
    string str = "aaaaaaa";
    string ans = removeadjacentduplicates(str);
    cout<<ans;
}