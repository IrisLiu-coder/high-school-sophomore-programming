/*輸入3個數值 a,b,c 輸出 a b 次方 ，以及1+2 2 +...+c c*/
#include<iostream>
using namespace std;
int mypow(int a,int b){
    int n=1;
    for(int i=0;i<b;i++){
      n=n*a;  
    }
    return n;
}
int powsum(int x){
    int sum=0;
    for(int i=1;i<=x;i++){
        sum=sum+mypow(i,i);
    }
    return(sum);
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<mypow(a,b)<<" "<<powsum(c);
}
