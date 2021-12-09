//
//  func.hpp
//  algorizm
//
//  Created by Taguwa on 2021/12/09.
//

#ifndef func_h
#define func_h

#include <iostream>
#include <fstream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>

#include <string.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <random>
#include <regex>

using namespace std;

class Objective{
public:
    string data_string;
    double data_double;
    int data_int;
    vector<int> data_vector_int;
    Objective();
};

class Fraction : public Objective{
public:
    void getName();
};

Objective::Objective(){
    this->data_string = "Null";
    this->data_double = 0.0;
    this->data_int = 0;
    this->data_vector_int = { 0 , 0 , 0 };
}

void Fraction::getName(){
    cout << "分数機能" << this->data_int << endl;
}

#endif /* func_h */
