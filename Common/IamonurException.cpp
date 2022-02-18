#include "IamonurException.hpp"

const char* IamonurException::what() const throw()
{ 
    return msg_.c_str(); 
}