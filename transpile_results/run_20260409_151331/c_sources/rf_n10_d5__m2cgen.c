#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void model_predict(double * input, double * output) {
    double var0[2];
    double var1[2];
    double var2[2];
    double var3[2];
    double var4[2];
    double var5[2];
    double var6[2];
    double var7[2];
    double var8[2];
    double var9[2];
    double var10[2];
    if (input[1406] <= 0.5) {
        if (input[536] <= 0.5) {
            if (input[468] <= 0.5) {
                if (input[647] <= 0.5) {
                    if (input[645] <= 0.5) {
                        memcpy(var10, (double[]){0.4528178243774574, 0.5471821756225426}, 2 * sizeof(double));
                    } else {
                        memcpy(var10, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var10, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var10, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var10, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var10, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    double var11[2];
    if (input[519] <= 0.5) {
        if (input[321] <= 0.5) {
            if (input[417] <= 0.5) {
                if (input[1586] <= 0.5) {
                    if (input[1572] <= 0.5) {
                        memcpy(var11, (double[]){0.41321152494729446, 0.5867884750527056}, 2 * sizeof(double));
                    } else {
                        memcpy(var11, (double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1571] <= 0.5) {
                        memcpy(var11, (double[]){0.6212121212121212, 0.3787878787878788}, 2 * sizeof(double));
                    } else {
                        memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var10, var11, 2, var9);
    double var12[2];
    if (input[1576] <= 0.5) {
        if (input[1546] <= 0.5) {
            if (input[252] <= 0.5) {
                if (input[1007] <= 0.5) {
                    if (input[724] <= 0.5) {
                        memcpy(var12, (double[]){0.43988684582743987, 0.5601131541725601}, 2 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1604] <= 0.5) {
                if (input[1512] <= 0.5) {
                    if (input[1225] <= 0.5) {
                        memcpy(var12, (double[]){0.21739130434782608, 0.782608695652174}, 2 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1565] <= 0.5) {
            if (input[751] <= 0.5) {
                if (input[1573] <= 0.5) {
                    if (input[126] <= 0.5) {
                        memcpy(var12, (double[]){0.559322033898305, 0.4406779661016949}, 2 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var9, var12, 2, var8);
    double var13[2];
    if (input[562] <= 0.5) {
        if (input[883] <= 0.5) {
            if (input[1051] <= 0.5) {
                if (input[1573] <= 0.5) {
                    if (input[863] <= 0.5) {
                        memcpy(var13, (double[]){0.43584521384928715, 0.5641547861507128}, 2 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[884] <= 0.5) {
                        memcpy(var13, (double[]){0.6909090909090909, 0.3090909090909091}, 2 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var8, var13, 2, var7);
    double var14[2];
    if (input[1155] <= 0.5) {
        if (input[1547] <= 0.5) {
            if (input[1305] <= 0.5) {
                if (input[1598] <= 0.5) {
                    if (input[1602] <= 0.5) {
                        memcpy(var14, (double[]){0.4752333094041637, 0.5247666905958364}, 2 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1551] <= 0.5) {
                        memcpy(var14, (double[]){0.21951219512195122, 0.7804878048780488}, 2 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[25] <= 0.5) {
                if (input[956] <= 0.5) {
                    if (input[1438] <= 0.5) {
                        memcpy(var14, (double[]){0.30612244897959184, 0.6938775510204082}, 2 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var7, var14, 2, var6);
    double var15[2];
    if (input[797] <= 0.5) {
        if (input[1585] <= 0.5) {
            if (input[1598] <= 0.5) {
                if (input[1594] <= 0.5) {
                    if (input[904] <= 0.5) {
                        memcpy(var15, (double[]){0.45003594536304814, 0.5499640546369519}, 2 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1547] <= 0.5) {
                        memcpy(var15, (double[]){0.6938775510204082, 0.30612244897959184}, 2 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1370] <= 0.5) {
                    if (input[728] <= 0.5) {
                        memcpy(var15, (double[]){0.17391304347826086, 0.8260869565217391}, 2 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[296] <= 0.5) {
                if (input[1564] <= 0.5) {
                    if (input[1552] <= 0.5) {
                        memcpy(var15, (double[]){0.2558139534883721, 0.7441860465116279}, 2 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var6, var15, 2, var5);
    double var16[2];
    if (input[673] <= 0.5) {
        if (input[492] <= 0.5) {
            if (input[1564] <= 0.5) {
                if (input[1565] <= 0.5) {
                    if (input[1568] <= 0.5) {
                        memcpy(var16, (double[]){0.4182726623840114, 0.5817273376159886}, 2 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.6274509803921569, 0.37254901960784315}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1590] <= 0.5) {
                        memcpy(var16, (double[]){0.6097560975609756, 0.3902439024390244}, 2 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[272] <= 0.5) {
                    if (input[1589] <= 0.5) {
                        memcpy(var16, (double[]){0.23684210526315788, 0.7631578947368421}, 2 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var5, var16, 2, var4);
    double var17[2];
    if (input[1571] <= 0.5) {
        if (input[1591] <= 0.5) {
            if (input[1336] <= 0.5) {
                if (input[334] <= 0.5) {
                    if (input[1594] <= 0.5) {
                        memcpy(var17, (double[]){0.47715736040609136, 0.5228426395939086}, 2 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.6458333333333334, 0.3541666666666667}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[125] <= 0.5) {
                if (input[1566] <= 0.5) {
                    if (input[900] <= 0.5) {
                        memcpy(var17, (double[]){0.20454545454545456, 0.7954545454545454}, 2 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1187] <= 0.5) {
            if (input[1085] <= 0.5) {
                if (input[1351] <= 0.5) {
                    if (input[584] <= 0.5) {
                        memcpy(var17, (double[]){0.2909090909090909, 0.7090909090909091}, 2 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var4, var17, 2, var3);
    double var18[2];
    if (input[864] <= 0.5) {
        if (input[517] <= 0.5) {
            if (input[883] <= 0.5) {
                if (input[607] <= 0.5) {
                    if (input[1546] <= 0.5) {
                        memcpy(var18, (double[]){0.43920765027322406, 0.5607923497267759}, 2 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.3088235294117647, 0.6911764705882353}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var3, var18, 2, var2);
    double var19[2];
    if (input[264] <= 0.5) {
        if (input[728] <= 0.5) {
            if (input[1568] <= 0.5) {
                if (input[630] <= 0.5) {
                    if (input[34] <= 0.5) {
                        memcpy(var19, (double[]){0.46472184531886024, 0.5352781546811397}, 2 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[882] <= 0.5) {
                    if (input[1228] <= 0.5) {
                        memcpy(var19, (double[]){0.6538461538461539, 0.34615384615384615}, 2 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var2, var19, 2, var1);
    mul_vector_number(var1, 0.1, 2, var0);
    memcpy(output, var0, 2 * sizeof(double));
}
