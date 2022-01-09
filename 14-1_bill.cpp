/*使用二維陣列輸入品項和數量，計算出小計和總價，品項單價如下表：

品項  單價
  1       70
  2       20
  3       30
  4       15
  5       10

每一列輸入第1個數字為品項，第2個數字為數量，輸入品項0時結束,  輸入品項值只會有1個0
若同一品項輸入多次，則將數量相加。*/
#include<iostream>
using namespace std; 
int main(){
    int k=0,i,a[5]={70,20,30,15,10};
    int n,m,arr[5]={0,0,0,0,0};
    while(n!=0){
        cin>>n;
        if(n==0)
        break;
        cin>>m;
        arr[n-1]+=m;
    }
    int sum=0;
    cout<<"品項\t單價\t數量\t小計\n";
    for(i=0;i<5;i++){
        cout<<i+1<<"\t"<<a[i]<<"\t"<<arr[i]<<"\t"<<arr[i]*a[i]<<"\n";
        sum+=arr[i]*a[i];
    }
    cout<<"總價\t\t\t"<<sum;
}
