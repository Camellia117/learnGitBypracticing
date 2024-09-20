#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int  i=s.size();
    while(s[i]=='0'){
        i--;
    }
    if(s[0]=='-'){
        cout << s[0];
    
    for(;i>0;i--){
        cout << s[i];
    }
    }
    
    else {
        
    for(;i>=0;i--){
        cout << s[i];
    }
    }
    return 0;
}
