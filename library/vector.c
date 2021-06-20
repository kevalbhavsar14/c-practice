/*
Date   : Date of creation
Aim    : Aim of the program
Source : Source of the program
*/
#include <stdio.h>
#include <math.h>
#include "vector.h"

vector createVector()
{
    vector v;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    return v;
}

vector createVector2D(float x, float y)
{
    vector v;
    v.x = x;
    v.y = y;
    v.z = 0;
    return v;
}

vector createVector3D(float x, float y, float z)
{
    vector v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

void printVector(vector v)
{
    printf("vector( %5.2f, %5.2f, %5.2f)", v.x, v.y, v.z);
}

vector add(vector v1, vector v2)
{
    vector v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    v3.z = v1.z + v2.z;
    return v3;
}

vector subtract(vector v1, vector v2)
{
    vector v3;
    v3.x = v1.x - v2.x;
    v3.y = v1.y - v2.y;
    v3.z = v1.z - v2.z;
    return v3;
}

float dotProduct(vector v1, vector v2)
{
    float product;
    product = (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);
    return product;
}

vector crossProduct(vector v1, vector v2)
{
    vector v3;
    v3.x = v1.y * v2.z - v1.z * v2.y;
    v3.y = v1.z * v2.x - v1.x * v2.z;
    v3.z = v1.x * v2.y - v1.y * v2.x;
    return v3;
}

vector addScaler(vector v1, float scaler)
{
    vector v2;
    v2.x = v1.x + scaler;
    v2.y = v1.y + scaler;
    v2.z = v1.z + scaler;
    return v2;
}

vector subtractScaler(vector v1, float scaler)
{
    vector v2;
    v2.x = v1.x - scaler;
    v2.y = v1.y - scaler;
    v2.z = v1.z - scaler;
    return v2;
}

vector multiplyScaler(vector v1, float scaler)
{
    vector v2;
    v2.x = v1.x * scaler;
    v2.y = v1.y * scaler;
    v2.z = v1.z * scaler;
    return v2;
}

vector divideScaler(vector v1, float scaler)
{
    vector v2;
    v2.x = v1.x / scaler;
    v2.y = v1.y / scaler;
    v2.z = v1.z / scaler;
    return v2;
}

vector scale(vector v1, float factor)
{
    vector v2;
    v2.x = v1.x * factor;
    v2.y = v1.y * factor;
    v2.z = v1.z * factor;
    return v2;
}

float magnitude(vector v)
{
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

float angle(vector v1, vector v2)
{
    return acos(dotProduct(v1, v2) / (magnitude(v1) * magnitude(v2)));
}

vector normalize(vector v)
{
    return divideScaler(v, magnitude(v));
}