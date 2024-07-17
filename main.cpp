#include <iostream>
// This simulator outputs to command line only
// use of basic human psychology is implemented
// list of psychological indexes incorporated

int add1( int num ){

    return num + 1;
}

int main(){
    int thisint = add1(3);
    std::cout << thisint << std::endl;
    return 0;
}
