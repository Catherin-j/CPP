#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    //read
    ifstream infile("cath.txt");
    if(!infile){
        cout<<"error1";
    }
    string search ,line;
    cout<<"enter aword to search";
    cin>>search;
    int lineN=1;
    bool found=false;
    while(getline(infile,line)){
        if(line.find(search)!=string::npos){
            cout <<"the lineno:"<<lineN<< ": " << line << endl;
            found=true;
        }
        lineN++;

    }
     if (!found) {
        cout << "Word not found in the file!" << endl;
    }

    infile.close();
    return 0;
}
