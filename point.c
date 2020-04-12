#include<math.h>
#include "point.h"

unsigned long int find_distance(POINT point1, POINT point2) {
  int sqr_of_dif_of_x = (point2.x - point1.x) * (point2.x - point1.x);
  int sqr_of_dif_of_y = (point2.y - point1.y) * (point2.y - point1.y);
  return sqrt(sqr_of_dif_of_x + sqr_of_dif_of_y);
}

void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location) {}