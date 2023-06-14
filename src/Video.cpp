#include "Video.h"
 Video::Video(vector<Image> frames,int f)
 {
     this->frames=frames;
     this->frequency=f;
 }

 void Video::afisare()
 {
     cout<<"Imaginile din video:"<<endl;
     for (int i=0;i<this->frequency;i++)
        this->frames[i].Image::afisare();
 }
