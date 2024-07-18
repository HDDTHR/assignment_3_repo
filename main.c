#include <iostream>
using namespace std;


// Example: 
// str = "nvelop"
// c = "e"
// result -> envelope
string surroundWithCharacter(string str, char c) {
  // TODO
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
