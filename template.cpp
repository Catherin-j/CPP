#include<iostream>
using namespace std;

    template<typename T>
     T sum(T a,T b){
        return a+b;
    }
    template<typename T>
     T sum(T a,T b,T c){
        return a+b+c;
    }
int main(){
  cout<< sum(4.25,2.02,2.00)<<endl;
    return 0;
}