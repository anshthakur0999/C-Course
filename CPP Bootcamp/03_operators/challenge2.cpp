/*Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the += assignment operator. Display the updated total.*/

#include<iostream>
using namespace std;

int main(){

    int teaBags;
    cout<<"Enter the number of tea bags you have:";
    cin>>teaBags;

    if(teaBags<20 && teaBags>=0){
        teaBags+=10;
    }
    cout<<"Updated Total:"<<teaBags<<endl;


    return 0;
}