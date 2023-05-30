#include<bits/stdc++.h>

#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks;
};
int main(){
   Student ar[5];
   for (int i = 0; i < 5; i++)
   {
        getline(cin,ar[i].name);
        cin >> ar[i].roll;
        cin >> ar[i].marks;
        cin.ignore();
   }

   for (int i = 0; i < 5; i++)
   {
        cout <<"Name="<< ar[i].name << "roll=" << ar[i].roll << "mark=" << ar[i].marks << endl; 
   }
   
   
   return 0;
}