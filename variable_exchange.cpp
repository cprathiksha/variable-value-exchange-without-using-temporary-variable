#include<iostream>
using namespace std;
int main(){
    int variable_one, variable_two;
    cout<<"Enter the value for variable_one :";
    cin>>variable_one;
    cout<<"\nEnter the value for variable_two :";
    cin>>variable_two;
    variable_one = variable_one * variable_two;
    variable_two = variable_one / variable_two; 
    variable_one = variable_one / variable_two; 
    cout<<"A :"<<variable_one;
    cout<<endl<<"B :"<<variable_two;

}
