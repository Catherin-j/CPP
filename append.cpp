#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    //write
    ofstream outfile("append.txt",ios::app);
    if(!outfile){
        cout<<"error 1";
    }
  string text;
  cout<<"enter text to append";
  cin.ignore();
  getline(cin,text);
  outfile << text << endl;
  cout << "Text appended successfully!" << endl;

    outfile.close();
 return 0;
}