#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //write
    ofstream outfile("number.txt");
        if(outfile.is_open()){
            outfile<< "1"<<endl;
            outfile<< "2"<<endl;
            outfile<< "3"<<endl;
            outfile<< "4"<<endl;
            outfile<< "5"<<endl;
        }else{
            cout<<"error1";
        }
    
     //read
    ifstream infile("number.txt");
    if(!infile){
        cout<<"error1";
    }
    double number, sum = 0;
    int count = 0;
    while(infile>>number){
        sum+=number;
        count++;
    }
    if (count == 0) {
        cout << "No numbers in the file to calculate the average!" << endl;
    } else {
        // Calculate and display the average
        double average = sum / count;
        cout << "The average of the numbers is: " << average << endl;
    }
    return 0;
}