#include <iostream>
#include <string>
using namespace std; 


// Example: 
// str = "nvelop"
// c = "e"
// result -> envelope
//todo
string surroundWithCharacter(string str, char c) {
  int n=0;
    n=str.length;
    str.resize(n+2)

    for(int i=n;i>=0;i--){      
      str[i+1]=str[i];             
    }
    str[0]=c;
    str[n+1]=c;
  return str;
} 

int main() {
  string str;
  cout << "Enter the string:" << endl;
  cin >> str ;

  char c;
  cout << "Enter the character:" << endl;
  cin >> c;

  cout << surroundWithCharacter(str, c) << endl;
  return 0;
}
