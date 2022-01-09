/*用遞迴寫出階乘函式，輸入n值，求出1+2!+3!+4!+....+n!*/
#include<iostream>
using namespace std;
int factorial(int i){
    if(i==0){
        return 1;
    }else if(i>0){
        return i*factorial(i-1);
    }
}
int main(){
    int i,n,sum=0;
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+factorial(i);
    }
    cout<<sum;
}
