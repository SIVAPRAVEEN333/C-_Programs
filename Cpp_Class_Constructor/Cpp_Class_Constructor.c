#include<iostream>

class rectangle{
public:                                 //change to private if you need to use within the class
    int len;
    int brd;
public:
    rectangle(int l,int b)              //here is the constructor
    {
        len=l;
        brd=b;
    }
    int area()
    {
        return len*brd;
    }
    
    int valueChange(int l)                           
    {
        len=l;
        return len;
    }
};

int main()
{
    int area_temp,change_temp;
    rectangle r(10,53);
    area_temp=r.area();
    printf("\nThe area value is: %d",area_temp);
    change_temp=r.valueChange(20);
    printf("\nThe length is: %d",change_temp);
    return 0;
}