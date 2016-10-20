#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
    private: int x=0; int y=0; int z=0;
    public:
    vector3d( int x1, int y1, int z1) : x(x1), y(y1), z(z1) {};
    vector3d( int x1, int y1) : x(x1), y(y1) {};
    vector3d( int x1) : x(x1) {};
    vector3d() : {};
    int getx() const { return x; }
    int gety() const { return y; }
    int getz() const { return z; }
    std::ostream &operator<<(std::ostream &stream, const vector3d& a) { return stream << "(" << a.getx() << "," << a.gety() << "," << a.getz() << ")";}
    vector3d operator+(const vector3d &a) {
        int commonx = a.getx() + getx();
        int commony = a.gety() + gety();
        int commonz = a.getz() + getz();
        return vector3d(commonx, commony, commonz);
    }
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;

    // TODO: дописать

};

// TODO: дописать

#endif
