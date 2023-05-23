#include <iostream>
using namespace std;
template <class T>
T sum(T a=0,T b=0,T c=0,T d=0,T e=0,T f=0){
    T ss=0;
    ss=a+b+c+d+e+f;
    cout<<"The sum of the given sequence is found to be : "<<ss<<endl;
} 
int main(){
    cout<<"Enter the number : "<<endl;
    sum(1,2,3);
    sum(1.2,2.3,5.6,4.5,5.6);
    sum(1L,2L,3L,4L,5L);
    return 0;
}