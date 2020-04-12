#include<stdio.h>
#include "point.h"

int main(void)
{
  POINT current_location, closest_food;
  POINT food_points[POINTS_LENGTH] = FOOD_POINTS;
  POINT organism_points[POINTS_LENGTH] = ORGANISM_POINTS;

  for (int index = 0; index < POINTS_LENGTH; index++) {
    get_closest_food(food_points, POINTS_LENGTH, current_location, &closest_food);
  }

  return 0;
}