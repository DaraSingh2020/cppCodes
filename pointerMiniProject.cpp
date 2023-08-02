#include <iostream>

using namespace std;

void print(const int* const arr,const size_t sizeA){
    for(int i{0}; i<sizeA; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* apply_all(const int* const a1,const size_t a1_size,const int* const a2,const size_t a2_size){
    int* result{nullptr};
    result=new int[a1_size*a2_size];
    int counter{0};
    for(size_t i{0}; i<a1_size; i++){
        for(size_t j{0}; j<a2_size; j++){
            result[counter]=*(a1+i)*(*(a2+j));
            counter++;
        }
    }
    return result;
}

int main(){

const size_t array1_size{5};
const size_t array2_size{3};

int array1[]{1,2,3,4,5};
int array2[]{10,20,30};

cout << "Array: ";
print(array1,array1_size);

cout << "Array: ";
print(array2,array2_size);

int* result = apply_all(array1,array1_size, array2, array2_size);
constexpr size_t result_size{array1_size*array2_size};

cout << "Result: ";
print(result, result_size);

cout << endl;

delete [] result;


return 0;
}
