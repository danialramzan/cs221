/**
 * @file RGBAPixel.cpp
 * Implementation of a simple PNG class using RGBAPixels and the lodepng PNG library.
 *
 * @author Danial Ramzan
 */

#ifndef CS221UTIL_RGBAPIXEL_CPP
#define CS221UTIL_RGBAPIXEL_CPP


#include <iostream>
#include <string>
#include <algorithm>
// #include "lodepng/lodepng.h"
#include "RGBAPixel.h"

namespace cs221util {

  RGBAPixel::RGBAPixel() {
    r = 255;
    g = 255;
    b = 255;
    a = 1.0;
  }

  RGBAPixel::RGBAPixel(unsigned int r, unsigned int g, unsigned int b) {
    this->r = r;
    this->g = g;
    this->b = b;
    a = 1.0;
  }

  RGBAPixel::RGBAPixel(unsigned int r, unsigned int g, unsigned int b, double a) {
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
  }
}

#endif
