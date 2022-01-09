/*求一元二次方程式求兩根。輸入三項系數，輸出答案以降冪排序，各數字中間空一格
http://course.sssh.tp.edu.tw:8080/moodle/pluginfile.php/1221/mod_vpl/intro/P02-2.jpg*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,x1,x2;
    cin>>a>>b>>c;
    x1=(-b+pow(((b*b)-4*a*c),0.5))/(2*a);
    x2=(-b-pow(((b*b)-4*a*c),0.5))/(2*a);
    cout<<x1<<" "<<x2;
}
