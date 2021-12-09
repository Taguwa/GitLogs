#include <iostream>
#include <fstream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
//#include <opencv2/opencv.hpp>

#include <string.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <random>
#include <regex>

#include "func.hpp"

//#include <bits/stdc++.h>

#define MOD 1000000007
#define rng(i, a, b) for(int i = int(a); i < int(b); i++)
#define rep(i, b) rng(i, 0, b)
#define rlg(i, a, b) for(int i = int(a); i <= int(b); i++)
#define rlp(i, b) rlg(i, 0, b)
#define pb push_back
#define eb emplace_back
#define bg begin()
#define ed end()

using namespace std;
using ll = long long;
using std::endl;
using std::ofstream;

double func(double x) {
    return sin(x);
}


double Montecarlo_Method(double a, double b, int n){
    double ans = 0.0;
    random_device __SUPER_MERSENNE_TWISTER_ENGINE__;
    mt19937 mt(__SUPER_MERSENNE_TWISTER_ENGINE__());
    
   
    return ans;
}

int main() {
    int n = 100;
    double a = 0.0;
    double b = M_PI;
    double solution = 2.0;
    random_device __SUPER_MERSENNE_TWISTER_ENGINE__;
    mt19937 mt(__SUPER_MERSENNE_TWISTER_ENGINE__());
    uint32_t result = mt();
    cout << result;
   
    for(int i = 0; i < 4 ; i++){
        double ans =  Montecarlo_Method(a, b, n);
        cout << ans << endl;
        cout << abs( solution - ans ) << endl;
        n *= 10 * 10;
    }
    
    return 0;
}
