#ifndef _SHAPE_H__
#define _SHAPE_H__

class Shape
{
public:
    virtual ~Shape(){}
    virtual void getArea()=0;
    virtual void loadData()=0;

};

#endif

