/**
 * @file Star_Delta_Conversion.h
 * @author Husain Khan
 * @brief 
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _STAR_DELTA_CONVERSION_H
#define _STAR_DELTA_CONVERSION_H
/**
 * @brief This Function will convert Star circuit in to Delta Circuit.
 * 
 * @param ptr Pointer array of Resistor's.
 */
float Star_to_Delta_conversion(int *ptr);
/**
 * @brief This Function will convert Delta circuit in to Star Circuit.
 * 
 * @param ptr Pointer array of Resistor's.
 */
float Delta_to_Star_conversion(int *ptr);
/**
 * @brief This Function Will club Both the reamaining functions and will convert Star to delta and delta to star .
 * 
 */
void convert();

#endif