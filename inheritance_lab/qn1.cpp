#include<iostream>
using namespace std;
class Room
{
protected:
    int length, breadth;
public:
    int area(int, int);
};
int Room::area(int a, int b)
{
    length = a;
    breadth = b;
    return (length*breadth);
}
class Bedroom:public Room
{
    private:
        int height;
    public:
        void setData(int, int, int);
        int volume();
};
void Bedroom::setData(int a, int b, int c)
{
    length = a;
    breadth = b;
    height = c;
}
int Bedroom::volume()
{
    return(length*breadth*height);
}
int main(int argc, char const *argv[])
{
    int l, b, h;
    Bedroom b1;
    cout<<"Enter the length, breath and height respectively"<<endl;
    cin>>l>>b>>h;
    int area = b1.area(l,b);
    b1.setData(l, b, h);
    int volume = b1.volume();
    cout<<"The area is: "<<area<<endl;
    cout<<"The volume is: "<<volume<<endl;
    return 0;
}
