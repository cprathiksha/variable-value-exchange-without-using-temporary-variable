#include<iostream>
using namespace std;
int main(){
    int variable_one, variable_two;
    cout<<"Enter the value for variable_one :";
    cin>>variable_one;
    cout<<"\nEnter the value for variable_two :";
    cin>>variable_two;
    variable_one = variable_one * variable_two; // 1 * 2 = 2
    variable_two = variable_one / variable_two; //2 / 2 = 1
    variable_one = variable_one / variable_two; // 2 / 1 = 2
    cout<<"A :"<<variable_one;
    cout<<"\nB :"<<variable_two;

}