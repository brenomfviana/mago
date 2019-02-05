/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#ifndef _MAGOS_CELL_HPP_
#define _MAGOS_CELL_HPP_

#include <iostream>

enum Directions { NORTH, SOUTH, EAST, WEST };

/*!
 * \brief Maze cell
 */
class Cell {
  private:
    bool north; ///< North wall
    bool east; ///< East wall
    bool south; ///< South wall
    bool west; ///< West wall

  public:
    /*!
     * \brief Maze cell constructor
     */
    Cell();

    bool is_north_wall_standing();

    bool is_east_wall_standing();

    bool is_south_wall_standing();

    bool is_west_wall_standing();

    void knock_down_north_wall();

    void knock_down_east_wall();

    void knock_down_south_wall();

    void knock_down_west_wall();
};

#endif /* _MAGOS_CELL_HPP_ */
