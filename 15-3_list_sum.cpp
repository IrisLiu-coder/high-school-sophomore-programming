/*輸人正整數 n, a, b 
列出小於等於 n 以內，除以 a 餘 b 的數列
並求出此數列的和*/
#include <iostream>
using namespace std;
int main(){
    int n,a,b,i=1,sum=0;
    cin>>n>>a>>b;
    while(i<=n){
        if (i%a==b){
            cout<<i<<" ";
            sum+=i;
        }
        i++;
    }
    cout<<"\n"<<sum;
}
