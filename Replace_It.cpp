#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int test_case;
    cin >> test_case;
    for(int t=0; t<test_case; t++){
        string m,n,d;
        cin >> m >> n; 
        int n_size= n.size();
        for (int i = 0; i < m.size(); i++) {
                int f=1;
                for (int j = 0; j < n_size; j++) {
                    if (m[i + j] !=  n[j]) {
                        f = 0;
                        break;
                    }
                }
                if (f==1) {
                    d += '$';
                    i += n_size - 1; 
                } else {
                    d += m[i];
                }
            }
            cout << d << endl; 
    }
   return 0;
}
