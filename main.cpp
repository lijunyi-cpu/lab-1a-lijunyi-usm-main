/*Lab 1A*/
/*Write the program description*/
/*Name: Write your full-name here*/
/*USM Email: abc123@student.usm.my*/
/*GitHub Username: abc123*/
/*Matric No.: 987654*/

#if __linux__                                           //DO NOT EDIT OR REMOVE
    #define CATCH_CONFIG_RUNNER                         //DO NOT EDIT OR REMOVE
    #include "catch.hpp"                                //DO NOT EDIT OR REMOVE
    int runCatchTests(int argc, char* const argv[]){    //DO NOT EDIT OR REMOVE
        return Catch::Session().run(argc, argv);}       //DO NOT EDIT OR REMOVE
#endif                                                  //DO NOT EDIT OR REMOVE

using namespace std;

#include "main.hpp"                                     //Use this header file for all the functions' declaration (if any)

#include <numbers>
const double pi = 3.14159265358979324;
#include <iostream>
//Add any required header file(s)

int main(int argc, char* const argv[]){                 //DO NOT EDIT OR REMOVE
    #if __linux__                                       //DO NOT EDIT OR REMOVE
        return runCatchTests(argc, argv);               //DO NOT EDIT OR REMOVE
    #endif                                              //DO NOT EDIT OR REMOVE
                  //add and complete your codes after this line
    double length;
    cout << "What is the length of the wire in meter?\n";
    cin >> length;
    double r = getRadius(length);
    double a = getArea(r);
    cout << "Length of the cable(meter) > " << length << "\n";
    cout << "Radius of the circle: " << r << " meter\n";
    cout << "Area of the circle: " << a << " meter squared\n";
    return 0;
}

double getRadius(double A){
    return A/(2*pi);
}

double getArea(double A){
    return pi*(A*A);
}