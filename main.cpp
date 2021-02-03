#include <iostream>

using namespace std;

void printName(int year);

int main()
{
    printName();
    return 0;
}
//--
void printName(int year)
{
    cout<<"Mark R. Mahoney"<<endl;
    int age = year - 1973;
    cout<<"You will be "<<age<<" years old in "<<year<<endl;
}