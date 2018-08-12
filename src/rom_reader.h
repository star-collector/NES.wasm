#pragma once
#include <stdio.h>

class ROMReader
{
    public:
        bool clear();
        uint8_t* read();
    private:
        const char m_filename[5] = "/rom";
        bool m_verify(uint8_t* t_file);
};