#include<math.h>
#include "point.h"

DISTANCE find_distance(POINT point1, POINT point2) {
  return hypot(point2.x - point1.x, point2.y - point1.y);
}

void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location) {
  DISTANCE shortest_distance = find_distance(current_location, food_points[0]);
  DISTANCE current_distance = shortest_distance;
  *closest_food_location = food_points[0];

  REPEAT(1, POINTS_LENGTH) {
    current_distance = find_distance(current_location, food_points[index]);
    if (current_distance < shortest_distance) {
      shortest_distance = current_distance;
      *closest_food_location = food_points[index];
    }
  }
}