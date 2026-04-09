#include <string.h>
void model_predict(double * input, double * output) {
    double var0[2];
    if (input[1552] <= 0.5) {
        if (input[1571] <= 0.5) {
            if (input[1564] <= 0.5) {
                memcpy(var0, (double[]){0.46859205776173285, 0.5314079422382672}, 2 * sizeof(double));
            } else {
                memcpy(var0, (double[]){0.23404255319148937, 0.7659574468085106}, 2 * sizeof(double));
            }
        } else {
            if (input[0] <= 0.7380224168300629) {
                memcpy(var0, (double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
            } else {
                memcpy(var0, (double[]){0.3181818181818182, 0.6818181818181818}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1581] <= 0.5) {
            if (input[0] <= -0.9795345962047577) {
                memcpy(var0, (double[]){0.3125, 0.6875}, 2 * sizeof(double));
            } else {
                memcpy(var0, (double[]){0.11428571428571428, 0.8857142857142857}, 2 * sizeof(double));
            }
        } else {
            memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
