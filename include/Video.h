#ifndef VIDEO_H
#define VIDEO_H
#include "Image.h"

class Video:public Interface {
vector<Image> frames;
int frequency;
public:
    Video()=default;
    Video(vector<Image> ,int );
    void afisare();
};


#endif // VIDEO_H
