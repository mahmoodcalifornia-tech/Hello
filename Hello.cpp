

#include <iostream>
#include <string>
using namespace std;
int totalseconds, seconds, minutes, hours;
int main()
{
    cout<<"enter total seconds";
    cin>>totalseconds;
    
    seconds=totalseconds%60;
    totalseconds-=seconds;
    totalseconds/=60;
    minutes=totalseconds%60;
    totalseconds-=minutes;
    hours=totalseconds/60;

    cout<<"Hours"<<endl;
    cout<<hours<<endl;
    cout<<"minutes"<<endl;
    cout<<minutes<<endl;
    cout<<"seconds"<<endl;
    cout<<seconds<<endl;
    return 0;

}


