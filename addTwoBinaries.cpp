# include<iostream>
# include<algorithm>
# include <string>

using namespace std;

int main(){

string a = "1010";
string b = "1011";

        if(a.size()>b.size()){
            swap(a,b);
        }
        string c = "";
        int carryOver=0;

        for(int i=0;i<a.size();i++){
                int A=int(a[a.size()-1-i]);
                int B=int(b[b.size()-1-i]);
            if(A+B+carryOver==int('0')*2){
                c='0'+c;
                carryOver=0;
            }
            else if(A+B+carryOver==int('0')*2+1){
                c='1'+c;
                carryOver=0;
            }
            else if (A+B+carryOver==int('0')+int('1')){
                c='1'+c;
                carryOver=0;
            }
            else if (A+B+carryOver==int('0')+int('1')+1){
                c='0'+c;
                carryOver=1;
            }
            else if (A+B+carryOver==int('1')+int('1')){
                c='0'+c;
                carryOver=1;
            }
            else if (A+B+carryOver==int('1')+int('1')+1){
                c='1'+c;
                carryOver=1;
            }
            cout << char(A) << "\t" << char(B) << "\t" << c << endl;
        }
        for(int i=b.size()-a.size()-1;i>-1;i--){
            if (b[i]=='1' && carryOver==1){
            c='0'+c;

            }
            else if (b[i]=='0' && carryOver==1){
            c='1'+c;
            carryOver=0;
            }
            else if (b[i]=='1' && carryOver==0){
            c='1'+c;
            }
            else if (b[i]=='0' && carryOver==0){
            c='0'+c;
            }
        }
        if (carryOver==1){
            c='1'+c;
        }

cout << "Binary sum of " << a << " and " << b << " is " << c << endl;


return 0;
}
