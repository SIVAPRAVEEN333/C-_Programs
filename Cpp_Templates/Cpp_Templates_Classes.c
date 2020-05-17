/*
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
    arithmetic a(10,5);                                     //creating a object
    cout<<"Sum of two numbers is: "<<a.add()<<endl;
    cout<<"Sub of two numbers is: "<<a.sub()<<endl;
    cout<<"Mult of two numbers is: "<<a.mul()<<endl;
    cout<<"Divi of two numbers is: "<<a.divi()<<endl;
    return 0;
}
*/



/*************************************************************************************************
 * The above commented program is the normal arithmetic program which we can use only one datatype
 * so we can use generic datatype by template class, so we can use whatever datatype we can access
 * the specifice variable to whatever datatype using generic template datatype
 /************************************************************************************************/
 
 //generic datatype templete
 
 #include<iostream>
 using namespace std;
 
 template <class T>                                     //creating generic datatype to choose userdefined datatype for variable
 class arithmetic
 {
    private:
        T a;
        T b;
    public:
        arithmetic(T,T);
        T sum();
        T sub();
        T mul();
        T divi();
 };
 
 template <class T>
 arithmetic<T>::arithmetic(T a,T b)
 {
     this->a=a;
     this->b=b;
 }
 template <class T>
 T arithmetic<T>::sum()
 {
     T c;
     c=a+b;
     return c;
 }
 template <class T>
 T arithmetic<T>::sub()
 {
     T c;
     c=a-b;
     return c;
 }
 template <class T>
 T arithmetic<T>::mul()
 {
    T c;
    c=a*b;
    return c;
 }
 template <class T>
 T arithmetic<T>::divi()
 {
     T c;
     c=a/b;
     return c;
 }
 
 int main()
 {
     int i,j;
     float k,l;
     printf("\nEnter the two integer values for arithmetic operation: ");
     cin>>i;
     cin>>j;
     arithmetic<int> a1(i,j);                               //creating the object a1 from class arithmetic
     cout<<"The sum of two numbers is: "<<a1.sum()<<endl;
     cout<<"The sub of two numbers is: "<<a1.sub()<<endl;
     cout<<"The mul of two numbers is: "<<a1.mul()<<endl;
     cout<<"The divi of two numbers is: "<<a1.divi()<<endl;
     printf("\nEnter the two float values for arithmetic operation: ");
     cin>>k;
     cin>>l;
     arithmetic<float> a2(k,l);                             //creating the object a2 from class arithmetic
     cout<<"The sum of two numbers is: "<<a2.sum()<<endl;
     cout<<"The sub of two numbers is: "<<a2.sub()<<endl;
     cout<<"The mul of two numbers is: "<<a2.mul()<<endl;
     cout<<"The divi of two numbers is: "<<a2.divi()<<endl;
     return 0;
 }
