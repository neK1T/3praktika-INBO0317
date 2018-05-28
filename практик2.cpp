#include <iostream>
#include <cstring>
using namespace std;
 
class automobile {
public:
    string power;
   string bundling;
    string brand;
    int the_year_of_issue;
    int value;
 void set()
{
    cout<<"enter power:";
    cin>>power;
    cout<<"enter bundling:";
    cin>>bundling;
    cout<<"enter brand:";
    cin>>brand;
    cout<<"enter the_year_of_issue:";
    cin>>the_year_of_issue;
    cout<<"enter value:";
    cin>>value;
}
void show()
{
    cout<<"power:"<<power<<endl;
    cout<<"bundling:"<<bundling<<endl;
    cout<<"brand:"<<brand<<endl;
    cout<<"the_year_of_issue:"<<the_year_of_issue<<endl;
    cout<<"value:"<<value<<endl;
}
 
 
};
 
 
int main()
{
	setlocale (0,"rus");
	automobile n1;
 
    n1.set();
    n1.show();


    system("pause");
    return 0;
}
