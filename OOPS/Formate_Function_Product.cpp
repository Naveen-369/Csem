#include <iostream>
using namespace std;
template <class N>
N product(N x=1, N y=1,N z=1,N w=1,N h=1,N m=1){
    N pro=1;
    pro=x*y*z*w*h*m;
    cout<<pro<<endl;
    return pro;
}
int main(){
    product(5,2,4,3);
    product(1.25);
    return 0;
}