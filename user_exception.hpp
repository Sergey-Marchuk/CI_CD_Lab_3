#pragma once
#include <exception>
class UserException: public std::exception
{
public:
    const char* what() const noexcept override;
};
