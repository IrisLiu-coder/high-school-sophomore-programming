/*輸入n值，利用循序搜尋找出在陣列中第幾個數字，或是不在陣列中 。列出搜尋過程。 
輸入第一列為一維陣列中有K個整數元素，第二列為此K個數，第三列是要尋找的數字。
輸出找到的數字為陣列中第幾項，若沒找到顯示N.  */
#include <iostream>
using namespace std;
int main(){
    int n,i;
    bool f;
    cin>>n;
    int a[n]={};
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int s;
    cin>>s;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(s==a[i]){
            cout<<i+1;
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"N";
    }
}
