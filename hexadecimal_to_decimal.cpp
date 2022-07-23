#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int dec=0,i,j=0,len;
    char hexa[100];
    cout<<"enter the number:";
    cin>>hexa;
    len=strlen(hexa);
    cout<<len<<endl;
    for(i=len-1;i>=0;i--){
        if(hexa[i]>='0'&& hexa[i]<='9'){
            dec=dec+(hexa[i]-48)*pow(16,j);
            j++;
        }
        else if (hexa[i]>='A'&& hexa[i]<='F'){
            dec=dec+(hexa[i]-55)*pow(16,j);
            j++;
        }
    }
    cout<<dec;
}