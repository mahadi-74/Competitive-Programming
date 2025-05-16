#include<iostream>
using namespace std;

class A{
    public:
    int a, b, c;
    A(int x,int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
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
    A objA(1,5,7);
    B objB;
    objB.multiplyproperties(objA);
    cout<<"a= "<<objA.a<<", b= "<<objA.b<<", c= "<<objA.c<< endl;
    return 0;
}
