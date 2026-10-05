#include<iostream>
using namespace std;

class person{
public:
    person(){
        cout << "this is person\n";
    }
};

class student:public person
{
public:
    student(){
        cout << "this is student\n";
    }
};

int main()
{
    student obj;
    return 0;
}