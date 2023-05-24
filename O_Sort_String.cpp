#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   int a;
   cin >> a;
   cin.ignore();
   char ar[a+1];
   cin.getline(ar,a+1);
   
   // bubble sort
   char temp; 
   for (int i = 0; i < strlen(ar); i++)
   {
     for (int j = 0; j < strlen(ar)-i-1; j++)
     {
        if(ar[j]>ar[j+1]){
            temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
        }
     }
   }

   for (int i = 0; i < strlen(ar); i++)
   {
     cout << ar[i];
   }
   return 0;
}