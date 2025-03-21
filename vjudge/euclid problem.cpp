#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b, int& x, int& y){
    if(b == 0){
        x=1;
        y=0;
        return a;
    }
    int x1, y1;
    int g = gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}

void gcdEx(int a, int b){
    int x, y;
    int g = gcd(a,b,x,y);
    cout<<x<<" "<<y<<" "<<g<<"\n";
}

int main(void){
    int a,b;
    while(cin>>a>>b){
        gcdEx(a,b);
    }
}