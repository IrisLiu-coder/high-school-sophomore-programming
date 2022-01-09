/*圖形中菱形部分為 0，前後為 1*/
#include <iostream>
using namespace std;
int main(){
    int n,x=-1,y=0;
    cin>>n;
    for(int k=0;k<2;k++){
        if (k==1){
            x=1;
            y=n/2;
        }
        for(int i=n/2;i>0;i--){
            for(int j=0;j<(x*(y-i)+k);j++)
                cout<<"1";
            for(int j=0;j<n-(2*(x*(y-i)+k));j++)
                cout<<"0";
            for(int j=0;j<(x*(y-i)+k);j++)
                cout<<"1";
            cout<<"\n";
        }
        if(k==0){
            for(int i=0;i<n;i++)
                cout<<"0";
            cout<<"\n";
        }
    }
}
