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
            if (input[1580] <= 0.5) {
                memcpy(var0, (double[]){0.20754716981132076, 0.7924528301886793}, 2 * sizeof(double));
            } else {
                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1592] <= 0.5) {
            if (input[1597] <= 0.5) {
                memcpy(var0, (double[]){0.15384615384615385, 0.8461538461538461}, 2 * sizeof(double));
            } else {
                memcpy(var0, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
            }
        } else {
            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
