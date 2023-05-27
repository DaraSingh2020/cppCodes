#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
#pragma

using namespace std;

int main(){
int N=12;
int J;
vector<int> V;
for(int i=0; i<N;i++){
    J=rand()%10;
    V.push_back(J);
    cout << J << "\t" ;
}
cout << endl << "The sorted and shifted numbers are: " << endl;


sort(V.begin(),V.end());
for(int i=0;i<N; i++){
    V[i]=V[i]+5;
    cout << V[i] << "\t";
}
cout << endl;


vector<int>::iterator L1,L2,L3,L4,L5,L6;

L1=lower_bound(V.begin(),V.end(),5);
cout << "The position of the smallest 5 is: ";
cout << (L1-V.begin()) << endl;

L2=lower_bound(V.begin(),V.end(),6);
cout << "The position of the smallest 6 is: ";
cout << (L2-V.begin()) << endl;

L3=lower_bound(V.begin(),V.end(),9);
cout << "The position of the smallest 9 is: ";
cout << (L3-V.begin()) << endl;

L4=lower_bound(V.begin(),V.end(),11);
cout << "The position of the smallest 11 is: ";
cout << (L4-V.begin()) << endl;

L5=lower_bound(V.begin(),V.end(),17);
cout << "The position of the smallest 17 is: ";
cout << (L5-V.begin()) << endl;

L6=lower_bound(V.begin(),V.end(),3);
cout << "The position of the smallest 3 is: ";
cout << (L6-V.begin()) << endl;

cout << "----------------------- " << endl;
vector<int>::iterator H1,H2,H3,H4,H5,H6;

H1=upper_bound(V.begin(),V.end(),5);
cout << "The position of the largest 5 is: ";
cout << (H1-V.begin()) << endl;

H2=upper_bound(V.begin(),V.end(),6);
cout << "The position of the largest 6 is: ";
cout << (H2-V.begin()) << endl;

H3=upper_bound(V.begin(),V.end(),9);
cout << "The position of the largest 9 is: ";
cout << (H3-V.begin()) << endl;

H4=upper_bound(V.begin(),V.end(),11);
cout << "The position of the largest 11 is: ";
cout << (H4-V.begin()) << endl;

H5=upper_bound(V.begin(),V.end(),17);
cout << "The position of the largest 17 is: ";
cout << (H5-V.begin()) << endl;

H6=upper_bound(V.begin(),V.end(),3);
cout << "The position of the largest 3 is: ";
cout << (H6-V.begin()) << endl;




return 0;
}
