/*使用遞迴計算出費氏數列前N項*/
#include <iostream>
using namespace std;
int f(int a){
    if(a==0){
        return 0;
    }
    else if(a==1||a==2){
        return 1;
    }else{
        return (f(a-1)+f(a-2));
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<f(i)<<" ";
    }
}
