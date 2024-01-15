#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout <<"Enter value of a :";
    cin >>a;
    cout <<"Enter value of b :";
    cin >>b;

    try
    {
        if (a==0 || b==0)
        {
            throw a;
        }

        cout <<"division is ="<<a/b;
        
    }
    catch(int n)
    {
        cout << "0 is not allowed ";
    }
    catch(...)
    {
        cout <<"enter valid input ";
    }
    
}