/**
 * @file Equivalent.h
 * @author Husain_Khan 
 * @brief Header file 
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __EQUIVALENT_H__
#define __EQUIVALENT_H__
/**
 * @brief Calculate net series resistance
 * 
 * @param r (pointer array of Resistor's)
 * @param t (no.of resistor's)
 */
void Net_Series_Resistance(int *r,int t);
/**
 * @brief Calculate net parallel resistance
 * 
 * @param r (pointer array of Resistor's)
 * @param t (no.of resistor's)
 */
void Net_Parallel_Resistance(int *r,int t);
/**
 * @brief Calculate net series inductance
 * 
 * @param l (pointer array of Inductor's)
 * @param t (no.of inductor's)
 */
void Net_Series_Inductance(int *l,int t);
/**
 * @brief Calculate net parallel inductance
 * 
 * @param l (pointer array of Inductor's)
 * @param t (no.of inductor's)
 */
void Net_Parallel_Inductance(int *l,int t);
/**
 * @brief Calculate net series capacitance
 * 
 * @param c (pointer array of Capacitor's)
 * @param t (no.of capacitor's)
 */
void Net_Series_Capacitance(int *c,int t);
/**
 * @brief Calculate net parallel Capacitance
 * 
 * @param c (pointer array of Capacitor's)
 * @param t (no.of capacitor's)
 */
void Net_Parallel_Capacitance(int *c,int t);

#endif