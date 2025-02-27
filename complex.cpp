#include <iostream>
using namespace std;
class complex{
    float real,img;
    public:
    complex(float r=0,float i=0){
    real=r;
    img=i;
    }
    void setup(){
        cout<<real<<"+"<<"i"<<img<<endl;
    }
    //operator overloading
    complex operator +(complex t){
        complex p;
        p.real=real+t.real;
        p.img=img+t.img;
        return p;
    }
};
int main(){
    complex c1(2.3,3.4),c2(2.3,3.4),c3;
    c3=c1+c2;
    c3.setup();
    return 0;
}