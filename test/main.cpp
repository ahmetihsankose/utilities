#include <iostream>
#include "../Logger.h"
#include "../Exception.h"


int main()
{
    LOG_FILE("../test.log");

    LOG_INFO("Hello World!");
    LOG_DEBUG("Hello World!");
    LOG_WARNING("Hello World!");
    LOG_ERROR("Hello World!");

    double a = 1.7;
    float b = 1.7;
    int c = 1;
    
    LOG_INFO("a = %f, b = %f, c = %d", a, b, c);
    LOG_DEBUG("a = %f, b = %f, c = %d", a, b, c);
    LOG_WARNING("a = %f, b = %f, c = %d", a, b, c);
    LOG_ERROR("a = %f, b = %f, c = %d", a, b, c);

    return 0;
} 