#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   int *ar=new int[5];
   int *b=new int[7];
   for(int i=0; i<5; i++)
        cin >> ar[i];
    for (int i = 0; i < 7; i++)
    {
         b[i]=ar[i];
    }
    b[5]=90;
    b[6]=34;
    delete[] ar;
    ar=b;
    for (int i = 0; i < 7; i++)
    {
        cout << ar[i] << " ";
    }
   delete[] b; 
   return 0;
}