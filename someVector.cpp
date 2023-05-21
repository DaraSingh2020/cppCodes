#include <iostream>
#include <list>
#include <cstdlib>

using namespace std;


int main(){
int arraySize=10;
int randomNumber;
list<int>daraArray[arraySize];

cout<< "Creating an array 10 random numbers:" << endl;
for (int i=0; i<arraySize; i++){
randomNumber=rand()%50;
cout << randomNumber << " ";
daraArray[i].push_back(randomNumber);
}
cout << endl;

cout << "Printing out the numbers: " << endl;
for(int i=0; i<arraySize; i++){
cout<< daraArray[i].front() << "\t";
}
cout << endl;


system("pause>0");
return 0;
}
