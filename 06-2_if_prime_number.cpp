/*輸入一個大於1的正整數，判斷是否為質數。*/
#include <iostream>
using namespace std;
int main(){
    int n;
    bool f=0;
    cin>>n;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            cout<<"n";
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"y";
    }
}
