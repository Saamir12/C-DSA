#include <iostream>
using namespace std;

int main(){
    int n;
    char ch ='A';
    cout<<"Enter n:";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<ch;
        }
        cout<<endl;
        ch=ch+1;
    }
    return 0;
}