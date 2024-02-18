// Customer.h
#pragma once
#define CUSTOMERLIB_VERSION "1.0.0"
#include <string>

class Customer {
public:
    int id;
    std::string name;
    std::string phone;
    std::string email;
    std::string address;
};
