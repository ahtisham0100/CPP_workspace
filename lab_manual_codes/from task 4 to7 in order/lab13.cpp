#include <iostream>
using namespace std;

int main() {
    int installment_months;
    float vehicle_price;
    float down_payment;
    float payable_amount;
    float new_price;
    float monthly_installment;

    cout<<"Enter the price of car: "<<endl;
    cin>>vehicle_price;
    cout<<"Enter down payment: "<<endl;
    cin>>down_payment;
    cout<<"How many months do you need to lease the car for: "<<endl;
    cin>>installment_months;

    payable_amount=vehicle_price-down_payment;
    if(installment_months<-12){
        new_price=payable_amount+(payable_amount*0.10);
        monthly_installment=new_price/installment_months;
        cout<<"Monthly installment is: "<<monthly_installment;
    }
    else if(installment_months>12 && installment_months<=24){
        new_price=payable_amount+(payable_amount*0.15);
        monthly_installment=new_price/installment_months;
        cout<<"Monthly installment is: "<<monthly_installment;
    }
    else if(installment_months>24 && installment_months<=36){
        new_price=payable_amount+(payable_amount*0.20);
        monthly_installment=new_price/installment_months;
        cout<<"Monthly installment is: "<<monthly_installment;
    }
    else if(installment_months>36 && installment_months<=48){
        new_price=payable_amount+(payable_amount*0.25);
        monthly_installment=new_price/installment_months;
        cout<<"Monthly installment is: "<<monthly_installment;
    }
    else if(installment_months>48 && installment_months<=60){
        new_price=payable_amount+(payable_amount*0.30);
        monthly_installment=new_price/installment_months;
        cout<<"Monthly installment is: "<<monthly_installment;
    }
    else{
        cout<<"Invalid Input!"<<endl;
    }
}