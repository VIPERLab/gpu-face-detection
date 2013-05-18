/*
 * utils.h
 *
 *  Created on: Feb 15, 2013
 *      Author: olehp
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <vector>
#include <string>
#include "HaarCascade.h"
#include "SubWindow.h"

#define OR_MAX(a,b) (( a ) >= ( b ) ? ( a ) : (  b ))
#define OR_MIN(a,b) (( a ) < ( b ) ? ( a ) : ( b ))
#define OR_SQR(a) (( a ) * ( a ))

template<typename T>
inline T MatrVal(T *arr, int row, int col, int width) {

	return arr[row * width + col];
}

template<typename T>
inline void SetMatrVal(T *arr, int row, int col, T val, int width) {
	arr[row * width + col] = val;
}

std::vector<std::string> &Split(const std::string &s, char delim, std::vector<std::string> &elems);
std::vector<std::string> Split(const std::string &s, char delim);
void ReadWholeFile(const char *path, char **out_content);
void ComputeIIs(const int *input, int *ii, int *ii2, int img_width, int img_height);
void PrecalcSubwindows(int img_width, int img_height, int start_width, int start_height, std::vector<SubWindow>& subwindows);

void LoadCascade(const char *path, HaarCascade& haar_cascade);

#endif /* UTILS_H_ */
