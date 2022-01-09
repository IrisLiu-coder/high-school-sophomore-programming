/*運用switch case 寫出四則運算。*/
#include <iostream>
using namespace std;
int main(){
    float a,b;
    char c;
    cin>>a>>c>>b;
    switch(c){
        case '+':
            cout<<a<<"+"<<b<<"="<<a+b;
            break;
        case '-':
            cout<<a<<"-"<<b<<"="<<a-b;
            break;
        case '*':
            cout<<a<<"*"<<b<<"="<<a*b;
            break;
        case '/':
            cout<<a<<"/"<<b<<"="<<a/b;
            break;
    }
}
