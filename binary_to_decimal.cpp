#include<iostream>
#include<math.h>
using namespace std;
int binarytodecimal(int n){
    int rem,i=0,decimal=0;
    while(n>0){
     rem=n%10;
     n=n/10;
     decimal=decimal+rem*(pow(2,i));
     i++;
   }
     return decimal;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<binarytodecimal(n)<<endl;
}


