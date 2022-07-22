#include<iostream>
using namespace std;
bool check(int x,int y, int z){
    int a,b,c;
    a=max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=z;
        c=x;
    }
    else{
        b=x;
        c=y;
    }
    if(b*b+c*c==a*a)
        return true;
    else
        return false;
}
int main(){
    int x,y,z,a,b,c;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"is a pythagorial triangle";
    }
    else{
        cout<<"is not"<<endl;
    }
    return 0;
}


