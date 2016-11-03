#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
    public:
    int x=0; int y=0; int z=0;
    vector3d( int x1, int y1, int z1) : x(x1), y(y1), z(z1) {};
    vector3d( int x1, int y1) : x(x1), y(y1) {};
    vector3d( int x1) : x(x1) {};
    vector3d() : {};
    int getx() const { return x; }
    int gety() const { return y; }
    int getz() const { return z; }
    vector3d operator+(const vector3d &a) {
        int commonx = a.getx() + getx();
        int commony = a.gety() + gety();
        int commonz = a.getz() + getz();
        return vector3d(commonx, commony, commonz);
    }
    vector3d operator-(const vector3d &a) {
        int commonx = a.getx() - getx();
        int commony = a.gety() - gety();
        int commonz = a.getz() - getz();
        return vector3d(commonx, commony, commonz);
    }
    vector3d operator^(const vector3d &a) {
        int commonx = a.gety() * getz() - a.getz() * gety();
        int commony = a.getz() * getx() - a.getx() * getz();
        int commonz = a.getx() * gety() - a.gety() * getx();
        return vector3d(commonx, commony, commonz);
    }
    int operator*(const vector3d &a) {
        int commonx = a.getx() * getx();
        int commony = a.gety() * gety();
        int commonz = a.getz() * getz();
        return commonx + commony + commonz;
    }
    vector3d operator*(const int a) {
        int commonx = a * getx();
        int commony = a * gety();
        int commonz = a * getz();
        return commonx + commony + commonz;
    }





    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;

    // TODO: дописать

};
  std::ostream &operator<<(std::ostream &stream, const vector3d& a) { return stream << "{" << a.getx() << "," << a.gety() << "," << a.getz() << "}";}
// TODO: дописать

#endif
