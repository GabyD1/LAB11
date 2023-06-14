#ifndef IMAGE_H
#define IMAGE_H
#include "Pixel.h"
#include <vector>
class Image:public Interface{
vector<vector<Pixel>> img;
int  l = 0, c = 0;
public:
    Image() = default;
    Image(vector<vector<Pixel>> ,int ,int );
    void afisare();
};


#endif // IMAGE_H
