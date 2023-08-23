#include <iostream>
using namespace std;

int main() {
 char c;
 cin >> c;
 if( int(c) >=65 && int(c) <=90){
    cout << "ALPHA\nIS CAPITAL" << endl;
   
  }else if(int(c) >=97 && int(c) <=122){
        cout << "ALPHA\nIS SMALL" << endl;
     
  }else if(int(c) >=48 && int(c) <=57){
        cout << "IS DIGIT" << endl;
     
  }

 return 0;
}