#ifndef IO_HPP
#define IO_HPP
#include <stdint.h>

class IO
{
public:
    void outb(uint16_t port, uint8_t value);
    uint8_t inb(uint16_t port);
    uint16_t inw(uint16_t port);
};

#endif