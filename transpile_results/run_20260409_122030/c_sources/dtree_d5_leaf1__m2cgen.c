#include <string.h>
void model_predict(double * input, double * output) {
    double var0[2];
    if (input[1552] <= 0.5) {
        if (input[1571] <= 0.5) {
            if (input[1564] <= 0.5) {
                if (input[1567] <= 0.5) {
                    if (input[1573] <= 0.5) {
                        memcpy(var0, (double[]){0.45249221183800625, 0.5475077881619937}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){0.6808510638297872, 0.3191489361702128}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1579] <= 0.5) {
                        memcpy(var0, (double[]){0.6923076923076923, 0.3076923076923077}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 1.0551098585128784) {
                    if (input[108] <= 0.5) {
                        memcpy(var0, (double[]){0.17073170731707318, 0.8292682926829268}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1585] <= 0.5) {
                        memcpy(var0, (double[]){0.75, 0.25}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1595] <= 0.5) {
                if (input[1580] <= 0.5) {
                    if (input[1575] <= 0.5) {
                        memcpy(var0, (double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1592] <= 0.5) {
            if (input[1597] <= 0.5) {
                if (input[1581] <= 0.5) {
                    if (input[778] <= 0.5) {
                        memcpy(var0, (double[]){0.08888888888888889, 0.9111111111111111}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.08112016320228577) {
                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1248] <= 0.5) {
                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
