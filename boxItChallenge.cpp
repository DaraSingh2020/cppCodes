#include<bits/stdc++.h>

using namespace std;

class Box{
    int l;
    int b;
    int h;
    public:
    Box(){
        l=0;
        b=0;
        h=0;
    }
    Box(int length,int breadth, int height){
        l=length;
        b=breadth;
        h=height;
    }
    Box(Box &t){
        l=t.getLength();
        b=t.getBreadth();
        h=t.getHeight();
    }
    int getLength(){return l;}
    int getBreadth(){return b;}
    int getHeight(){return h;}
    long long CalculateVolume(){
        long long L=l;
        long long B=b;
        long long H=h;
        long long vol=L*B*H;
        return vol;}

    bool operator<(Box& b){
      //  Box B;
        bool x=false;
        int BL=b.getLength();
        int BB=b.getBreadth();
        int BH=b.getHeight();

        int AL=this->l;
        int AB=this->b;
        int AH=this->h;

        if (AL<BL){x=true;}
        else if (AL==BL){
            if (AB<BB){x=true;}
            else if (AB==BB){
                if (AH<BH){
                    x=true;
                }
            }
        }
        return x;
    }
};
/*bool operator<(Box& A,Box& b){
    bool x=false;
    int AL=A.getLength();
    int BL=b.getLength();
    int AB=A.getBreadth();
    int BB=b.getBreadth();
    int AH=A.getHeight();
    int BH=b.getHeight();
    if (AL<BL){x=true;}
    else if (AL==BL){
        if (AB<BB){x=true;}
        else if (AB==BB){
            if (AH<BH){
                x=true;
            }
        }
    }
return x;
}*/
ostream& operator <<(ostream& out,Box& B){
    int BL=B.getLength();
    int BB=B.getBreadth();
    int BH=B.getHeight();
    out<< BL << " " << BB << " " << BH ;
    return out;
}

//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
