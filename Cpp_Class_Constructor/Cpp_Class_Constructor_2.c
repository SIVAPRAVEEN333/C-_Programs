#include<iostream>
using namespace std;

class rectangle
{
    private:
        int len;
        int brd;
    public:
 //       rectangle()
 //       {
 //           len=brd=1;
 //       }
        rectangle(int l,int b);
        int area();
        int perimeter();
        int getlength()
        {
            return len;
        }
        int setlength(int l);
};

rectangle::rectangle(int l,int b)
{
    len=l;
    brd=b;
}
int rectangle::area()
{
    return len*brd;
}
int rectangle::perimeter()
{
    return 2*(len+brd);
}
int rectangle::setlength(int l)
{
    len=l;
    return l;
}

int main()
{
    rectangle r(10,5);
  
    cout<<r.area();
    cout<<r.perimeter();
    r.setlength(20);
    cout<<r.getlength();
}