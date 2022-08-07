#include<iostream>
using namespace std;

class Polygon{
protected:
    float length, height;
public:
    virtual void Area() = 0;
};

class Rectangle : public Polygon{
public:
    Rectangle(int x=2, int y =2){
        length = x;
        height =y;
    }
    void Area(){
        cout<<"Area of rectangle: "<<length*height<<" sq. meters"<<endl;
    }
};
class Triangle : public Polygon{
public:
    Triangle(int x=2, int y =2){
        length = x;
        height =y;
    }
    void Area(){
        cout<<"Area of triangle: "<<0.5*length*height<<" sq. meters"<<endl;
    }
};

int main(){
    Rectangle r1(4,4);
    r1.Area();
    Triangle t1;
    t1.Area();
    return 0;
}