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
                    if (input[1578] <= 0.5) {
                        memcpy(var0, (double[]){0.6530612244897959, 0.3469387755102041}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){0.8, 0.2}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 1.0551098585128784) {
                    if (input[0] <= -1.21735018491745) {
                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){0.22857142857142856, 0.7714285714285715}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, (double[]){0.6, 0.4}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 0.7380224168300629) {
                if (input[0] <= 0.5266307890415192) {
                    if (input[0] <= -0.9002627432346344) {
                        memcpy(var0, (double[]){0.13333333333333333, 0.8666666666666667}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){0.36363636363636365, 0.6363636363636364}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[0] <= 0.8965661227703094) {
                    memcpy(var0, (double[]){0.4, 0.6}, 2 * sizeof(double));
                } else {
                    if (input[0] <= 1.0022619664669037) {
                        memcpy(var0, (double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){0.4, 0.6}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1581] <= 0.5) {
            if (input[0] <= -0.9795345962047577) {
                if (input[0] <= -1.3230460286140442) {
                    memcpy(var0, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                } else {
                    memcpy(var0, (double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                }
            } else {
                if (input[0] <= 0.8965661227703094) {
                    if (input[0] <= 0.5266307890415192) {
                        memcpy(var0, (double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, (double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
