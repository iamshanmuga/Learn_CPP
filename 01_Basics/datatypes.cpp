/**************************************************************************************************************/
/* This program demonstrates the declaration and initialization of variables with different data types in C++ */
/* It also prints the range of values that can be stored in each data type using the numeric_limits library.  */
/**************************************************************************************************************/

#include <iostream>           // Include the iostream library for input/output operations
#include <limits>             // Include the limits library for numeric limits of data types
#include <string>             // Include the string library for using string data type

int main() {

    std::cout << " === Data Types in C++ ===" << std::endl;

    // Variable declaration and initialization
    int var1 = 25;                                                  // Integer (used to store whole numbers)
    float var2 = 3.14f;                                             // Float (used for single-precision floating-point numbers)
    double var3 = 9.81;                                             // Double (used for double-precision floating-point numbers)
    char var4 = 'A';                                                // Character (used to store a single character)
    bool var5 = true;                                               // Boolean (used to store true or false values)
    std::string var6 = "Alpha Dog";                                 // String (used to store a sequence of characters)
    char var7[] = "Hello";                                          // Character array (used to store a string of characters)
    wchar_t var8 = L'B';                                            // Wide character (used to store a single wide character, useful for internationalization)
    long var9 = 1234567890;                                         // Long integer (used to store larger whole numbers than int)
    unsigned int var10 = 3000000000;                                // Unsigned integer (used to store non-negative whole numbers, larger than int)
    short var11 = 32767;                                            // Short integer (used to store smaller whole numbers than int)
    long long var12 = 9223372036854775807;                          // Long long integer (used to store very large whole numbers)
    unsigned long long var13 = 18446744073709551615ULL;             // Unsigned long long integer (used to store very large non-negative whole numbers)
    long double var14 = 3.141592653589793238462643383279502884L;    // Long double (used for extended precision floating-point numbers)
    signed char var15 = -128;                                       // Signed character (used to store a single character with a sign, can be negative or positive)

    // Print the variables values and their data type maximum sizes to the console
    std::cout << "var1 (int): " << var1 << " (Size: " << sizeof(var1) << " bytes, Max: " << std::numeric_limits<int>::max() << ")" << std::endl;
    std::cout << "var2 (float): " << var2 << " (Size: " << sizeof(var2) << " bytes, Max: " << std::numeric_limits<float>::max() << ")" << std::endl;
    std::cout << "var3 (double): " << var3 << " (Size: " << sizeof(var3) << " bytes, Max: " << std::numeric_limits<double>::max() << ")" << std::endl;
    std::cout << "var4 (char): " << var4 << " (Size: " << sizeof(var4) << " bytes, Max: " << std::numeric_limits<char>::max() << ")" << std::endl;
    std::cout << "var5 (bool): " << std::boolalpha << var5 << " (Size: " << sizeof(var5) << " bytes)" << std::endl;
    std::cout << "var6 (string): " << var6 << " (Size: " << sizeof(var6) << " bytes)" << std::endl;
    std::cout << "var7 (char array): " << var7 << " (Size: " << sizeof(var7) << " bytes)" << std::endl;
    std::cout << "var8 (wchar_t): " << var8 << " (Size: " << sizeof(var8) << " bytes, Max: " << std::numeric_limits<wchar_t>::max() << ")" << std::endl;
    std::cout << "var9 (long): " << var9 << " (Size: " << sizeof(var9) << " bytes, Max: " << std::numeric_limits<long>::max() << ")" << std::endl;
    std::cout << "var10 (unsigned int): " << var10 << " (Size: " << sizeof(var10) << " bytes, Max: " << std::numeric_limits<unsigned int>::max() << ")" << std::endl;
    std::cout << "var11 (short): " << var11 << " (Size: " << sizeof(var11) << " bytes, Max: " << std::numeric_limits<short>::max() << ")" << std::endl;
    std::cout << "var12 (long long): " << var12 << " (Size: " << sizeof(var12) << " bytes, Max: " << std::numeric_limits<long long>::max() << ")" << std::endl;
    std::cout << "var13 (unsigned long long): " << var13 << " (Size: " << sizeof(var13) << " bytes, Max: " << std::numeric_limits<unsigned long long>::max() << ")" << std::endl;
    std::cout << "var14 (long double): " << var14 << " (Size: " << sizeof(var14) << " bytes, Max: " << std::numeric_limits<long double>::max() << ")" << std::endl;
    std::cout << "var15 (signed char): " << static_cast<int>(var15) << " (Size: " << sizeof(var15) << " bytes, Max: " << std::numeric_limits<signed char>::max() << ")" << std::endl;
}

// Note:
// sizeof() returns the size of the variable in bytes.
// std::numeric_limits<T>::max() returns the maximum value that can be stored in a variable of type T.
// The reason why signed char is cast to int when printing is that it can hold negative values, and printing it directly may not show the intended value. The cast ensures that the output is a numeric representation of the signed character's value.
// We can learn more about casting in C++ in future chapters, but for now, it's important to understand that casting is used to convert one data type to another, especially when dealing with types that can hold negative values like signed char.