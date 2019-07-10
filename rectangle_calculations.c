/* ###################################################
 * <Author>: Paul Picheca
 * <Data>: 2019-06-19
 * <Purpose>: This is program will display the 
 *            perimeter and area of a rectange
 * 
 * <Remarks>: The program should do the following:
 *            1) Create 4 variables of type double
 *              a) width
 *              b) length
 *              c) perimeter
 *              d) area
 * ################################################### */

#include <stdio.h>
#include "./libs/rectangle.h"

int main( int argc, char *argv[] ) {  
  Rectangle_t rectangle = initialize_Rectangle();

  get("width", &rectangle.input.width);  
  get("height", &rectangle.input.height);  
  calculate_area(&rectangle);
  calculate_perimeter(&rectangle);

  print_rectangle(rectangle);  
  
  return 0;
}