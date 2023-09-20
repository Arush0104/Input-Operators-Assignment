#include <iostream>
using namespace std;
int main(){
    float pi=3.14,radius,height,volume;
    cout<<"Enter the height"<<endl;
    cin>>height;
    cout<<"Enter the radius"<<endl;
    cin>>radius;
    volume = pi*radius*radius*height;
    cout<<volume<<endl;
}
