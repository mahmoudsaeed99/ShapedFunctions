#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
class shape{
  private:
      char color;
public:
    void setcolor(char c){
        color=c;
    };
    char getcolor(){
        return color;
    }
};
class threed:public shape{
public:
    double surfaceArea (double r){
    };
    double volume( double r){
    };
    double area(){
    }
};
class twod:public shape{
public:
    double area( double a){
    };
};
class circle:public twod{
public:


    double area(double a){
        return 3.14*a*a;
    }
    char setcolor(char c){
    return c;
    }
};
class Sphere:public threed{
    public:
   double surfaceArea(double r,double h){
        return  (2*3.14*r*r)+(2*3.14*h);

    }
     double volume(double r,double h){
    return 3.14*r*r*h;
    };
    char setcolor(char c){
    return c;
    }
};
class square:public twod{
    public:
double area(double a){
        return a*a;
    }
    char setcolor(char c){
    return c;
    }

};
class  Cylinder:public threed{
    public:

   double surfaceArea(double r){
        return 4*3.14*r*r;
    }
     double volume(double r){
     return 4/3*(3.14*r*r*r);
    };
char setcolor(char c){
    return c;
    }
};
using namespace std;

int main()
{
    while (true){
    cout<<"which shape do you need to calculate the area"<<endl;
    cout<<"1-circle\n2-Sphere\n3-square\n4-Cylinder\n5-end"<<endl;
    int y;
    cin>>y;
    if(y==1){
    circle b1;
    double x;
    cout<<"put the length of the radius"<<endl;
    cin>>x;
    cout<<"put color"<<endl;
    char c;
    cin>>c;
   cout<<"the color is :"<< b1.setcolor(c)<<endl;
    cout<<"the area is: "<<b1.area(x)<<endl;}
    else if(y==2){
    Sphere b2;
     double r,h;
    cout<<"put the Length of radiusa and Height "<<endl;
    cin>>r>>h;
    cout<<"put color"<<endl;
    char c;
    cin>>c;
   cout<<"the color is :"<< b2.setcolor(c)<<endl;
   cout<<"the surfaceArea is:"<<b2.surfaceArea(r,h)<<endl;
    cout<<"the volume is:"<<b2.volume(r,h)<<endl;}
   else if(y==3){
       square b3;
     double x;
    cout<<"put the length of the rib"<<endl;
    cin>>x;
    cout<<"put color"<<endl;
    char c;
    cin>>c;
   cout<<"the color is :"<< b3.setcolor(c)<<endl;
    cout<<b3.area(x)<<endl;}
   else if(y==4){
       Cylinder b4;
     double r;
    cout<<"put the Length of radius "<<endl;
    cin>>r;
    cout<<"put color"<<endl;
    char c;
    cin>>c;
   cout<<"the color is :"<< b4.setcolor(c)<<endl;
    cout<<"the surfaceArea is:"<<b4.surfaceArea(r)<<endl;
    cout<<"the volume is:"<<b4.volume(r)<<endl;
    }
    else{
        return false;
    }
    }
    return 0;
}
