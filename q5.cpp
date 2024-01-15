#include <iostream>
using namespace std;
class Grandfather{
    public:
    void display(){
        cout <<"Hellon i am Grandfather"<<endl;
    }

};
class Father :public Grandfather{
     public:
    void display(){
        cout <<"Hellon i am father"<<endl;
    }

};
class son :public Father{
     public:
    void display(){
        cout <<"Hellon i am son "<<endl;
    }

};
class Daughter:public Father{
     public:
    void display(){
        cout <<"Hellon i am Daughter"<<endl;
    }

};
int main(){
    Father f;
    Daughter d;
    son s;
    f.Grandfather::display();
    d.Father::display();
    s.display();
    d.display();
    


}