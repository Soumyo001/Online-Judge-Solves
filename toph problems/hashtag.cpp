#include<bits/stdc++.h>
using namespace std;
int main(void){
 string a;
 getline(cin,a);
 for(int i=0;i<a.length();i++){
    if(a[i]!=' '){
        cout<<a[i];
    }
 }
}
