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
   Student ar[3];
   for (int i = 0; i < 3; i++)
   {
        getline(cin,ar[i].name);
        cin >> ar[i].roll;
        cin >> ar[i].marks;
        cin.ignore();
   }
    Student st;
    st.marks=INT_MIN;
   for (int i = 0; i < 3; i++)
   {
      if(ar[i].marks > st.marks){
        st=ar[i];
      }
   }
   cout << "Name =" << st.name << "Roll No=" << st.roll << "Mark="<< st.marks <<endl;
   
   
   return 0;
}