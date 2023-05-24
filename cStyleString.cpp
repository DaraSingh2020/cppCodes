#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void printingString( char strT[]){
cout << "printing from the function: " << endl;
cout << strT << endl;
}


int main(){
char str[]="daraSingh";
cout << str << endl;

for(int i=0; i<sizeof(str);i++){
    cout << str[i] << " ";
}
cout << endl;
cout << str << " has length of " <<strlen(str) << endl;
cout << str[sizeof(str)] << endl;
char str1[20];
strcpy(str1,str);

cout << str1 << endl;
char str2[20];
cout << "Please enter a word: " << endl;
cin >> str2 ;
cout << "The word you entered was: " << str2 << endl;

strcat(str1,str2);
cout << str1 << endl;

// multiple words:
char str3[20];
cout << "Enter multiple words: " << endl;
cin >> str3;
cout << "str3 got this: " << str3 << endl;
cout << "Now let\'s try a different way by using: cin.getline(str, sizeof(str)) " << endl;

char str4[20];

cin.getline(str4, sizeof(str4));
cout << "It was: " << str4 << endl;

char* ptr=str3;

while(*ptr!='\0'){
    cout << *ptr << " ";
    ptr++;
}
cout << endl;

printingString(str3);
int i,j;
char str5[]="Daniel";
i=strcmp(str,str5);
j=strcmp(str,str1);

cout << i << " "<< str << " " <<str5 << endl;
cout << j << " "<< str << " " <<str1 << endl;

const char* strings[] = {"Apple", "Banana", "Orange", "Grape"};
cout << "size of strings is: " << sizeof(strings) << endl;
cout << "size of strongs[0] is : " << sizeof(strings[0]) << endl;

const int numStrings = sizeof(strings) / sizeof(strings[0]);

sort(strings, strings + numStrings, strcmp);

cout << "Sorted strings: ";
for (int i = 0; i < numStrings; ++i) {
    cout << strings[i] << " ";
}
cout << endl;

const char* stringsS[4][10] = {"Apple", "Banana", "Orange", "Grape"};


return 0;
}
