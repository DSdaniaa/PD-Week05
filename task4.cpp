#include <iostream>
using namespace std;
void check(int, int, int);
main(){
    int hours, days, workers;
    cout << "Enter hours needed: ";
    cin >> hours;
    cout << "Enter the number of days firm has: ";
    cin >> days;
    cout << "Enter the number of workers: ";
    cin >> workers;
    check(hours, days, workers);
 

}
void check(int hour, int day, int worker){
    int totaldays;
    int training;
    int totalhours;
    int a;
    training=day*(10/100);
    totaldays= day-training;
    totalhours=totaldays*8*worker;
    
    if(totalhours>=hour){
        a=totalhours-hour;
        cout <<"Yes! "<< a << " hours left";

    }
    if(totalhours < hour){
        a=hour-totalhours;
        cout << "Not enough time!" << a << " hours needed";
    }

}