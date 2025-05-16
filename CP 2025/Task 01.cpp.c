#include<iostream>
using namespace std;

class A{
    int a, b, c;
public:
    A(int x,int y, int z){a=x;b=y;c=z;}
    friend class B;
};

class B{
public:
    void multiplyproperties(A &obj)
    {
        obj.a*=10;
        obj.b*=10;
        obj.c*=10;
    }

};
int main()
{
    A objA(1,2,3);
    b objB;
    objB.multiplyproperties(objA);
    cout<<"a= "<<objA.a<<"b= "<<objB.b<<"c= "<<objC.c<<endl;
    return 0;
}
