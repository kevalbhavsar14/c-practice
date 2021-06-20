/*
Vector library
contains: vector data type and related functions
*/

#pragma once

typedef struct vector
{
    float x;
    float y;
    float z;
} vector;

vector createVector();
vector createVector2D(float, float);
vector createVector3D(float, float, float);

void printVector(vector);

vector add(vector, vector);
vector subtract(vector, vector);
float dotProduct(vector, vector);
vector crossProduct(vector, vector);

vector addScaler(vector, float);
vector subtractScaler(vector, float);
vector multiplyScaler(vector, float);
vector divideScaler(vector, float);

vector scale(vector, float);

float magnitude(vector);

float angle(vector, vector);

vector normalize(vector);