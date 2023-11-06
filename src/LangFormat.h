#pragma once
#include <string>

struct LangFormat
{
    std::string int_t;
    std::string float_t;
    std::string uint_t;
    std::string ll_t;
    std::string ull_t;
    std::string double_t;
    std::string string_t;
    std::string bool_t;
    std::string null_t;
    std::string var_format;
    std::string array_format;
    std::string structS_format; //Start of struct declaration
    std::string structE_format; //End of struct declaration

    std::string using_vector;
    std::string using_string;

    std::wstring file_extension;

    LangFormat() = default;


    LangFormat(const std::string& int_t, const std::string& float_t, const std::string& uint_t, const std::string& ll_t, const std::string& ull_t, const std::string& double_t, const std::string& string_t, const std::string& bool_t, const std::string& null_t, const std::string& var_format, const std::string& array_format, const std::string& structS_format, const std::string& structE_format, const std::string& using_vector, const std::string& using_string, const std::wstring& file_extension)
        : int_t(int_t), float_t(float_t), uint_t(uint_t), ll_t(ll_t), ull_t(ull_t), double_t(double_t), string_t(string_t), bool_t(bool_t), null_t(null_t), var_format(var_format), array_format(array_format), structS_format(structS_format), structE_format(structE_format), using_vector(using_vector), using_string(using_string), file_extension(file_extension)
    {
    }
};

const LangFormat format_cpp{ "int", "float", "unsigned int", "long long", "unsigned long long", "double", "std::string", "bool", "void*", "{0} {1};", "std::vector<{}>", "struct {} {{\n", "};\n", "#include <vector>\n", "#include <string>\n", L".h" };
const LangFormat format_csharp{ "int", "float", "uint", "long", "ulong", "double", "string", "bool", "empty", "{0} {1};", "List<{}>", "struct {}\n{{\n", "}\n", "using System.Collections.Generic;\n", "", L".cs"};
const LangFormat format_rust{ "i32", "f32", "u32", "i64", "u64", "f64", "String", "bool", "empty", "{1}: {0},", "Vec<{}>", "struct {}\n{{\n", "}\n", "", "", L".rs" };
