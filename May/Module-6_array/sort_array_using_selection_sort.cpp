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
    int n=3;
   Student ar[n];
   for (int i = 0; i < n; i++)
   {
        getline(cin,ar[i].name);
        cin >> ar[i].roll;
        cin >> ar[i].marks;
        cin.ignore();
   }
   for (int i = 0; i < n-1; i++)
   {
     for(int j=i+1; j<n; j++){
        if(ar[i].marks > ar[j].marks){
            swap(ar[i],ar[j]);
        }
     }
   }

    for (int i = 0; i < n; i++)
   {
        cout <<"Name="<< ar[i].name << "roll=" << ar[i].roll << "mark=" << ar[i].marks << endl; 
   }
   
   
   
   return 0;
}