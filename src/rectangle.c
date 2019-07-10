#include "../libs/rectangle.h"
const char *PLEASE_ENTER_VALUE = "Please enter a value for";

Rectangle_t initialize_Rectangle() {
  return (Rectangle_t) {
    (Inputs_t) { 
      .width = 0.00,
      .height = 0.00
    },
    (Calculations_t) {
      .perimeter = 0.00,
      .area = 0.00
    }
  };
}

void get( const char *member, double *value  ) {
  printf( "\n%s %s:", PLEASE_ENTER_VALUE, member );
  scanf( "%le", value );  
}

void calculate_perimeter( Rectangle_t *rectangle ) {
  rectangle->result.perimeter = 2 * (rectangle->input.width + rectangle->input.height);  
}

void calculate_area( Rectangle_t *rectangle ) {
  rectangle->result.area = rectangle->input.width * rectangle->input.height;    
}

void print_rectangle( Rectangle_t rectangle ) {
  printf( "\n<Rectangle> -> {\n\twidth: %12.2f meters\n\theight %12.2f meters\n\tperimeter: %8.2f meters\n\tarea: %13.2f meters\n}\n", 
    rectangle.input.width, 
    rectangle.input.height, 
    rectangle.result.perimeter, 
    rectangle.result.area
  );
}