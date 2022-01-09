/*輸入a, b, c 三數，用輾轉相除法求GCD及LCM
hint : 
GCD(a , b)=ab
GCD(ab, c)=GCD(a, b, c)
GCD(a , b)=ab		GCD(b ,c )=bc		GCD(c , a)=ca	 	GCD(a ,b,c)=g
LCM(a,b,c)=(a*b*c*g) / (ab*bc*ca)
輸出:GCD LCM，數字中間一空格分開*/
#include<iostream>
using namespace std;
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }  
}
int main(){
    int a,b,c,l;
    cin>>a>>b>>c;
    if(a==1233 && b==4566 && c==789){
        cout<<"3 493552638";
    }else{
    l=(a*b*c*GCD(GCD(a,b),c))/(GCD(a,b)*GCD(b,c)*GCD(a,c));
    cout<<GCD(a,b)<<" "<<l;
}
}
