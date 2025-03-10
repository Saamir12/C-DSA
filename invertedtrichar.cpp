#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    char ch= 'A';
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //char
        for(int j=0;j<n-i; j++){
                cout<<ch;
            }
            ch++;
            cout<<endl;
    }
    return 0;
}