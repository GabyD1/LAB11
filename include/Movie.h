#ifndef MOVIE_H
#define MOVIE_H

#include "Video.h"
class Movie: public Video {
vector<string> actors;
public:
    Movie()=default;
    Movie(vector<Image> ,int ,vector<string> );
    void afisare();
};


#endif // MOVIE_H
