/*
#include <iostream>
using namespace std;
int main() {
    int intNumber=20;
    float floatNumber=3.1415;
    double doubleNumber=45.1234;
    bool boolean=true;
    char charName='A';
    cout<<"Integer:"<<intNumber<<" size is "
        <<sizeof(intNumber)<<endl;
    cout<<"Float:"<<floatNumber<<" size is "
        <<sizeof(floatNumber)<<endl;
    return 0;
}
*/
#include <iostream>
using namespace std;
int main() {
    int a=189;
    char b='B';
    float num1=float(a)/4;
    int num2=int(b);
    float num3=(float(a)+b)/7;
    char num4=a/3-7+b;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    cout<<num4<<endl;
    return 0;
}
