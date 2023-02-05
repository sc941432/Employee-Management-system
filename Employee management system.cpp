/* basic implement of c++ 
author sahil choudhary
roll no 104032
div 4
date 31/01/2023
*/

#include<iostream>
#include<string>
using namespace std;

class employee
{
    private:
    string firstname;
    string lastname;
    string city;
    int base;
    float TA,DA,HRA,netsal;
    static int count;
   
  
    public:
    static int empid;
    void getdata();
    void calsal();
    void showdata();
    friend void promote(float netsalary);
    
};
void promote(float netsalary)
{
    float bouns;
    if(netsalary>100000)
    {
        cout<<" you got bouns promotion "<<endl;
        bouns=0.10*netsalary;
        cout<<" you got "<<bouns<<" bouns rupees "<<endl;
    }
    else
    cout<<" sorry you don't got bouns "<<endl;
}

int employee::count=1;
int employee::empid=104032;

void employee::getdata()
{
   cout<<" employee id "<<empid<<endl;
   empid++;

    cout<<"enter "<<count<<" employee first name; "<<endl;
    cin>>firstname;

    cout<<"enter last name: "<<endl;
    cin>>lastname;

    cout<<"enter "<<count<<" employee city: "<<endl;
    cin>>city;

    cout<<"enter employee basic salary: "<<endl;
    cin>>base;
    
    count++;
}

void employee::calsal()
{
    TA=0.2*base;
     DA=0.35*base;
     HRA=0.25*base;
    netsal=TA+DA+HRA+base;
}

void employee::showdata()
{
    
    cout<<endl;
    cout<<"Name: "<<firstname<<" "<<lastname<<endl;
    cout<<"employee id: "<<empid<<endl;
    cout<<"employee city: "<<city<<endl;
    cout<<"basic salary: "<<base<<endl;
    cout<<"net salary: "<<netsal<<endl;
    cout<<endl;
    empid++;
    promote(netsal);

}

int main()
{

    cout<<"*********************"<<endl;
    cout<<"Apple Company Employee Information: "<<endl;
    cout<<"*********************"<<endl;
    int n;
    cout<<"enter number of employees in company: "<<endl;
    cin>>n;
    cout<<"enter "<<n<<" employee information: "<<endl;
    employee employ[n]; //object employ array for employee class

    for(int i=0;i<n;i++)
    {
        cout<<endl;
         employ[i].getdata(); 
       employ[i].calsal(); 
           
    }
    employee::empid=employee::empid-n;
    for(int i=0;i<n;i++)
    {
        cout<<"Employee "<<i+1<<" information "<<endl;
        employ[i].showdata();
        cout<<endl;
    }
    return 0;
}
