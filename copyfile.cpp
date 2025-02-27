#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    //write
    ofstream outfile("destination.txt");
    if(!outfile){
        cout<<"error1";
    }
     
    ifstream infile("smile.txt");
    if(!infile){
        cout<<"error2";
    }
    string line;
    while(getline(infile,line)){
        outfile<<line<<endl;
        cout <<line<<endl;
    }
    cout << "Content copied successfully!" << endl;
    infile.close();
    outfile.close();
    return 0;
}