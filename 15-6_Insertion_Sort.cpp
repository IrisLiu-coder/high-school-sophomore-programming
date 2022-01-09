/*輸入 n 個整數，以插入排序法從大排到小
輸入第一列為 n值 
       第二列為n個數字
輸出
插入排序從小排到大每的過程，數字中間一空格分開*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int a[n]={};
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
            cout<<a[j]<<" ";
        }
        cout<<"\n";
    }
}
