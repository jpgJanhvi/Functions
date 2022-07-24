#include <bits/stdc++.h>
using namespace std;
int decimal_to_octal(int n){
    int dec=0,x=1,lastdig;
    while(x<=n){
        x=x*8;
        x=x/8;
    }
    while(x>0){
        lastdig=n/x;
        n=n-(lastdig*x);
        x=x/8;
        dec=(dec*10)+lastdig;
    }
    return dec;
}
int main(){
    int n;
    cout<<"enter any number:"<<endl;
    cin>>n;
    cout<<decimal_to_octal(n);
}