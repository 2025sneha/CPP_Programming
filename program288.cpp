#include<iostream>
using namespace std;

void auto_demo()
{
    auto i = 1;
    cout<<"auto _demo : "<<i<<"\n";
    i++;
}

int main()
{
    auto_demo();
    auto_demo();
    auto_demo();
    auto_demo();

    return 0;
}