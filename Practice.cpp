

#include <iostream>				// for cin, cout, endl
#include <cmath>
#include <iomanip>
#include <fstream>
#include <string>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

template<class dataType>
void debug(dataType x)
{
	cout<<"******Debug Start******"<<endl;
	cout<<"Value is "<<x<<endl;
	cout<<"******End Debug******"<<endl;
}

int main()						
{ 
/*int a= 0;
int b=0;
	cout<< "please enter a number: "; 	
 	cin>> a;
 	cout << "please enter a number: ";
 	cin>> b;
 	cout<< a+b <<endl;*/
string first = "";
string last = "";
	cout<< "please enter first name: ";
	cin>> first;
	cout<< "please enter last name" ;
	cin>> last;
	cout<< first<< " " << last<< endl;
	
 return 0;
}   // end of main function
