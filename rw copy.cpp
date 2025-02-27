#include <iostream>
#include <fstream> // for file handling
#include <string>
using namespace std;
int main(){
    //write
    ofstream outfile("output.txt");
    if(outfile.is_open()){
        outfile<< "1 2 3"<<endl;
        outfile<<" 4 5 6"<<endl;
        outfile.close();
    }
    else {
        cout<<"error1";
    }
    //read
    ifstream infile("output.txt");
    if(infile.is_open()){
        string line;
        while(getline(infile,line)){
            cout<<line<<endl;
        }
        infile.close();
    }
    else {
        cout<<"error2";
    }

}