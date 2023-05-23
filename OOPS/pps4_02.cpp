/*2. Write a program to create a Class Matrix with data members row and columns along with 
the suitable member functions to read and display the matrix. Define a function, + and - 
that overloads its operation by performing the operations matrix addition and 
subtraction. Implement using the objects*/

#include <iostream>
using namespace std;
class matrix
{
    int n;
    int k;
    public:
    matrix(int a, int b): n(a), k(b){
        int arr[n][k];
        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                cin>>arr[i][j];
            }
        }
    }
    friend void operator+(matrix &a, matrix &b);
};
void operator+(matrix &a, matrix &b){
    int a,b,c,d;
    

}