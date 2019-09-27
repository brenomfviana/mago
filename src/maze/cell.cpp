/*
  This file is part of MAGO.

  Copyright (c) 2019 by Breno Viana

  MAGO is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#include "maze/cell.hpp"

Cell::Cell() {
  this->north = true;
  this->east = true;
  this->south = true;
  this->west = true;
}

bool Cell::is_north_wall_standing() {
  return this->north;
}

bool Cell::is_west_wall_standing() {
  return this->west;
}

bool Cell::is_south_wall_standing() {
  return this->south;
}

bool Cell::is_east_wall_standing() {
  return this->east;
}

void Cell::knock_down_north_wall() {
  this->north = false;
}

void Cell::knock_down_west_wall() {
  this->west = false;
}

void Cell::knock_down_south_wall() {
  this->south = false;
}

void Cell::knock_down_east_wall() {
  this->east = false;
}
