#include <iostream>
#include "../Logger.h"
#include "../RingBuffer.h"
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

    if (Logger::getInstance().getLogBuffer().at(3) == Logger::getInstance().getLogBuffer()[3])
    {
        std::cout << "[SUCCESFULL] at and [] are the same" << std::endl;
    }
    else
    {
        std::cout << "[FAILED] at and [] are not the same" << std::endl;
    }

    if (Logger::getInstance().getLogBuffer().front() == Logger::getInstance().getLogBuffer()[0])
    {
        std::cout << "[SUCCESFULL] front and [] are the same" << std::endl;
    }
    else
    {
        std::cout << "[FAILED] front and [] are not the same" << std::endl;
    }

    if (Logger::getInstance().getLogBuffer().back() == Logger::getInstance().getLogBuffer()[Logger::getInstance().getLogBuffer().size() - 1])
    {
        std::cout << "[SUCCESFULL] back and [] are the same" << std::endl;
    }
    else
    {
        std::cout << "[FAILED] back and [] are not the same" << std::endl;
    }

    RingBuffer<int, 7> buffer;
    for (int i = 0; i < 37; i++)
    {
        buffer.push_back(i);
    }

    if (buffer.size() == 7)
    {
        std::cout << "[SUCCESFULL] buffer size is 7" << std::endl;
    }
    else
    {
        std::cout << "[FAILED] buffer size is not 7" << std::endl;
        std::cout << "buffer size: " << buffer.size() << std::endl;
    }

    if (buffer.at(3) == buffer[3])
    {
        std::cout << "[SUCCESFULL] at and [] are the same" << std::endl;
    }
    else
    {
        std::cout << "[FAILED] at and [] are not the same" << std::endl;
    }

    if (buffer.front() == buffer[0])
    {
        std::cout << "[SUCCESFULL] front and [] are the same" << std::endl;
    }
    else
    {
        std::cout << "[FAILED] front and [] are not the same" << std::endl;
    }

    if (buffer.back() == buffer[buffer.size() - 1])
    {
        std::cout << "[SUCCESFULL] back and [] are the same" << std::endl;
        std::cout << "back: " << buffer.back() << std::endl;
        std::cout << "[]: " << buffer[buffer.size() - 1] << std::endl;
        std::cout << "buffer size: " << buffer.size() << std::endl;
    }
    else
    {
        std::cout << "[FAILED] back and [] are not the same" << std::endl;
        std::cout << "back: " << buffer.back() << std::endl;
        std::cout << "[]: " << buffer[buffer.size() - 1] << std::endl;
        std::cout << "buffer size: " << buffer.size() << std::endl;
    }

    return 0;
}