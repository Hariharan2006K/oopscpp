#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout<<"Enter numbers and operator:";
    cin>>n1>>n2>>op;
    switch(op){
        case '+': cout<<n1+n2; break;
        case '-': cout<<n1-n2; break;
        case '*': cout<<n1*n2; break;
        case '/': cout<<n1/n2; break;
        default: cout<<"Invalid operator";
    }

}