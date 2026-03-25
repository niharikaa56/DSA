// 1.ATM Mini System
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int balance;
    // cout<<"enter balance";
    // cin>>balance;

    // int withdraw;
    // cout<<"enter withdraw amount";
    // cin>>withdraw;
    // if(withdraw>balance)
    // {
    //     cout<<"isuffiecient balance";
    // }
    // else if (withdraw%100!=0)
    // {
    //     cout<<"Invalid amount";
    // }
    // else{
    //    int remaining_balance =balance-withdraw;
    //    cout<<remaining_balance;
    // }

    // 2. Triangle Validity + Type
    // int side1, side2, side3;
    // cin >> side1 >> side2 >> side3;
    // if (side1 == side2 == side3)
    // {
    //     cout << "equilateral";
    // }
    // else if (side1==side2 || side2==side3 || side3==side1)
    // {
    //     cout << "isosceles";
    // }
    // else{
    //     cout << "scalane";
    // }
    

    // 3.Electricity Bill
    int unit;
    cin>>unit;
    if(unit>=0 && unit<=100)
    {
        cout<< "5 rupees per unit";
    }
    else if(unit>=101 && unit<=200)
    {
        cout<< "7 rupees per unit";
    }
   else if(unit>=200)
    {
        cout<< "10 rupees per unit";
    }
   
}