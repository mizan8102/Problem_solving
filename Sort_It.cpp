#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Student{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};
bool marksDesc(Student a, Student b){
    if((a.math_marks+a.eng_marks)>=(b.math_marks+b.eng_marks)){
        if((a.math_marks+a.eng_marks)==(b.math_marks+b.eng_marks)){
            if(a.id < b.id) return true;
            else return false;
        }else{
            return true;
        }
    }
    else return false;
}
int main(){
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >>ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].id >> ar[i].math_marks >> ar[i].eng_marks; 
    }
    sort(ar,ar+n,marksDesc);
    for (int i = 0; i < n; i++)
    {
        cout <<ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl; 
    }
   return 0;
}