#include<iostream>
using namespace std;
struct Structure{
    int id;
    string nm;
};
int main()
{
    struct Structure std;
    std.id = 101;
    cout<<"Enter your name:";
    cin>>std.nm;
    cout<<"Your id is:"<<std.id<<endl<<"Your name is:"<<std.nm;
}