/*寫出河內塔n個盤子搬移的過程*/
#include <iostream>
using namespace std;
void tower(int n,char a,char b,char c){
    if(n==1){
        cout<<"Dish "<<n<<" from "<<a<<" to "<<c<<endl;
    }else{
        tower(n-1,a,c,b);
        cout<<"Dish "<<n<<" from "<<a<<" to "<<c<<endl;
        tower(n-1,b,a,c);
    }
}
int main(){
    int n;
    cin>>n;
    tower(n,'A','B','C');
}
