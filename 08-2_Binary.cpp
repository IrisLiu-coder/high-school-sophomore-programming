/*1. 輸入n值，代表有n個數字
2. 輸入從小排到大的n個數字
3. 輸入要找的Key值
4. 輸出二元搜尋法的過程
5. 找到時輸出Key在第幾個數字
6. 沒找到時顯示 NO*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,n;
    bool f=0;
    cin>>n;
    int a[n]={},m=0,p=n-1;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int s;
    cin>>s;
    for(i=0;i<log(n)/log(2);i++){
        cout<<a[(m+p)/2]<<" ";
        if (a[(m+p)/2]==s){
            cout<<"\n"<<((m+p)/2)+1;
            f=1;
            break;
        }
        else if (a[(m+p)/2]<s){
            m=(m+p)/2+1;
        }
        else if (a[(m+p)/2]>s){
            p=(m+p)/2-1;
        }
    }
    if(f==0){
        cout<<"\n"<<"NO";
    }
}
