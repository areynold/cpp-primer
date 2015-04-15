/* vim: set ts=2 expandtab: */
/**
 *       @file  meat.cpp
 *      @brief  testing c.vim
 *
 *     @author  Andrew Reynolds (areynold), andrew@chambana.net
 *
 *   @internal
 *      Created  11/06/2014 05:02:21 PM
 *     Compiler  gcc/g++
 * Organization  
 *    Copyright  Copyright (c) 2014, Andrew Reynolds
 *
 * This file is part of Commotion, Copyright (c) 2014, Andrew Reynolds 
 * 
 * Commotion is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published 
 * by the Free Software Foundation, either version 3 of the License, 
 * or (at your option) any later version.
 * 
 * Commotion is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Commotion.  If not, see <http://www.gnu.org/licenses/>.
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

/* 
 * @brief  Returns string meat
 */
std::string meat ( ) {
  std::string meat = "porterhouse";

  return meat;
}		/* -----  end of function meat  ----- */

/* 
 * @brief  
 */
int main ( )
{
  std::string eat = meat();
  std::cout << eat << std::endl;
  return 0;
}				/* ----------  end of function main  ---------- */
