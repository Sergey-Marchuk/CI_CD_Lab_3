#include "user_exception.hpp"
const char* UserException::what()const noexcept
{
    return "Custom exception was thrown!";
}
