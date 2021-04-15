#ifndef __COMPUTE_BOUNDS_H__
#define __COMPUTE_BOUNDS_H__

void compute_sigma_clipped_bounds(double buffer[], int count, int use_median,
                                  int maxiters, double sigma_lower, double sigma_upper,
                                  double *lower_bound, double *upper_bound);

#endif
