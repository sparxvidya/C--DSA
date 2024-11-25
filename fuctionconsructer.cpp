#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);

 int getLength(){return length;}
  int getBreadth(){return breadth;}
 void setBreadth(int b);
 void setLength(int l);


    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};


    int main()
    {
    Rectangle r1(10,5);
    cout<<"area"<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    }
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
    length=l;
    
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
    
}
int Rectangle::area()

{
    return length*breadth;
    
}
int Rectangle::perimeter()

{
    return  2*(length+breadth);
    
}
bool Rectangle::isSquare()
{
    return length==breadth;

}
Rectangle::~Rectangle()
{
    cout<<"rectangle destroyed";
}
