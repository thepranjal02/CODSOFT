#include <iostream>
#include<iostream>
using namespace std;
int main()
{
    int i;
    float mark, sum=0, avg;
    cout<<"Enter Marks obtained in 5 Subjects: "<<endl;
    for(i=0; i<5; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/5;
    cout<<"\nGrade = "<<endl;
    if(avg>=91 && avg<=100)
        cout<<"A1"<<endl;
    else if(avg>=81 && avg<91)
        cout<<"A2"<<endl;
    else if(avg>=71 && avg<81)
        cout<<"B1"<<endl;
    else if(avg>=61 && avg<71)
        cout<<"B2"<<endl;
    else if(avg>=51 && avg<61)
        cout<<"C1"<<endl;
    else if(avg>=41 && avg<51)
        cout<<"C2"<<endl;
    else if(avg>=33 && avg<41)
        cout<<"D"<<endl;
    else if(avg>=21 && avg<33)
        cout<<"E1"<<endl;
    else if(avg>=0 && avg<21)
        cout<<"E2"<<endl;
    else
        cout<<"Invalid!"<<endl;
    return 0;
}
