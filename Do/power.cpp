#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double Base,Power,Answer;
    cout<<"Enter Base:";
    cin>>Base;
    cout<<"Enter Power:";
    cin>>Power;
    Answer=pow(Base,Power);
    cout<<"Solution:"<<Answer<<endl;
}
