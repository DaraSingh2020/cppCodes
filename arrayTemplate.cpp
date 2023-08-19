#include<iostream>
#include<iomanip>
#include<string>

template<int N>
class Array{
int sizeArray{N};
int values[N];

friend std::ostream& operator<<(std::ostream& COUT, const Array<N> &daraArray){
    COUT << "[";
    for(const auto& val:daraArray.values){
        COUT << val << " ";
    }
    COUT << "]";
    return COUT;
}
public:
    Array()=default;
    Array(int initialValue){
        for(auto& item:values){
            item=initialValue;
        }
    }
    void fill(int val){
        for(auto& item:values){
            item=val;
        }
    }
    int getSize() const{
    return sizeArray;
    }
    int& operator[](int index){
    return values[index];
    }
};


template<typename T, int N>
class Array1{
int sizeArray{N};
T values[N];

friend std::ostream& operator<<(std::ostream& COUT, const Array1<T, N> &daraArray){
    COUT << "[";
    for(const auto& val:daraArray.values){
        COUT << val << " ";
    }
    COUT << "]";
    return COUT;
}
public:
    Array1()=default;
    Array1(T initialValue){
        for(auto& item:values){
            item=initialValue;
        }
    }
    void fill(T val){
        for(auto& item:values){
            item=val;
        }
    }
    int getSize() const{
    return sizeArray;
    }
    T& operator[](int index){
    return values[index];
    }
};

void createSpace(char CH,int N){
    std::cout << std::endl;
    for(int i{0}; i<N; ++i){
        std::cout << CH;
    }
    std::cout<< std::endl << std::endl;
}

int main(){

    Array<5> numbers;
    std::cout << "the size of the array is: " << numbers.getSize() << std::endl;
    std::cout << numbers << std::endl;

    numbers.fill(0);
    std::cout << "the size of the array is: " << numbers.getSize() << std::endl;
    std::cout << numbers << std::endl;

    numbers.fill(10);
    std::cout << "the size of the array is: " << numbers.getSize() << std::endl;
    std::cout << numbers << std::endl;

    numbers[0]=7777;
    numbers[3]=6666;
    std::cout << "the size of the array is: " << numbers.getSize() << std::endl;
    std::cout << numbers << std::endl;

    Array<100> daraNumbers{1};
    std::cout << "the size of the array is: " << daraNumbers.getSize() << std::endl;
    std::cout << daraNumbers << std::endl;

    createSpace('=',40);


    Array1<int, 5> numbers1;
    std::cout << "the size of the array is: " << numbers1.getSize() << std::endl;
    std::cout << numbers1 << std::endl;

    numbers1.fill(0);
    std::cout << "the size of the array is: " << numbers1.getSize() << std::endl;
    std::cout << numbers1 << std::endl;

    numbers1.fill(10);
    std::cout << "the size of the array is: " << numbers1.getSize() << std::endl;
    std::cout << numbers1 << std::endl;

    numbers1[0]=7777;
    numbers1[3]=6666;
    std::cout << "the size of the array is: " << numbers1.getSize() << std::endl;
    std::cout << numbers1 << std::endl;

    Array1<int, 100> daraNumbers1{1};
    std::cout << "the size of the array is: " << daraNumbers1.getSize() << std::endl;
    std::cout << daraNumbers1 << std::endl;

    createSpace('=',40);

    Array1<double, 5> numbers2;
    std::cout << "the size of the array is: " << numbers2.getSize() << std::endl;
    std::cout << numbers2 << std::endl;

    numbers2.fill(0.1);
    std::cout << "the size of the array is: " << numbers2.getSize() << std::endl;
    std::cout << numbers2 << std::endl;

    numbers2.fill(10.1);
    std::cout << "the size of the array is: " << numbers2.getSize() << std::endl;
    std::cout << numbers2 << std::endl;

    numbers2[0]=7777.77;
    numbers2[3]=6666.66;
    std::cout << "the size of the array is: " << numbers2.getSize() << std::endl;
    std::cout << numbers2 << std::endl;


    Array1<double, 100> numbers21{6.66};
    std::cout << "the size of the array is: " << numbers21.getSize() << std::endl;
    std::cout << numbers21 << std::endl;


    createSpace('=',40);

    Array1<std::string, 5> numbers3;
    std::cout << "the size of the array is: " << numbers3.getSize() << std::endl;
    std::cout << numbers3 << std::endl;

    numbers3.fill("Dara");
    std::cout << "the size of the array is: " << numbers3.getSize() << std::endl;
    std::cout << numbers3 << std::endl;

    numbers3.fill("Jax");
    std::cout << "the size of the array is: " << numbers3.getSize() << std::endl;
    std::cout << numbers3 << std::endl;

    numbers3[0]="Jim";
    numbers3[3]="Jerry";
    std::cout << "the size of the array is: " << numbers3.getSize() << std::endl;
    std::cout << numbers3 << std::endl;


    Array1<std::string, 100> numbers31{"X"};
    std::cout << "the size of the array is: " << numbers31.getSize() << std::endl;
    std::cout << numbers31 << std::endl;


    createSpace('=',40);

    Array1<char, 5> numbers4;
    std::cout << "the size of the array is: " << numbers4.getSize() << std::endl;
    std::cout << numbers4 << std::endl;

    numbers4.fill('S');
    std::cout << "the size of the array is: " << numbers4.getSize() << std::endl;
    std::cout << numbers4 << std::endl;

    numbers4.fill('T');
    std::cout << "the size of the array is: " << numbers4.getSize() << std::endl;
    std::cout << numbers4 << std::endl;

    numbers4[0]='N';
    numbers4[3]='=';
    std::cout << "the size of the array is: " << numbers4.getSize() << std::endl;
    std::cout << numbers4 << std::endl;


    Array1<char, 100> numbers41{'*'};
    std::cout << "the size of the array is: " << numbers41.getSize() << std::endl;
    std::cout << numbers41 << std::endl;

return 0;
}
