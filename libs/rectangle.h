#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include <stdio.h>

typedef struct _Inputs_t {
  double width;
  double height;
} Inputs_t; 

typedef struct _Calculations_t {
  double perimeter;
  double area;
} Calculations_t; 

typedef struct _Rectangle_t {
  Inputs_t input;
  Calculations_t result;
} Rectangle_t;

Rectangle_t initialize_Rectangle();
void get( const char *member, double *value  );
void calculate_perimeter( Rectangle_t *rectangle );
void calculate_area( Rectangle_t *rectangle );
void print_rectangle( Rectangle_t rectangle );

#endif // __RECTANGLE_H__

