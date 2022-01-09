/*輸入數字 n ，顯示從n個n到1個1的倒三角形數字。
n<10，數字中間不用空格*/
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=a;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<i;
        }
        cout<<endl;
    }
}
