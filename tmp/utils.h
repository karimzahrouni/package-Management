#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>


/** @brief  methods to calculate the number of factorial.
 *  @param aNbr the number to calculate its factorial number
 *  @return factorial number of aNbr
 */
long getFact(int aNbr);

/** @brief  read first line of a aFilePath.
 *  @param aFilePath the path of the file.
 *  @return first line content in integer [NB: first line content we should be '1' or '2']
 */
int readLine(char* aFilePath);

#endif