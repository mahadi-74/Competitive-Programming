#include<iostream>
using namespace std;
int main()
{
    int phy,chem,ict,total,roll;
    float percentage;
    char name[20],div[10];
    cout<<"Enter roll No=";
    cin>>roll;
    cout<<"Name of the student=";
    cin>>name;
    cout<<"Input phy chem & ict number="<<endl;
    cin>>phy>>chem>>ict;
    total=phy+chem+ict;
    percentage=total/3;
    if(percentage>=80){
        cout<<"First"<<endl<<"Total= "<<total<<endl<<"percentage= "<<percentage;
        }
    else if(percentage<=79 && percentage>=60){
        cout<<"second"<<endl<<"Total= "<<total<<endl<<"percentage= "<<percentage;
        }
    else if(percentage<=59 && percentage>=36){
        cout<<"Third"<<endl<<"Total= "<<total<<endl<<"percentage= "<<percentage;
        }
    else{
        cout<<"Fail";
    }
    return 0;
}


