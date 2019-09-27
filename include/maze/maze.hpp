/*
  This file is part of MAGO.

  Copyright (c) 2019 by Breno Viana

  MAGO is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#ifndef _MAGO_MAZE_HPP_
#define _MAGO_MAZE_HPP_

#include <iostream>
#include "cell.hpp"

/*!
 * \brief Maze class
 */
class Maze {
  private:
    size_t width; ///< Maze width
    size_t height; ///< Maze height

  public:
    Cell** cells; ///< Maze cells
    Cell* sp; ///< Starting point
    Cell* ep; ///< End point

    /*!
     * \brief Maze constructor
     */
    Maze(size_t width, size_t height);

    /*!
     * \brief Maze destructor
     */
    ~Maze();

    /*!
     * \brief Return maze width
     *
     * \return
     *     Maze width
     */
    size_t get_width();

    /*!
     * \brief Return maze height
     *
     * \return
     *     Maze height
     */
    size_t get_height();

    /*!
     * \brief Return a maze cell
     *
     * \param i
     *     Vertical index
     * \param j
     *     Horizontal index
     *
     * \return
     *     A maze cell
     */
    Cell* get_cell(size_t i, size_t j);

    /*!
     * \brief Check if the north wall is standing
     *
     * \param i
     *     Vertical index
     * \param j
     *     Horizontal index
     * \param dir
     *     Cardinal direction of the wall
     *
     * \return
     *     Return true if the north wall is standing and false otherwise
     */
    bool is_wall_standing(size_t i, size_t j, Directions dir);

    /*!
     * \brief Knock down a wall of a maze cell
     *
     * \param i
     *     Vertical index
     * \param j
     *     Horizontal index
     * \param dir
     *     Cardinal direction of the wall
     */
    void knock_down_a_wall(size_t i, size_t j, Directions dir);
};

#endif /* _MAGO_MAZE_HPP_ */
