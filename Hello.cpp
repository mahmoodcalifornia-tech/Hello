
#include <cmath>
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
int total;
string name;
int score;
int counter=0;
string grade;
double average;
int main()
{
cout<<"Enter student fulls name"<<endl;
getline(cin,name);
cout<<"Enter student test scores"<<endl;
while(cin>>score && score != -1){
    total += score;
    counter++;
}
 counter > 0 ? average=static_cast<double>(total)/counter : 0;

switch(static_cast<int>(average)){
    case 90 ... 100:
        grade = "A";
        break;
    case 80 ... 89:
        grade = "B";
        break;
    case 70 ... 79:
        grade = "C";
        break;
    case 60 ... 69:
        grade = "D";
        break;
    default:
        grade = "F";
}

cout<< setw(10) << "Name" << setw(10) << "Average" << setw(10) << "Grade" << endl;;
cout<< setw(10) << name << setw(10) << average << setw(10) << grade << endl;;

return 0;
}


