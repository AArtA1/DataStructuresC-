#ifndef INC_3_LAB_2_0_ADDITIONAL__METHODS_H
#define INC_3_LAB_2_0_ADDITIONAL__METHODS_H


#include <iostream>
#include <cassert>
#include <cmath>
#include <unordered_map>
#include "LN.h"

using std::cout,std::to_string;

template<typename T>
T max(const T &a, const T &b) {
    return a > b ? a : b;
}

template<typename T>
T min(const T &a, const T &b) {
    return a < b ? a : b;
}

class LN;

//todo isNan
std::ostream& operator<<(std::ostream& out,LN value){
    if(value.isZero()){
        out << '0';
        return out;
    }
    if(value.isNegative()){
        out << '-';
    }
    for(int i = value.getSize() - 1; i >= 0; --i){
        out <<  value.getRef()[i];
    }
    return out;
}

//todo isNan
std::string toString(LN value){
    if(value.isZero()){
        return "0";
    }
    std::string str;
    if(value.isNegative()){
        str += '-';
    }
    for(int i = value.getSize() - 1; i >= 0; --i){
        str +=  std::to_string('0' + value.getRef()[i]);
    }
    return str;
}

LN lnPow(int value,int degree){
    LN temp = value;
    for(int i = 0; i < degree;++i){
        temp *= value;
    }
    return temp;
}

const std::unordered_map<char,int> codes{{'1',1},{'2',2},{'3',3},{'4',4}, {'5',5},{'6',6},{'7',7},{'8',8}, {'9',9},
                                         {'a',10},{'A',10},{'b',11}, {'B',11}, {'C',12}, {'C',12},
                                         {'d',13},{'D',13},{'e',14},{'E',14},{'f',15},{'F',15}};


LN toDecimal(std::string str){
    LN result;
    int size = str.size();
    for(int i = 0; i < size;++i){
        result += lnPow(16,size - 1 - i) * codes.at(str[i]);
    }
    return result;
}

std::string toHex(const LN& value){
    std::string hex_str;
    while (!value.isZero()) {
        LN rem = value % 16;  // mod % 16
        if (rem < 10) {
            hex_str.insert(0,hex_str);
        } else {
            hex_str.insert(0, to_string('A' + toString(rem - 10)[0])); // if mod >= 10, append letter
        }
        value /= 16;
    }
    return hex_str;
}




bool intTest()
{
    srand(time(nullptr));
    for(int i = 0; i < 1000; ++i){
        int x = rand()%10000 + 5000;
        int y = rand()%10000 + 5000;
        LN A(x),B(y);
        std::cout << A << " " << B << "\n";
        cout << x << " + " << y << " = " << A + B << "\n";
        cout << x << " - " << y << " = " << A - B << "\n";
        cout << x << " * " << y << " = " << A * B << "\n";
        cout << x << " / " << y << " = " << A / B << "\n";
        cout << x << " % " << y << " = " << A % B << "\n";
        cout << x << " == " << y << " = " << (A == B) << "\n";
        cout << x << " < " << y << " = " << (A < B) << "\n";
        cout << x << " > " << y << " = " << (A > B) << "\n";
        cout << x << " <= " << y << " = " << (A <= B) << "\n";
        cout << x << " >= " << y << " = " << (A >= B) << "\n";
        cout << x << " " << ~A << "\n";

        assert(toString(A + B) == std::to_string(x + y));

        assert(toString(A - B) == std::to_string(x - y));

        assert(toString(A * B) == to_string(x * y));

        assert(toString(A / B) == to_string(x / y));

        //assert((toString(A % B)) == to_string(x % y));

        assert((A == B) == (x == y));

        assert((A < B) == (x < y));

        assert((A > B) == (x > y));

        assert((A <= B) == (x <= y));

        assert((A >= B) == (x >= y));

        assert((~A) == ((int)sqrt(x)));
    }
    return true;
}


#endif //INC_3_LAB_2_0_ADDITIONAL__METHODS_H
