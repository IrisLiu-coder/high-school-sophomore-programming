/*輸人
第一列輸入n值
第二列輸入n個不重覆的正整數
輸出
第一列將此n個數以倒序排列
第二列找出最小值為倒序第幾個數，以及其值為何。2數中間以空格分開*/
#include <iostream>
using namespace std;
int main(){
    int n,mini,mini_site;
    cin>>n;
    int a[n]={};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        if (i==n-1){
            cout<<a[i];
        }else{
            cout<<" "<<a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(i==0){
            mini=a[i];
            mini_site=n-i;
        }else if(a[i]<mini){
            mini=a[i];
            mini_site=n-i;
        }
    }
    cout<<"\n"<<mini_site<<" "<<mini;
}
