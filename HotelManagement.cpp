#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    int Qrooms=0,Qpasta=0, Qburger=0,Qnoodle=0,Qshake=0,Qchicken=0;
    int Srooms=0,Spasta=0,Sburger=0,Snoodle=0,Sshake=0,Schicken=0;
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodle=0,Total_shake=0,Total_chicken=0;
    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodle:";
    cin>>Qnoodle;
    cout<<"\n Quantity of shake:";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll:";
    cin>>Qchicken;
    cout<<"\n\t\t\t Please select from given menu option:";
    cout<<"\n\n1)Rooms";
    cout<<"\n2)Pasta";
    cout<<"\n3)Burger";
    cout<<"\n4)Noodles";
    cout<<"\n5)Shake";
    cout<<"\n5)chicken Rool";
    cout<<"\n5)Information Regarding Sales and Collection";
    cout<<"\n5)Exit";
    cout<<"\n\n Please enter your choice!";
switch(choice){
    case1:
    cout<<"\n\n Enter the number of rooms you want:";
    cin>>quant;
    if(Qrooms-Srooms>=quant){
    Srooms=Srooms+quant;
    Total_rooms=(Total_rooms+quant*12000);
    cout<<"\n\t\t only"<<Qrooms-Srooms<<"Rooms remaining in the hotel";
    break;
    }
}
case2:
    cout<<"Enter the number of Pasta you want:";
    cin>>quant;
    if(Qpasta-Spasta>=quant){
    Spasta=Spasta+quant;
    Total_pasta=(Total_pasta+quant*250);
    cout<<"\n\n\t\t only"<<quant<<"Pasta is the order!";
    }
   else{
    cout<<"\n\t only"<<Qpasta-Spasta<<"Pasta is remaining";
   } 
}