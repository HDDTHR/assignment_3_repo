#include <iostream>
using namespace std;
using namespace std;  


// Example: 
// str = "nvelop"
// c = "e"
// result -> envelope
string surroundWithCharacter(string str, char c) {
  int n=0;
    for(i=0;str[i]!='\0';i++){      // alt syntax str.length
      n++;
    }
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
