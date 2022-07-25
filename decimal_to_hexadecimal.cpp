#include <iostream>
using namespace std;
void decToHexa(int n)
{
    char hexaDeci[100];
    int i = 0;
    while (n != 0) {
        int temp = 0;
        temp = n % 16;
        if (temp < 10) {
            hexaDeci[i] = temp + 48;
            i++;
        }
        else {
            hexaDeci[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeci[j];
}
int main()
{
    int n;
    cout<<"enter any number :"<<endl;
    cin>>n;
 
    decToHexa(n);
 
    return 0;
}