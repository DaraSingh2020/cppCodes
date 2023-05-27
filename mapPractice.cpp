#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {

    int Q;
    cin >> Q;
    map<string,int> teacherBook;
    map<string,int>::iterator it;
    bool studentAlreadyExist;

    int queryType;
    string studentName;
    int mark;

    for(int i=0;i<Q;i++){
        cin >> queryType >> studentName;
        if(cin.peek()!='\n'){
            cin >> mark;
        }

        it=teacherBook.find(studentName);
        if(it==teacherBook.end()){
            studentAlreadyExist=false;
            cout << "student did not existed" << endl;
        }
        else{
            studentAlreadyExist=true;
            cout << "student already existed" << endl;
        }


        if(queryType==1){
            if (studentAlreadyExist==false){
                teacherBook.insert(make_pair(studentName,mark));
                cout << studentName << " : " << mark << " in the loop" << endl;
            }
            else{
                teacherBook[studentName]+=mark;
                cout << "updated mark:  "<< teacherBook[studentName] << " in the loop" << endl;
            }

        }
        else if(queryType==2){
            teacherBook.erase(studentName);
        }
        else if(queryType==3){
            if(studentAlreadyExist==false){
                cout << 0 << endl;
            }
            else{
                cout << teacherBook[studentName] << endl;
            }
        }
    }


    return 0;
}
