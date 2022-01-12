#include "SQL-Demo.hpp"

namespace sql_demo
{
    bool dataObject::addHeader(std::string _Str)
    {
        for (auto itr = this->_headers.cbegin(); itr < this->_headers.cend(); itr++)
            if (*itr != _Str)
                return false;
        this->_headers.push_back(_Str);
        return true;
    }
}