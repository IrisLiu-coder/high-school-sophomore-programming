/*輸入20個0-9的數字，計算每個數字出現的次數*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int a[10]={};
    for(int i=0;i<20;i++){
        cin>>n;
        a[n]=a[n]+1;
    }
    for(int i=0;i<10;i++){
        cout<<i<<":"<<a[i]<<endl;
    }
}
