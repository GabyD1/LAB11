#include "Movie.h"
#include <iostream>
using namespace std;
Movie::Movie(vector<Image> frames,int f,vector<string> actors):Video(frames,f)
{
this->actors=actors;
}

void Movie::afisare()
{
    Video::afisare();
    vector<string>::iterator it;
    for (it=actors.begin();it<actors.end();it++)
        cout<<(*it)<<" ";
        cout<<endl;
}
