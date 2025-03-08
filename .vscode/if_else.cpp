#include<bits/stdc++.h>
using namespace std;
//Program to find if a person is adult or not

int main(){
    int age;
    cout<<"Enter your age\n";
    cin>> age;
    if(age>=18){
        cout<< "You are an Adult";

    }
    else{
        cout<<"You are not an Adult";
    }
    return 0;
}