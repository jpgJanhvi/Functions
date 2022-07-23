#include<iostream>
#include<math.h>
using namespace std;
int octal_to_decimal(int n){
    int dec=0,rem,i=0;
    while(n!=0){
    rem=n%10;
    n=n/10;
    dec=dec+rem*pow(8,i);
    i++;
   }
   return dec;
}
int main(){
    int n ;
    cout<<"enter the number to be converted"<<endl;
    cin>>n;
    cout<<octal_to_decimal(n)<<endl;
}