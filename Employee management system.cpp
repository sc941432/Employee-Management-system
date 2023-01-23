/* basic implement of cpp
author Sahil Choudhary
roll no 104032
div 4
date 23/01/23 */

#include<iostream>
#include<string>
using namespace std;

class employee
{
    private:
        string firstname;
        string lastname;
        string city;
        int employeeid;
        float DA,TA,base,HRA,netsalary;

    public:
         void getdata();
         void showdata();
         void calsalary();
};
int j=1;
void employee::getdata()
{
    
    cout<<"enter "<<j<<" employee name: "<<endl;
    cin>>firstname;

    cout<<"enter employee last name: "<<endl;
    cin>>lastname;

    cout<<"enter "<<j<<" employee id: "<<endl;
    cin>>employeeid;

    cout<<"enter "<<j<<" employee's city "<<endl;
    cin>>city;

    cout<<"enter your basic salary: "<<endl;
    cin>>base;
    j++;
}

void employee::calsalary()
{
    TA=0.2*base;
    DA=0.35*base;
    HRA=0.25*base;
    netsalary=base+TA+DA+HRA; 
}

void employee::showdata()
{
    cout<<endl;
    cout<<"employee details given below: "<<endl;
    cout<<"Name of employee: "<<firstname<<" "<<lastname<<endl;
    cout<<"Employee ID: "<<employeeid<<endl;
    cout<<"city: "<<city<<endl;
    cout<<"basic salary: "<<base<<endl;
    cout<<"net salary : "<<netsalary<<endl;
}

int main()
{
    int n;
    cout<<"****************************************"<<endl;
    cout<<"Microsoft Tech company employee list: "<<endl;

    cout<<"Enter number of employee in company: "<<endl;
    cin>>n;
    employee employ[n];

    for(int i=0;i<n;i++)
    {
        employ[i].getdata();
        employ[i].calsalary();       
    }

    for(int i=0;i<n;i++)
    {
        employ[i].showdata();
    }
        
    return 0;
}