/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#ifndef _MAGOS_CELL_HPP_
#define _MAGOS_CELL_HPP_

#include <iostream>

/*!
 * \brief Maze cell
 */
class Cell {
  private:
    bool top; ///< Top wall
    bool right; ///< Right wall
    bool bottom; ///< Bottom wall
    bool left; ///< Left wall

  public:
    /*!
     * \brief Maze cell constructor
     */
    Cell();

    bool is_top_wall_standing();

    bool is_right_wall_standing();

    bool is_bottom_wall_standing();

    bool is_left_wall_standing();

    void knock_down_top_wall();

    void knock_down_right_wall();

    void knock_down_bottom_wall();

    void knock_down_left_wall();
};

#endif /* _MAGOS_CELL_HPP_ */
