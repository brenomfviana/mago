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

    /*!
     * \brief Check if the north wall is standing
     *
     * \return
     *     Return true if the north wall is standing and false otherwise
     */
    bool is_north_wall_standing();

    /*!
     * \brief Check if the west wall is standing
     *
     * \return
     *     Return true if the west wall is standing and false otherwise
     */
    bool is_west_wall_standing();

    /*!
     * \brief Check if the south wall is standing
     *
     * \return
     *     Return true if the south wall is standing and false otherwise
     */
    bool is_south_wall_standing();

    /*!
     * \brief Check if the east wall is standing
     *
     * \return
     *     Return true if the east wall is standing and false otherwise
     */
    bool is_east_wall_standing();

    /*!
     * \brief Knock down the north wall
     */
    void knock_down_north_wall();

    /*!
     * \brief Knock down the west wall
     */
    void knock_down_west_wall();

    /*!
     * \brief Knock down the south wall
     */
    void knock_down_south_wall();

    /*!
     * \brief Knock down the east wall
     */
    void knock_down_east_wall();
};

#endif /* _MAGOS_CELL_HPP_ */
