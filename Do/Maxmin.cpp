#include<iostream>
using namespace std;
int main()
{
    int index;
    int max,min;
    cout<<"Enter Index of your array:";
    cin>>index;

    int Data[index];

    cout<<"Enter Input"<<endl;
    for(int i=1;i<=index;i++){
        cout<<i<<". Enter Input:";
        cin>>Data[i];
    }
    max=Data[1];
    min=Data[1];
    for(int i=1;i<=index;i++){
        if(Data[i]>max){
            max=Data[i];
        }
    }
    for(int i=1;i<=index;i++){
        if(Data[i]<min){
            min=Data[i];
        }
    }

    cout<<"Maximum Number:"<<max<<endl;
    cout<<"Minimum Number:"<<min<<endl;
}
