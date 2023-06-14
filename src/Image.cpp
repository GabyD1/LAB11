#include "Image.h"

Image::Image(vector<vector<Pixel>> img,int l,int c)
{
    this->img=img;
    this->l=l;
    this->c=c;

}

void Image::afisare()
{
    cout<<endl<<"Imaginea de pixeli: "<<endl;
    for (int i=0;i<this->l;i++)
       {

        for(int j=0;j<this->c;j++)
       this-> img[i][j].Pixel::afisare();
       }
       cout<<endl;
}
