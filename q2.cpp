#include <iostream>
using namespace std;
class bank{
    public:
    int num;
    string name;
    string type;
    string branch;
    int blance;

};
int main()
{
    bank b[10];

    int n;
    cout <<"Enter number :";
    cin>>n;
    for (int  i = 1; i <=n; i++)
    {
        cout <<endl<<"Enter "<<i<<"'s detail"<<endl;
        cout <<"Enter Account number :";
        cin >>b[i].num;
        cout <<"Enter Account name :";
        cin >>b[i].name;
        cout <<"Enter account number type :";
        cin >>b[i].type;
        cout <<"Enter account branch :";
        cin >>b[i].branch;
        cout <<"Enter account blance :";
        cin >>b[i].blance;
    }

    cout <<endl<<"Search Account by number :"<<endl;
    int anum;
    cout <<"Enetr Account number :";
    cin >>anum;
    for (int  i = 1; i <=n; i++)
    {
        if (anum==b[i].num)
        {
            cout <<endl<<"Account  number :" << b[i].num<<endl;
            cout <<"Account  name :"<<b[i].name<<endl;
            cout <<"Account  type :"<<b[i].type<<endl;
            cout <<"Account  branch :"<<b[i].branch<<endl;
            cout <<"Account  blance :"<<b[i].blance<<endl;
        
        }
      
        
    }   

}