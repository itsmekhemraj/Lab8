#include<iostream>
using namespace std;

class Complex{
private:
    double real, img;
public:
    Complex():real(0), img(0){}
    Complex operator +(Complex c){
        Complex temp;
        temp.real = this->real + c.real;
        temp.img = this->img + c.img;
        return temp;
    }
    friend bool operator >>(istream &mycin, Complex &c){
        mycin>>c.real;
        mycin>>c.img;
    }
    friend bool operator <<(ostream &mycout, Complex &c){
        mycout<<c.real<<" + "<<c.img<<"j";
    }
};

int main(){
    Complex c1,c2,c3;
    cout<<"Input Complex number 1: "<<endl;
    cin>>c1;
    cout<<"Input Complex number 2: "<<endl;
    cin>>c2;
    cout<<"Sum of two complex numbers is: ";
    c3 = c1 + c2;
    cout<<c3;
    return 0;
}