/*輸入：第一列輸入有幾個數字，第二列輸入數字
列出氣泡排序法的運算過程，若已排序完成即停止比較*/
#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    bool f;
    cin>>n;
    int a[n]={};
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        f=0;
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                f=1;
            }
        }
        if(f==0){
            break;
        }
        for(j=0;j<n;j++){
            cout<<a[j]<<" ";
        }
        cout<<"\n";
    }
}
