#include <iostream>
#pragma once
#include <exception>
using namespace std;
class bad_range : public exception
{
public:
    virtual const char* what() const noexcept override   
    {
        return "ERROR: bad_range!";
    }
};


