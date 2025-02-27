#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
 fstream myfile;
// myfile.open("cath.txt",ios::out);//write
// myfile<<"this is file handling"<<endl;

 myfile.open("cath.txt",ios::in);//read
 if(myfile.is_open()){
    string line;
    while(getline(myfile,line)){
        cout<< line<<endl;

    }
 }
 myfile.close();
 return 0;
}
