#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int count(const string& line){
    stringstream ss(line);
    string word;
    int wordcount=0;
    while(ss>>word){
        wordcount++;
    }
    return wordcount;
}

int main(){
    //write
    ofstream outfile("count.txt");
    if(outfile.is_open()){
        outfile<<"cath"<<endl;
          outfile<<"cath"<<endl;
            outfile<<"cath"<<endl;
        outfile.close();
    }else{
         cout<<"error 1";
    }
    
    ifstream infile("count.txt");
    if(infile.is_open()){
       string line;
       int total =0;
       while(getline(infile,line)){
        total+=count(line);
       }
       cout<<"TOTAL :"<<total;
       infile.close();
    }else{
         cout<<"error 2";
    }
    return 0;
}
   