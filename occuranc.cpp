#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    //write
    ofstream outfile("cat.txt");
    if(outfile.is_open()){
        outfile<<"this"<<endl;
        outfile<<"this"<<endl;
        outfile<<"this"<<endl;
    }
    else{
        cout<<"error1";
    }
    //read
     ifstream infile("cat.txt");
    if(!infile){
        cout<<"error2";
    }
    int wordcount=0;
    string word,wordtofind;
    cout << "Enter the word to search for: ";
    cin >> wordtofind;
    while(infile>>word){
        if(word==wordtofind){
            wordcount++;
        }
    }
    cout << "The word '" << wordtofind << "' appeared " << wordcount << " times in the file." << endl;

    infile.close();
    return 0;
}