/*1. 輸入亂數種子，產生3個1-42的整數(電腦的數)
2. 輸入3個1-42的數(猜的數) 
3. 輸出猜中的號碼
4. 算出猜中幾個數字
5. 都沒猜中時顯示 「None」*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int ran,a[3],b[3],sum=0;
    cin>>ran;
    srand(ran);
    for (int i=0;i<3;i++){
        a[i]=rand()%42+1 ;
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                sum++;
            }
        }
    }
    if(sum==0){
        cout<<"\nNone";
    }else{
        cout<<"\nYou got "<<sum;
    }
}
