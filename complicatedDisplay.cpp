#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City{
std::string name;
long population;
double cost;
};

struct Country{
std::string name;
std::vector<City>cities;
};

struct Tours{
std::string title;
std::vector<Country> countries;
};

void ruler(std::string &s){
std::cout << s << std::endl;
}
void equalMark(char& ch, size_t& N){
    for(int i{0};i<N;i++){
        std::cout << ch;
    }
std::cout << std::endl;
}

int main(){
std::string S{"1234567890123456789012345678901234567890123456789012345678901234567890"};
std::string T{"Tour Ticket Prices From Lexington"};
size_t sizeS{S.size()};
size_t sizeT{T.size()};
size_t ST{sizeS-sizeT};
int precision = std::cout.precision();

    Tours tours
        {T,
            {
                {
                "Iran",{
                    {"Tehran",8752000,400.95},
                    {"Mashhad",240100,452.12},
                    {"Maragheh", 24510000,362.35},
                    {"Shiraz",9752000,6325.25}
                },
            },
            {
                "India",{
                {"New Delhi",13500000,564.53},
                {"Punjab",2320000,975.54},
                {"West Bengal",5335000,563.41},
                {"Maharashtra",45635000,913.54},
                {"Jammu and Kashmir",13455000,961.44}
                },
            },
            {
                "Chile",{
                    {"Valdivia",260000,569.12},
                    {"santiago",7040000,532.00}
                }
            },
        }
    };
    ruler(S);
    char ch{'='};
    equalMark(ch,sizeS);
    std::cout << std::setw(ST/2)<< " " << tours.title << std::endl;
    equalMark(ch,sizeS);
    std::cout << std::fixed << std::setprecision(2);
    unsigned w1{25};
    unsigned w2{25};
    unsigned w3{20};
    std::string S1{"Country"};
    std::string S2{"City"};
    std::string S3{"Population"};
    std::string S4{"Cost"};

    std::cout << std::setw(0)<< std::left<< S1
              << std::setw(w1-S1.size())<< std::right<< S2
              << std::setw(w2)<< std::right<< S3
              << std::setw(w3)<< std::right<< S4 << std::endl;
    std::cout << std::endl;
    for(auto country:tours.countries){
        std::cout << country.name << std::endl;
        for(auto city:country.cities){
            std::cout << std::setw(w1) << city.name
                      << std::setw(w2) << city.population
                      << std::setw(w3) << std::right << city.cost
                      << std::endl;
        }
    }
    equalMark(ch,sizeS);
    std::cout << std::endl <<std::endl;

return 0;
}
