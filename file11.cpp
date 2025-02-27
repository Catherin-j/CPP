#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char arr[100];
    cout<<"enter ur name and age"<<endl;
    cin.getline(arr,100);
    //to write
    ofstream myfile("smile.txt");
    myfile.open("smile.txt");
    //write it to array;
    myfile<<arr;
    myfile.close();
    cout<<"file write operation done"<<endl;
    return 0;
}