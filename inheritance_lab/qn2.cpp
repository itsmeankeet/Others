#include<iostream>
using namespace std;
class class1
{
protected:
    int num1;
public:
    class1(int);
};

class1::class1(int a)
{
    num1= a;
}
class class2
{
protected:
    int num2;
public:
    class2(int);
};

class2::class2(int a)
{
    num2= a;
}
class class3:public class1, public class2
{
    public:
        class3(int, int);
};
class3::class3(int a, int b): class1(a), class2(b)
{
    int sum = (num1+num2);
    cout<<"The sum is :"<<sum<<endl;
}
int main(int argc, char const *argv[])
{
    int a, b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    class3 ob(a,b);
    return 0;
}
