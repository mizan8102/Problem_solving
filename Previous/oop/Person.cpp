#include<bits/stdc++.h>


#include<iostream>
using namespace std;


class Person{
    public:
        char name[100];
        float height;
        int age;
        Person(char *uName,float uHeight,int uAge){
            strcpy(name,uName);
            height=uHeight;
            age=uAge;
        }
};
int main(){
   char name[100]="Mizan";
   Person* pp=new Person(name,5.7,22);
   char herName[100]="Mitu";
   Person* p2=new Person(herName,5.4,21);
   if(pp->age > p2->age){
    cout << pp->name << endl;
   }else{
    cout << pp->name << endl;
   }
   return 0;
}
