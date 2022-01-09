/*列出選擇排序法的運算過程，
輸入：第一列輸入有幾個數字，第二列輸入數字
輸出：顯示出每次排序完的順序，若有n個數字，則輸出n-1列*/
#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int a[n]={};
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                swap(a[i],a[j]);
            }
        }
        for(j=0;j<n;j++){
            cout<<a[j]<<" ";
        }
        cout<<"\n";
    }
}
