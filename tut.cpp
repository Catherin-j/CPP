#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st2;
  //  ofstream out("sam.txt");
   // out<<st;

    ifstream in("sam1.txt");
    getline(in,st2);
    cout<<st2;
    return 0;
}