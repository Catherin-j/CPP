#include <iostream>
#include <numeric>
using namespace std;
class numbers{
int num,den;
public:
void setnumbers(int n=0,int d=1){
    num=n;
    den=d;
}
void simplify(){
    int value=std::gcd(num,den);
    num/=value;
    den/=value;
    if(den<0){
        num=-num;
        den=-den;
    }
}
void show(){
    cout<<num<<"/"<<den<<endl;
}
//+
numbers operator +(numbers other){
    numbers a;
    a.num=num * other.den+den * other.num;
    a.den=den*other.den;
    a.simplify();
    return a;
}
//-
numbers operator -(numbers other){
    numbers a;
    a.num=num*other.den-den*other.num;
    a.den=den*other.den;
     a.simplify();
    return a;
}
//*
numbers operator *(numbers other){
    numbers a;
    a.num=num+other.num;
    a.den=den+other.den;
     a.simplify();
    return a;
}
// "/"
numbers operator /(numbers other){
    numbers a;
    a.num=num*other.den;
    a.den=den+other.num;
     a.simplify();
    return a;
}
};
int main(){
numbers n1,n2,n3;
n1.setnumbers(1,2);
n2.setnumbers(3,4);
n3=n1*n2;
n3.show();
    return 0;
}