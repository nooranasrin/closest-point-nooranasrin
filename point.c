#include<stdio.h>
#include<math.h>
#include "point.h"

DISTANCE find_distance(POINT point1, POINT point2) {
  int sqr_of_dif_of_x = (point2.x - point1.x) * (point2.x - point1.x);
  int sqr_of_dif_of_y = (point2.y - point1.y) * (point2.y - point1.y);
  return sqrt(sqr_of_dif_of_x + sqr_of_dif_of_y);
}


void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location) {
  DISTANCE shortest_distance = find_distance(current_location, food_points[0]);
  *closest_food_location = food_points[0];
  
  for (int index = 0; index < points_length; index++) {
    DISTANCE current_distance = find_distance(current_location, food_points[index]);
    if (current_distance < shortest_distance) {
      shortest_distance = current_distance;
      *closest_food_location = food_points[index];
    }
  }
}