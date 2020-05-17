#include<iostream>
using namespace std;

class arithmetic
{
    private:
        int a;
        int b;
    public:
        arithmetic(int a,int b);
        int add();
        int sub();
        int mul();
        int divi();
};

arithmetic::arithmetic(int a,int b)
{
    this->a=a;
    this->b=b;
}

int arithmetic::add()
{
    return a+b;
}

int arithmetic::sub()
{
    return a-b;
}

int arithmetic::mul()
{
    return a*b;
}

int arithmetic::divi()
{
    return a/b;
}

int main()
{
    arithmetic a(10,5);
    //a.arithmetic(10,5);
    cout<<"Sum of two numbers is: "<<a.add()<<endl;
    cout<<"Sub of two numbers is: "<<a.sub()<<endl;
    cout<<"Mult of two numbers is: "<<a.mul()<<endl;
    cout<<"Divi of two numbers is: "<<a.divi()<<endl;
    return 0;
}

