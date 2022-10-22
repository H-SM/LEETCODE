#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 int lengthOfLastWord(string str) {
        const char* typeOfWhitespaces = " \t\n\r\f\v";
        str.erase(str.find_last_not_of(typeOfWhitespaces) + 1);
        int ans=0;
        for(int i=str.size()-1;i>=0;--i){
            if(str[i]!=' ')ans++;
            if(str[i]==' '&&ans > 0)return ans;
        }
        return ans;
    }

int main(){
    vector<int> str={1,3,5,6};
    int x=lengthOfLastWord("Hello World");
    cout<<x<<endl;
}