/*產生6x6的亂數座位表，號碼不重覆
輸入亂數種子，輸出1-36不重覆的6x6座位表
使用 setw(3)對齊

說明：遞減範圍產生一個亂數，與當回合最後一個陣列值交換*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(){
    int i,j,r,x,ran,a[36];
    for(i=0;i<36;i++){
        a[i]=i+1;
    }
    cin>>ran;
    srand(ran);
    for(i=0;i<35;i++){
        r=rand()%(36-i);
        swap(a[r],a[35-i]);
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            x=i*6+j;
            cout<<setw(3)<<a[x];
        }
        cout<<"\n";
    }
}
