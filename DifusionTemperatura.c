#include <stdio.h>
#include <math.h>
#include "Initialization.h"

/*float *u_past[];
float *u_present[];
float *u_future[];*/

float main(float *u_past, float *u_present, float *u_future){
	int n_t;
	int n_x;
	int n_y;
	int n_points;
	float nu = pow(10, -4);
	float sigma;	
	float dx;
	float dy;
	float dt = sigma * dx * dx / nu;
	float alpha = dt/(dx * dx);
	float beta = dt/(dy * dy);
	for(n=0; n<n_t; ++){
		for(i=; i<(n_points-1); i++){
			for(j=; i<(n_points-1); j++){
				U_future[i][j] = (1-2 * nu * (alpha + beta)) * u_present[i][j] + nu * alpha * (u_present[i+1][j] + u_present[i-1][j]) + nu * beta * (u_present[i,j+1][i,j]);
			copy(u_present, u_future, n_points);
			}		

		}	

	}
	

}
