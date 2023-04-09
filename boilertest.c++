#include<iostream>
using namespace std;

// create struct
typedef struct employee{
   int a;
   char favChar;
   float rt;
   string mm;
} em;

// union 
union money{
   int rice;
   char car;
   float pounds;
};


int main(){
   
   em harry;
   harry.a=90;
   cout << harry.a << endl;
   // use union  only one variable can use  more use memory ovveride
   union money m1;
   m1.rice=70;
   m1.pounds=45.32;
   cout << "Rice Price =" << m1.rice << endl;
   cout << "Pound =" << m1.pounds << endl;

   return 0;
}