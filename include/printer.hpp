/*
  This file is part of MAGO.

  Copyright (c) 2019 by Breno Viana

  MAGO is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#ifndef _MAGO_PRINTER_HPP_
#define _MAGO_PRINTER_HPP_

#include "maze/maze.hpp"

/*!
 * \brief Maze printer
 */
class Printer {
  public:
    /*!
     * \brief Print a maze
     *
     * \param maze
     *     The maze to be printed
     */
    static void print(Maze* maze);
};

#endif /* _MAGO_PRINTER_HPP_ */
