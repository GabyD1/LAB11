#ifndef PIXEL_H
#define PIXEL_H
#include <iostream>
#include "Interface.h"
using namespace std;


class Pixel:public Interface
{
    uint8_t R, G, B;
public:
    Pixel()=default;
    Pixel(uint8_t,uint8_t,uint8_t );
    void afisare();
};


#endif // PIXEL_H
