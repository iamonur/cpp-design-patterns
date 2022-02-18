#include <exception>
#include <string>

class IamonurException : public std::exception{
    std::string msg_;

public:
    virtual const char* what() const throw();

    explicit IamonurException(const std::string& msg) throw()
    : msg_(msg)
    {}

    virtual ~IamonurException() throw()
    {}
};