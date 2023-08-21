#include<iostream>
#include<list>
#include<string>
#include<memory>
#include<limits>
#include<iomanip>


class Song{

public:
std::string Name;
std::string Singer;
int Length;
static int Total;
public:
Song(std::string name,std::string singer, int length):Name{name},Singer{singer},Length{length}{
    ++Total;
}
Song(const Song& S):Song(S.Name,S.Singer,S.Length){
}
static int totalSongs(){
return Total;
}
~Song(){
--Total;
}
std::string getName(){
return Name;
}
std::string getSinger(){
return Singer;
}
int getDuration(){
return Length;
}


};
int Song::Total=0;

std::ostream& operator<<(std::ostream& COUT, Song& S){
COUT << std::setw(40) << std::left <<  S.getName()
            << std::setw(20) << std::left <<  S.getSinger()
            << std::setw(20) << std::left << S.getDuration() << std::endl;
return COUT;
}

void insertSong(std::list<Song> &L){

std::cout << "Please enter song's name: ";
std::string songName{};
std::getline(std::cin,songName);

std::cout << "Please enter singer's name: ";
std::string singer{};
std::getline(std::cin ,singer);

std::cout << "Please time duration: ";
int length{};
std::cin >> length;

std::list<Song>::iterator it=L.begin();

L.insert(it, Song(songName,singer,length));
}

void printPlayList(std::list<Song>& L){
std::cout<< "=================== Play List Start ======================================" << std::endl;
        std::cout<< std::setw(40) << std::left <<  "The Song's Name"
            << std::setw(20) << std::left <<  "The artist"
            << std::setw(20) << std::left << "Duration" << std::endl;
std::cout<< "==========================================================================" << std::endl;
    for(auto& l:L){
        std::cout<< std::setw(40) << std::left <<  l.getName()
            << std::setw(20) << std::left <<  l.getSinger()
            << std::setw(20) << std::left << l.getDuration() << std::endl;
    }
std::cout<< "=================== Play List End ========================================" << std::endl;
}

void addMoreSong(std::list<Song>& L){
    bool addMore{true};
    while(addMore){
        std::cout << "Do you want to add to the song list? Y/N:";
        char C{};
        std::cin>>C;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        C=toupper(C);
        if(C=='N'){
            addMore=false;
        }
        else if (C=='Y'){
            insertSong(L);
        }
        else{
            std::cout<< "wrong input..." << std::endl;
        }
    }
}

int main(){
    std::list<Song> L{
        {"Sister you are hungry", "Jakson",10},
        {"15 years of noghtingness", "Sam",11},
        {"Jerry's nicest song", "Jerry",6},
        {"Dara Singh's love song", "Dara Singh" ,45},
        {"The real singing song", "Jax", 1},
        {"Furiously Nice song of nature","Terry",5}
        };
std::list<Song>::iterator IT{L.begin()};
std::cout << *IT << std::endl;
++IT;
std::cout << *IT << std::endl;

std::cout << L.front() << std::endl;

printPlayList(L);
addMoreSong(L);
printPlayList(L);

return 0;
}
