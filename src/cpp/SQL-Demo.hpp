#include <iostream>
#include <fstream>
#include <vector>
#include <string>

namespace sql_demo
{
    class dataObject
    {
    private:
        std::vector<std::string> _headers;
    public:
        /// @brief Add a column to the end of the object.
        /// @param _Str The header's unique name.
        /// @return Whether success(, false if already exists).
        /// @remark Untested!
        bool addHeader(std::string _Str);
    };
}