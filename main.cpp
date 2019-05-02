#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream myfile("example.txt");
	string line;
	
	if( myfile.is_open() ){
		myfile << "This is a line of stuff" << endl;
		myfile << "This will appear on the same line" << endl;
		myfile << "This should not.";
		myfile.close();
	} else {
		cout << "Unable to open file example.txt";
	}
	
	ifstream myOutFile("example.txt");
	if(myOutFile.is_open()){
		
		while( getline(myOutFile,line) ){
				cout << line << endl;
		}
		myOutFile.close();
		
	} else {
		cout << "Unable to open file example.txt";
	}
	
	return 0;	
}