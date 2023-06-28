#include<iostream>
using namespace std;
class Student
{
    protected:
        int roll;
    public:
        Student(int );
        void displayroll();
};

Student::Student(int a)
{
    roll = a;
}
void Student::displayroll(){
    cout<<"The roll no of the student is: "<<roll<<endl;
}
class Test:public Student
{
    protected:
        int sub1, sub2;
    public:
        Test(int, int, int);
        void displaymarks();
};
Test::Test(int a, int b, int c):Student(c)
{
    sub1 = a;
    sub2 = b;
}
void Test::displaymarks()
{
    cout<<"The mark in first subject is: "<<sub1<<" and in second subject is: "<<sub2<<endl;
}

class Result:public Test
{
    private:
        int total;
    public:
        Result(int, int, int);
        void display();
};
Result::Result(int a, int b, int c):Test(a,b,c)
{
    total = sub1+sub2;
}
void Result::display()
{
    cout<<"The roll number is: "<<roll<<endl;
    cout<<"The total marks obtained is: "<<total;
}

int main(int argc, char const *argv[])
{
    int r,s1,s2;
    cout<<"Enter the roll number and marks in 2 subjects"<<endl;
    cin>>r>>s1>>s2;
    Result ob(s1, s2, r);
    ob.displayroll();
    ob.displaymarks();
    ob.display();
    return 0;
}
