#include<iostream>

using namespace std;

class Rectangle
{
    int length;

    int breadth;

    public:

    Rectangle()
    {
        length=0;
        breadth=0;

    }
    Rectangle(int l,int b)
    {
        length=l;

        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);

    }
    void setlength(int l)
    {
        length=l;
    }

    void setbreadth(int b)
    {
        breadth=b;
    }
    int getlength()
    {
        return length;

    }

    int getbreadthh()
    {
        return breadth;
    }

    ~Rectangle()
    {
        cout<<"destructor";
    }
};
int main()
{
    Rectangle r(23,23);

    cout<<"area="<<r.area()<<endl;
    cout<<"perimeter="<<r.perimeter()<<endl;



    return 0;

}