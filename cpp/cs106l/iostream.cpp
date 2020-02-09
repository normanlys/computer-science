//
//  main.cpp
//  HelloWorld
//
//  Created by Norman Lim on 30/1/2020.
//  Copyright © 2020 Norman Lim. All rights reserved.
//

#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <sstream>

using namespace std;

int stringToInteger(string str) {
    istringstream iss(str);
    
    int value;
    iss >> value;
    return value;
}

int main(int argc, const char * argv[]) {
    ostringstream oss("test wduiohaksbdiulhiu ");
    
    int val = stringToInteger(argv[1]);
    cout << "You have entered: " << val << endl;
    
    return 0;
}
