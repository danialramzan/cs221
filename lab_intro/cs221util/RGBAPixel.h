/**
 * @file RGBAPixel.h
 *
 * @author Danial Ramzan
 */

#ifndef CS221UTIL_RGBAPixel_H
#define CS221UTIL_RGBAPixel_H

#include <string>
#include <vector>

using namespace std;

namespace cs221util {
  class RGBAPixel {
  public:

  unsigned int r;
  unsigned int g;
  unsigned int b;
  double a;


    /**
      * Creates an empty RGBAPixel set to white with alpha 1.
      */
    RGBAPixel();

    /**
      * Creates a RGBAPixel with the specified R, G, and B color vals with alpha = 1
      * 
      * @param r Red decimal value of the pixel (0-255)
      * @param g Green decimal value of the pixel (0-255)
      * @param b Blue decimal value of the pixel (0-255)
      */
    RGBAPixel(unsigned int r, unsigned int g, unsigned int b);  


    /**
      * Creates a RGBAPixel with the specified R, G, and B color vals AND alpha from 0-1
      * 
      * @param r Red decimal value of the pixel (0-255)
      * @param g Green decimal value of the pixel (0-255)
      * @param b Blue decimal value of the pixel (0-255)
      * @param a Double value to represent opacity where 0-100% is represented by [0,100].
      */
    RGBAPixel(unsigned int r, unsigned int g, unsigned int b, double a);  

    // /**
    //   * Copy constructor: creates a new RGBAPixel image that is a copy of
    //   * another.
    //   * @param other RGBAPixel to be copied.
    //   */
    // RGBAPixel(RGBAPixel const & other);
    // /**
    //   * Destructor: frees all memory associated with a given RGBAPixel object.
    //   * Invoked by the system.
    //   */
    // ~RGBAPixel();
    //   /**
    //     * Assignment operator for setting two RGBAPixels equal to one another.
    //     * @param other Image to copy into the current image.
    //     * @return The current image for assignment chaining.
    //     */
    //   RGBAPixel const & operator= (RGBAPixel const & other);

    //   /**
    //     * Equality operator: checks if two images are the same.
    //     * @param other Image to be checked.
    //     * @return Whether the current image is equal to the other image.
    //     */
    //   bool operator== (RGBAPixel const & other) const;

    //   /**
    //     * Inequality operator: checks if two images are different.
    //     * @param other Image to be checked.
    //     * @return Whether the current image differs from the other image.
    //     */
    //   bool operator!= (RGBAPixel const & other) const;


    //   /**
    //     * Reads in a RGBAPixel image from a file.
    //     * Overwrites any current image content in the RGBAPixel.
    //     * @param fileName Name of the file to be read from.
    //     * @return true, if the image was successfully read and loaded.
    //     */
    //   bool readFromFile(string const & fileName);

    //   /**
    //     * Writes a RGBAPixel image to a file.
    //     * @param fileName Name of the file to be written.
    //     * @return true, if the image was successfully written.
    //     */
    //   bool writeToFile(string const & fileName);

    //   /**
    //     * Pixel access operator. Gets a pointer to the pixel at the given
    //     * coordinates in the image. (0,0) is the upper left corner.
    //     * This pointer allows the image to be changed.
    //     * @param x X-coordinate for the pixel pointer to be grabbed from.
    //     * @param y Y-coordinate for the pixel pointer to be grabbed from.
    //     * @return A pointer to the pixel at the given coordinates.
    //     */
    //   RGBAPixel * getPixel(unsigned int x, unsigned int y);

    //   /**
    //     * Gets the width of this image.
    //     * @return Width of the image.
    //     */
    //   unsigned int width() const;

    //   /**
    //     * Gets the height of this image.
    //     * @return Height of the image.
    //     */
    //   unsigned int height() const;

    //   /**
    //     * Resizes the image to the given coordinates. Attempts to preserve
    //     * existing pixel data in the image when doing so, but will crop if
    //     * necessary. No pixel interpolation is done.
    //     * @param newWidth New width of the image.
    //     * @param newHeight New height of the image.
    //     */
    //   void resize(unsigned int newWidth, unsigned int newHeight);
      
    // private:
    //   unsigned int width_;            /*< Width of the image */
    //   unsigned int height_;           /*< Height of the image */
    //   RGBAPixel *imageData_;          /*< Array of pixels */

    //   /**
    //    * Copeies the contents of `other` to self
    //    */
    //    void _copy(RGBAPixel const & other);
    };
}

#endif
