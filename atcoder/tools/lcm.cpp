#include <iostream>
using namespace std;

inline int gcd(int a, int b){
    if(b == 0) return a;
    return  gcd(b, a % b);
}

inline int lcm(int a, int b){
    int g = gcd(a,b);
    return a / g * b;
}
