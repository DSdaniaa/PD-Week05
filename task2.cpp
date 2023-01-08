#include <iostream>
using namespace std;
float volume(float, float, float, string);
main(){
    float length,width,height;
    string unit;
    float result;
    cout << "Enter length in meters: ";
    cin >> length;
    cout<< "Enter width in meters: ";
    cin >> width;
    cout << "Enter height in meters: ";
    cin >> height;
    cout <<"Enter unit: ";
    cin >> unit;
    result= volume(length, width, height, unit);
    cout << result << " cubic "<< unit;
    

}
float volume(float len, float wid, float hei, string unit){

    float vol;
    vol=(len*wid*hei)/3;
    if(unit=="millimeters"){
        vol=vol*1000000000000;
    }
    if(unit=="centimeters"){
        vol=vol*100000000;
    }
    if(unit=="kilometers"){
        vol=vol/1000000000000;
    }
    
    return vol;

}
