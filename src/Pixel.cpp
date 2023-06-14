#include "Pixel.h"


Pixel::Pixel(uint8_t R,uint8_t G, uint8_t B)
{
    this->R=R;
    this->G=G;
    this->B=B;
}

void Pixel::afisare()
{
    cout<<"RGB: "<<R<<" "<<G<<" "<<B<<" ";

}
