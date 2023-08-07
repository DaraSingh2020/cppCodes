#include <iostream>

using namespace std;

struct vector2{
static int number;
float x;
float y;

    vector2(float a,float b):x{a},y{b}{
        number++;
    }
    void printVector(){
    cout << __func__ << " X: " << x << " Y: " << y << endl << endl;
    }
    void operator+=(const vector2& other){
        cout << "X: " << x << " + " << other.x << " = " << (x+other.x)<< endl;
        cout << "Y: " << y << " + " << other.y << " = " << (y+other.y)<< endl;
        x+=other.x;
        y+=other.y;
    }
    vector2 operator+(const vector2& other) const{
        cout << "X: " << x << " + " << other.x << " = " << (x+other.x)<< endl;
        cout << "Y: " << y << " + " << other.y << " = " << (y+other.y)<< endl;
        return vector2(x+other.x,y+other.y);
    }
    void operator*=(const vector2& other) {
        cout << "X: " << x << " * " << other.x << " = " << (x*other.x)<< endl;
        cout << "Y: " << y << " * " << other.y << " = " << (y*other.y)<< endl;
        x*=other.x;
        y*=other.y;
    }
    vector2 operator*(const vector2& other) const{
        cout << "X: " << x << " * " << other.x << " = " << (x*other.x)<< endl;
        cout << "Y: " << y << " * " << other.y << " = " << (y*other.y)<< endl;
        return vector2(x*other.x,y*other.y);
    }


    static void numberofVectors(){
    cout << "Number of vectors are: " << number << endl;
    }
};
int vector2::number=0;


ostream& operator<<(ostream& COUT, vector2& V){
COUT << "Using ostream:" << endl;
COUT << " << X: " << V.x << " Y: " << V.y << endl;
return COUT;
}




int main(){

cout << "the name of this function is: " << __func__ << endl;

vector2* V1_ptr{nullptr};
V1_ptr = new vector2{2.3f,6.8f};
V1_ptr->printVector();

vector2 V1{3.2f,6.9f};
V1.printVector();

vector2 V2{9.2f,5.3f};
V2.printVector();

V1+=V2;
V1.printVector();
V2.printVector();

vector2 V3{7.3f, 6.1f};
V3.printVector();
V3*=V1;
V3.printVector();

vector2 V4=V1*V2+V3;
V4.printVector();

vector2::numberofVectors();

cout << V1 << endl;
cout << *V1_ptr << endl;

vector2 V5=V1+*V1_ptr;
V5.printVector();

vector2* V2_ptr{nullptr};
V2_ptr= new vector2(V1*(*V1_ptr));
V2_ptr->printVector();

delete [] V1_ptr;
delete [] V2_ptr;
V1_ptr = nullptr;
V2_ptr = nullptr;



return 0;
}
