#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //write
    string name;
    ofstream outfile("sample.txt");
    cout<<"enter the string "<<endl;
    getline(cin,name);
    outfile<<name;
    outfile.close();
    
    ifstream infile("sample.txt");
        string data;
        infile>>data;
        cout<<data<<endl;
        infile.close();
    
   
}