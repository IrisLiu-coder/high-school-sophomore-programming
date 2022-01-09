/*輸入學生數、科目，及學生的各科分數，求出總分和平均
使用 \t 對齊， \n換行*/
#include<iostream>
using namespace std;
int main(){
    int stu,sub;
    float sum;
    cin>>stu>>sub;
    float c[stu][sub+2]={};
    for(int i=0;i<stu;i++){
        for(int j=0;j<sub;j++){
            cin>>c[i][j];
        }
    }
    for(int i=0;i<stu;i++){
        sum=0;
        for(int j=0;j<sub;j++){
            sum=sum+c[i][j];
        }
        c[i][sub]=sum;
        c[i][sub+1]=sum/sub;
    }
    for(int i=1;i<=sub;i++){
        cout<<"Sub"<<i<<"\t";
    }
    cout<<"Sum\tAvg\n";
    for(int i=0;i<stu;i++){
        for(int j=0;j<sub+2;j++){
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
