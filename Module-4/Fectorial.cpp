#include<iostream>
using namespace std;
long int fecto(int no)
{
    if (no <= 1)
    {
        return 1;
    }
    return no * fecto(no - 1);    
};
int main()
{
    cout<<fecto(6);
}