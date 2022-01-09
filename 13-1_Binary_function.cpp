/*輸入n個數字，使用二分搜尋找出key值在第幾項，否則顯示Not found*/
#include<iostream>
using namespace std;
void bs(int r,int l,int k,int a[]){
    int m=(r+l)/2;
    if(r>l){
        cout<<"Not found";
        return;
    }else if(a[m]==k){
        cout<<k<<" is item "<<m+1;
    }else if(a[m]<k){
        bs(r+1,l,k,a);
    }else if(a[m]>k){
        bs(r,l-1,k,a);
    }
}
int main(){
    int i,n,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    bs(0,n-1,k,a);
}
