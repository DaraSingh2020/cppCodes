#include <iostream>
#include <string>
using namespace std;

enum weekdays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main(){

    weekdays today{Friday}; //I would also write weekdays today = Friday;
    std::cout << "Today\'s day number is: " << today << std::endl;

    std::cout << "Please type a weekday: ";
    std::string weekday;
    std::cin >> weekday;
    std::cout << "\n" << weekday << std::endl;
    cout << "Now let\'s see what Friday looks like: " << endl;

    switch(today){
    case Monday: cout << "Monday is the first day of work and it\'s boring" << endl; break;
    case Tuesday: cout << "Tuesdays are awesome!" << endl; break;
    case Wednesday: cout << "Wednesdays are very interesting" << endl; break;
    case Thursday: cout << "Thursdays are cold" << endl;
    case Friday: cout << "Fridays are for getting together" << endl;
    case Saturday: cout << "People are tired on Saturdays" << endl; break;
    default: cout << "All days are cool"<< endl;

    }

    char score{'a'};
    switch(score){
    case 'a':
    case 'A': cout<< "You got an A"<< endl;break;
    case 'b':
    case 'B': cout << "You got a B. Not bad!" << endl;break;
    default: cout << "go study harder!" << endl;

    }


return 0;
}
