/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#ifndef _MAGOS_PRINTER_HPP_
#define _MAGOS_PRINTER_HPP_

#include "maze/maze.hpp"

/*!
 * \brief Maze printer
 */
class Printer {
  public:
    static void print(Maze* maze);
};

#endif /* _MAGOS_PRINTER_HPP_ */
