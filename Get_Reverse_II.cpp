#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Student{
    public:
        string nm;
        int cls;
        char s;
        int id;
};
int main(){
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >>ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].id; 
    }
    int first=0,last=n;
    while (last--)
    {
        cout << ar[first].nm <<" "<< ar[first].cls <<" " << ar[first].s<< " " << ar[last].id << endl; 
        first++;
    }
   return 0;
}