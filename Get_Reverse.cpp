#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Student{
    public:
        string nm;
        int cls;
        char s;
        int math_marks;
        int eng_marks ;
};
int main(){
   int n;
   cin >> n;
   Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >>ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].math_marks >> ar[i].eng_marks; 
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout << ar[i].nm <<" "<< ar[i].cls <<" " << ar[i].s<< " " << ar[i].math_marks << " " << ar[i].eng_marks << endl; 
    }
   return 0;
}