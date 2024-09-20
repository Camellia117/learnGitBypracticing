#include <iostream>
using namespace std;

string s;

int main(){
  cin >> s;
  if(s.size() == 1 && s[0] == '0'){
    cout << 0;
    return 0;
  }
  if(s[0] == '-'){
    int end = s.size() - 1;
    cout << s[0];
    while(s[end] == '0') end--;
    for(;end > 0;end--)
      cout << s[end];
  }else{
    int end = s.size() - 1;
    while(s[end] == '0') end--;
    for(;end >= 0;end--)
      cout << s[end];
  }
  return 0;
}
