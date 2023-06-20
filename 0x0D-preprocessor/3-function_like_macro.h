#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * file: 3-function_like_macro.h
 * description: computes the absolute value of a number x
 */

#define ABS(x) \
	if (x < 0) \
		return (-x) \
	else \
		return (x) \

#endif
