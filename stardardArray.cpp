#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;

const array<int,10> printingArray(const array<int,10> d){
cout << endl << "Printing array from a function: " << endl;
for(int i=0; i<d.size(); i++){
cout << d.at(i) << "\t";
}
cout << endl << "returning it to another function, too" << endl << endl;
return d;
}

void printingOnly(array<int,10> d){
cout << endl << "Printing array from a function: " << endl;
for(int i=0; i<d.size(); i++){
cout << d.at(i) << "\t";
}
cout <<  endl << endl;
}



int main(){
const int arraySize=10;
array<int,arraySize> daraArray;
array<int,arraySize> daraArrayC;
array<int,arraySize> daraArrayD;
array<int,arraySize> daraArrayR;
array<double,arraySize> daraArrayF;

int randN=rand()%15;
cout << randN << endl << endl;

for(int i=0; i<arraySize; i++){
randN=rand()%15;
daraArray[i]=randN;
}
for(int i=0; i<arraySize; i++){
cout << daraArray[i] << "\t";
}
cout << endl;
daraArrayC=daraArray;
cout << endl << "daraArrayC=daraArray; meaning just copying the reference address!" << endl;
for(int i=0; i<arraySize; i++){
cout << daraArrayC[i] << "\t";
}
cout << endl;
cout << endl << "daraArrayD.at(i)=daraArray.at(i); meaning just copying the value!" << endl;
for(int i=0; i<arraySize; i++){
daraArrayD.at(i)=daraArray.at(i);
cout << daraArrayD.at(i)+daraArray[i] << "\t";
}
cout << endl;
cout << endl << "daraArrayF[i]=static_cast<double>(daraArray.at(i)); meaning implicitly converting to float!" << endl;
for(int i=0; i<arraySize; i++){
daraArrayF[i]=static_cast<double>(daraArray.at(i));
cout << daraArrayF.at(i) << "\t";
}
cout<< endl;
cout << "Printing daraArray again:"<< endl;
for(int i=0; i<arraySize; i++){
cout << daraArray[i] << "\t";
}
cout << endl;

array<int,arraySize> daraArray1=printingArray(daraArray);
printingOnly(daraArray1);

cout<< "The size by daraArray1.size(); is: " << daraArray1.size() << endl;

cout << endl;
for(int i=0;i <daraArray1.size(); i++){
    daraArray1[i]+=rand()%7;
    cout << daraArray1.at(i) << "\t";
}
cout << endl;

daraArray1.swap(daraArrayD);

cout << endl << "values of daraArray1.at(i); after swapping with another array" << endl;
for (int i=0; i<daraArray1.size(); i++){
    cout << daraArray1.at(i) << "\t";
}
cout << endl;

daraArray1.front()=10;
printingOnly(daraArray1);

daraArray1.back()=112;
printingOnly(daraArray1);

daraArray1.fill(13);
printingOnly(daraArray1);
printingOnly(daraArray);

cout << "printing in reverse now by forward the iterator and using auto:" << endl;

for (auto i=daraArray.begin(); i!=daraArray.end(); i++){
    cout << *i << "\t" ;
}
cout << endl;

cout << "printing in reverse now by explicitly defining a forward the iterator:" << endl;
array<int,arraySize>::iterator T;
for ( T=daraArray.begin(); T!=daraArray.end(); T++){
    cout << *T << "\t" ;
}
cout << endl;

printingOnly(daraArrayD);

cout << "printing in reverse now by explicitly defining a reverse the iterator:" << endl;

for (auto rT=daraArrayD.rbegin(); rT!=daraArrayD.rend(); rT++){
    cout << *rT << "\t" ;
}
cout << endl;


system("pause<nul");
return 0;
}


