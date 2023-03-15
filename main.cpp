#include <iostream>
#include <string>

#define STD 5 //with ass =5
using namespace std;
//Task 2:
//using string:
int main()
{
    string fname,lname,fullname;
    for (int i=0;i<STD;i++){
    cout <<"\n enter 1st name, then last name" << endl;
    getline(cin,fname); //get from the user
    getline(cin,lname);
    fullname= fname + " " +lname;
    cout << fullname;
    }
    return 0;
}
