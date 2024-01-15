#include <iostream>
using namespace std;
class A{
    public:
    void dis(){
        cout <<"Hello i am member of A"<<endl;
    }

};
class B :public A{
    public:
    void dis(){
        cout <<"Hello i am member of B"<<endl;
    }

};
class C :public A{
    public:
    void dis(){
        cout <<"Hello i am member of C"<<endl;
    }

};
int main()
{
    C c;
    B b;
    A a;

    c.dis();
    b.dis();
    a.dis();

}