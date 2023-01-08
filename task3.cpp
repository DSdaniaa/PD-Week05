#include <iostream>
using namespace std;
float taxcalculate(char, float);
main(){
 float price;
 char type;
 float tax;
 float final;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter type M,E,S,V or T: ";
    cin >> type;
    tax= taxcalculate(type, price);
    final =tax + price;
    cout << "The final price on a vehicle of type " << type << " after adding the tax is $" << final;
}
float taxcalculate(char type, float price){
    float taxrate;
    float tax1;
    float tax2;
    if(type=='M'){
        taxrate=6.0;
    }
    if(type=='E'){
        taxrate=8.0;
    }
    if(type=='S'){
        taxrate=10.0;
    }
    if(type=='V'){
        taxrate=12.0;
    }
    if(type=='T'){
        taxrate=15.0;
    }
    tax1=taxrate/100;
    tax2=price*tax1;
    return tax2;
}