#include <iostream>
#include <vector>
#include <Interface.h>
#include <Pixel.h>
#include <Image.h>
#include <Video.h>
#include <Movie.h>

using namespace std;

void sortare(vector<Interface *> v,int n)
{
    for (int i=0;i<n-1;i++)
    for (int j=i+1;j<n;j++)
        if(v[i].medie()>v[j].medie())
    {
        //swap(v[i],v[j]);
    }
}
int main()
{   int i,j,l=3,c=4;
    vector<vector<Pixel>> img(l,vector<Pixel>(c) );

    for (i=0;i<3;i++)
        for(j=0;j<4;j++)
        img[i][j]=Pixel(i,j,i+j);

    int f=5;
    vector<Image> vid(f);
    for (i=0;i<f;i++)
        vid[i]= Image(img, l, c);
    vector<string> actors(2);
    actors[0]="Alex";
    actors[1]="Gigel";
    vector<Interface *> v(4);
    v[0] = new Pixel(1, 2, 3);
    v[1] = new Image(img, l, c);
    v[2] = new Video(vid,f);
    v[3] = new Movie(vid, f, actors);
    for (i=0;i<4;i++)
        v[i]->afisare();
    return 0;
}
