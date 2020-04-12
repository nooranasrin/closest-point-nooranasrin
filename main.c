#include<stdio.h>
#include "point.h"

int main(void)
{
  POINT current_location, closest_food;
  POINT food_points[POINTS_LENGTH] = FOOD_POINTS;
  POINT organism_points[POINTS_LENGTH] = ORGANISM_POINTS;

  for (int index = 0; index < POINTS_LENGTH; index++) {
    current_location = organism_points[index];
    get_closest_food(food_points, POINTS_LENGTH, current_location, &closest_food);
    printf("Location of organism: [%d %d],  Closest food target : [%d %d]\n", current_location.x, current_location.y, closest_food.x, closest_food.y);
  }

  return 0;
}