#ifndef PUNKT_H
#define PUNKT_H


class Punkt{



    private:
        float x,y;

    public:
        Punkt(float x,float y);

        Punkt(float x);

        void setX(float x);

        void setY(float y);

        void setXY(float x,float y);

        float getX();

        float getY();

        void move2(Punkt p1);

        void move1(float x,float y);





    };




#endif // PUNKT_H
