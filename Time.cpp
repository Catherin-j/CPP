#include<iostream>
using namespace std;
class Time{
    private:
    int HR ,MIN,SEC;
    public:
    void settime(int a,int b,int c){
        HR=a;
        MIN=b;
        SEC=c;
    }

    void show(){
        cout <<"time:"<<HR<<":"<<MIN<<":"<<SEC<<endl;
    }
    void normalise(){
        MIN=MIN+SEC/60;
        SEC=SEC%60;
        HR=HR+MIN/60;
        MIN=MIN%60;
    }
    Time operator +(Time T){
      Time p;
      p.SEC=SEC+T.SEC;
      p.MIN=MIN+T.MIN;
      p.HR=HR+T.HR;
      p.normalise();
      return p;
    }
};

int main(){
    Time t1,t2,t3;
    t1.settime(10,10,3);
    t2.settime(3,2,1);
    t3=t1+t2;
    t3.show();
    return 0;
}
