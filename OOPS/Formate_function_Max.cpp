#include <iostream>
#include <string>
using namespace std;
template <class T>
T maxi(T arr[],int size){
    T max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arrr[]={1,2,3,4,5,6,7,534,45,567};
    int m=sizeof(arrr)/sizeof(arrr[0]);
    auto n=maxi(arrr,m);
    cout<<n<<endl;
    return 0;
}