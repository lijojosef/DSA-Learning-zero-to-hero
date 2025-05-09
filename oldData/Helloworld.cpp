#include<iostream>
#include "Log.h"
// void Log(const char* message){
//     std::cout<<message<<std::endl;
// }

// Use a different file to create Log
// void Log(const char* message);

int main(){
    // This is the simple way to print-->
    // std::cout<< "Hello world!"<<std::endl;
    // std::cin.get();

    // another way to print, 
    // Log("Hello world");

    // Now try to get this Log function from a different file:
    Log("Hello world");
    std::cin.get();
    

    return 0;

}