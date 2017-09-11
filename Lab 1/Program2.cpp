#include <iostream>
#include <string>
using namespace std;

int main()
{ 
string n1 = "";
string n2 = "";
string n3 = "";

float time1;
float time2;
float time3;

cout<< "please enter a name for the first runner: ";
cin >> n1;
cin.sync();
cin.clear(); 

cout<< "please enter a name for the second runner: ";
cin >> n2;
cin.sync();
cin.clear(); 
	
cout<< "please enter a name for the third runner: " ;
cin >> n3;
cin.sync();
cin.clear();

cout << "please enter the time for the first runner: " ;
cin >> time1;
cin.sync();
cin.clear();

cout << "please enter the time for the second runner: " ;
cin >> time2;
cin.sync();
cin.clear();


cout << "please enter the time for the third runner: ";
cin >> time3;
cin.sync();
cin.clear();

cout<< n1 << " " << time1 << " " << endl << n2 << " " << time2 << " " << endl << n3 << " " << time3 << " ";

	return 0;
}
