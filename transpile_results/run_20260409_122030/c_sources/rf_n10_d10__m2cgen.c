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
                        if (input[1486] <= 0.5) {
                            if (input[1360] <= 0.5) {
                                if (input[1573] <= 0.5) {
                                    if (input[937] <= 0.5) {
                                        if (input[1574] <= 0.5) {
                                            memcpy(var10, (double[]){0.4366689993002099, 0.56333100069979}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.6956521739130435, 0.30434782608695654}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var10, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1582] <= 0.5) {
                                        if (input[884] <= 0.5) {
                                            memcpy(var10, (double[]){0.7837837837837838, 0.21621621621621623}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var10, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var10, (double[]){0.0, 1.0}, 2 * sizeof(double));
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
                        if (input[1120] <= 0.5) {
                            if (input[742] <= 0.5) {
                                if (input[1565] <= 0.5) {
                                    if (input[1292] <= 0.5) {
                                        if (input[1576] <= 0.5) {
                                            memcpy(var11, (double[]){0.38884644766997706, 0.6111535523300229}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[444] <= 0.5) {
                                        if (input[1599] <= 0.5) {
                                            memcpy(var11, (double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[1589] <= 0.5) {
                            if (input[1014] <= 0.5) {
                                if (input[1578] <= 0.5) {
                                    if (input[672] <= 0.5) {
                                        if (input[488] <= 0.5) {
                                            memcpy(var11, (double[]){0.5161290322580645, 0.4838709677419355}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var11, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var11, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[1549] <= 0.5) {
                        if (input[589] <= 0.5) {
                            if (input[415] <= 0.5) {
                                if (input[68] <= 0.5) {
                                    if (input[213] <= 0.5) {
                                        if (input[713] <= 0.5) {
                                            memcpy(var11, (double[]){0.6206896551724138, 0.3793103448275862}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var11, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var11, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
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
                        if (input[1562] <= 0.5) {
                            if (input[1571] <= 0.5) {
                                if (input[1590] <= 0.5) {
                                    if (input[1563] <= 0.5) {
                                        if (input[687] <= 0.5) {
                                            memcpy(var12, (double[]){0.44353518821603927, 0.5564648117839607}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1577] <= 0.5) {
                                            memcpy(var12, (double[]){0.29310344827586204, 0.7068965517241379}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[764] <= 0.5) {
                                        if (input[991] <= 0.5) {
                                            memcpy(var12, (double[]){0.7, 0.3}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[235] <= 0.5) {
                                    if (input[419] <= 0.5) {
                                        if (input[605] <= 0.5) {
                                            memcpy(var12, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1598] <= 0.5) {
                                if (input[1590] <= 0.5) {
                                    if (input[475] <= 0.5) {
                                        if (input[242] <= 0.5) {
                                            memcpy(var12, (double[]){0.7272727272727273, 0.2727272727272727}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[183] <= 0.5) {
                                        memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
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
        } else {
            if (input[1090] <= 0.5) {
                if (input[1580] <= 0.5) {
                    if (input[1579] <= 0.5) {
                        if (input[1476] <= 0.5) {
                            if (input[877] <= 0.5) {
                                if (input[1463] <= 0.5) {
                                    if (input[1593] <= 0.5) {
                                        if (input[1587] <= 0.5) {
                                            memcpy(var12, (double[]){0.21875, 0.78125}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[174] <= 0.5) {
                            memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[692] <= 0.5) {
            if (input[1387] <= 0.5) {
                if (input[1559] <= 0.5) {
                    if (input[1085] <= 0.5) {
                        if (input[1528] <= 0.5) {
                            if (input[373] <= 0.5) {
                                if (input[1285] <= 0.5) {
                                    if (input[972] <= 0.5) {
                                        if (input[325] <= 0.5) {
                                            memcpy(var12, (double[]){0.5957446808510638, 0.40425531914893614}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var12, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
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
        } else {
            memcpy(var12, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var9, var12, 2, var8);
    double var13[2];
    if (input[562] <= 0.5) {
        if (input[883] <= 0.5) {
            if (input[1051] <= 0.5) {
                if (input[1573] <= 0.5) {
                    if (input[863] <= 0.5) {
                        if (input[1594] <= 0.5) {
                            if (input[95] <= 0.5) {
                                if (input[1562] <= 0.5) {
                                    if (input[1122] <= 0.5) {
                                        if (input[1553] <= 0.5) {
                                            memcpy(var13, (double[]){0.4079449961802903, 0.5920550038197097}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1604] <= 0.5) {
                                        if (input[162] <= 0.5) {
                                            memcpy(var13, (double[]){0.5964912280701754, 0.40350877192982454}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1552] <= 0.5) {
                                if (input[1574] <= 0.5) {
                                    if (input[961] <= 0.5) {
                                        if (input[1548] <= 0.5) {
                                            memcpy(var13, (double[]){0.6216216216216216, 0.3783783783783784}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[737] <= 0.5) {
                        if (input[732] <= 0.5) {
                            if (input[1593] <= 0.5) {
                                if (input[1590] <= 0.5) {
                                    if (input[1595] <= 0.5) {
                                        if (input[670] <= 0.5) {
                                            memcpy(var13, (double[]){0.6590909090909091, 0.3409090909090909}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
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
                        if (input[1600] <= 0.5) {
                            if (input[1568] <= 0.5) {
                                if (input[1058] <= 0.5) {
                                    if (input[154] <= 0.5) {
                                        if (input[1432] <= 0.5) {
                                            memcpy(var14, (double[]){0.45933384972889235, 0.5406661502711076}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= -0.18681597709655762) {
                                    if (input[1601] <= 0.5) {
                                        if (input[1577] <= 0.5) {
                                            memcpy(var14, (double[]){0.9333333333333333, 0.06666666666666667}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[209] <= 0.5) {
                                        if (input[1289] <= 0.5) {
                                            memcpy(var14, (double[]){0.4166666666666667, 0.5833333333333334}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[1440] <= 0.5) {
                                if (input[1550] <= 0.5) {
                                    if (input[1555] <= 0.5) {
                                        if (input[1554] <= 0.5) {
                                            memcpy(var14, (double[]){0.7560975609756098, 0.24390243902439024}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= -0.9002627432346344) {
                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[274] <= 0.5) {
                            if (input[1565] <= 0.5) {
                                if (input[1079] <= 0.5) {
                                    if (input[905] <= 0.5) {
                                        if (input[1560] <= 0.5) {
                                            memcpy(var14, (double[]){0.35294117647058826, 0.6470588235294118}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[1571] <= 0.5) {
                        if (input[796] <= 0.5) {
                            if (input[1084] <= 0.5) {
                                if (input[1565] <= 0.5) {
                                    if (input[859] <= 0.5) {
                                        if (input[1563] <= 0.5) {
                                            memcpy(var14, (double[]){0.21875, 0.78125}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1295] <= 0.5) {
                if (input[1587] <= 0.5) {
                    if (input[1040] <= 0.5) {
                        if (input[926] <= 0.5) {
                            if (input[1012] <= 0.5) {
                                if (input[1604] <= 0.5) {
                                    if (input[519] <= 0.5) {
                                        if (input[967] <= 0.5) {
                                            memcpy(var14, (double[]){0.1794871794871795, 0.8205128205128205}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= -0.16039201617240906) {
                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
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
                        if (input[16] <= 0.5) {
                            if (input[547] <= 0.5) {
                                if (input[1568] <= 0.5) {
                                    if (input[1589] <= 0.5) {
                                        if (input[316] <= 0.5) {
                                            memcpy(var15, (double[]){0.43213728549141966, 0.5678627145085804}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1138] <= 0.5) {
                                            memcpy(var15, (double[]){0.6595744680851063, 0.3404255319148936}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[1453] <= 0.5) {
                                        if (input[924] <= 0.5) {
                                            memcpy(var15, (double[]){0.6530612244897959, 0.3469387755102041}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1489] <= 0.5) {
                        if (input[1557] <= 0.5) {
                            if (input[309] <= 0.5) {
                                if (input[686] <= 0.5) {
                                    if (input[1205] <= 0.5) {
                                        if (input[1429] <= 0.5) {
                                            memcpy(var15, (double[]){0.6976744186046512, 0.3023255813953488}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
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
                if (input[1084] <= 0.5) {
                    if (input[1566] <= 0.5) {
                        if (input[282] <= 0.5) {
                            if (input[0] <= 0.7380224168300629) {
                                if (input[1097] <= 0.5) {
                                    if (input[1117] <= 0.5) {
                                        if (input[26] <= 0.5) {
                                            memcpy(var15, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1573] <= 0.5) {
                                    if (input[1244] <= 0.5) {
                                        if (input[1571] <= 0.5) {
                                            memcpy(var15, (double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1203] <= 0.5) {
                                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1567] <= 0.5) {
                if (input[442] <= 0.5) {
                    if (input[1546] <= 0.5) {
                        if (input[1566] <= 0.5) {
                            if (input[967] <= 0.5) {
                                if (input[1573] <= 0.5) {
                                    if (input[1551] <= 0.5) {
                                        if (input[1549] <= 0.5) {
                                            memcpy(var15, (double[]){0.13636363636363635, 0.8636363636363636}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1082] <= 0.5) {
                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1312] <= 0.5) {
                    if (input[140] <= 0.5) {
                        if (input[888] <= 0.5) {
                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
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
                        if (input[1560] <= 0.5) {
                            if (input[294] <= 0.5) {
                                if (input[536] <= 0.5) {
                                    if (input[1444] <= 0.5) {
                                        if (input[1547] <= 0.5) {
                                            memcpy(var16, (double[]){0.4091614906832298, 0.5908385093167702}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.2641509433962264, 0.7358490566037735}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1339] <= 0.5) {
                                if (input[0] <= 0.6851744949817657) {
                                    if (input[1603] <= 0.5) {
                                        if (input[1600] <= 0.5) {
                                            memcpy(var16, (double[]){0.5555555555555556, 0.4444444444444444}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1603] <= 0.5) {
                                        if (input[1576] <= 0.5) {
                                            memcpy(var16, (double[]){0.9090909090909091, 0.09090909090909091}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[1586] <= 0.5) {
                            if (input[1604] <= 0.5) {
                                if (input[1441] <= 0.5) {
                                    if (input[1588] <= 0.5) {
                                        if (input[696] <= 0.5) {
                                            memcpy(var16, (double[]){0.5952380952380952, 0.40476190476190477}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[109] <= 0.5) {
                        if (input[1601] <= 0.5) {
                            if (input[1590] <= 0.5) {
                                if (input[1252] <= 0.5) {
                                    if (input[1583] <= 0.5) {
                                        if (input[1584] <= 0.5) {
                                            memcpy(var16, (double[]){0.5666666666666667, 0.43333333333333335}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1580] <= 0.5) {
                    if (input[1587] <= 0.5) {
                        if (input[1576] <= 0.5) {
                            if (input[439] <= 0.5) {
                                if (input[837] <= 0.5) {
                                    if (input[1585] <= 0.5) {
                                        if (input[872] <= 0.5) {
                                            memcpy(var16, (double[]){0.34782608695652173, 0.6521739130434783}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
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
                        if (input[1369] <= 0.5) {
                            if (input[498] <= 0.5) {
                                if (input[1567] <= 0.5) {
                                    if (input[770] <= 0.5) {
                                        if (input[398] <= 0.5) {
                                            memcpy(var17, (double[]){0.4582375478927203, 0.5417624521072797}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[411] <= 0.5) {
                                        if (input[1582] <= 0.5) {
                                            memcpy(var17, (double[]){0.7254901960784313, 0.27450980392156865}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[600] <= 0.5) {
                            if (input[1546] <= 0.5) {
                                if (input[961] <= 0.5) {
                                    if (input[1044] <= 0.5) {
                                        if (input[1205] <= 0.5) {
                                            memcpy(var17, (double[]){0.675, 0.325}, 2 * sizeof(double));
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
                        } else {
                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1567] <= 0.5) {
                if (input[1565] <= 0.5) {
                    if (input[1562] <= 0.5) {
                        if (input[414] <= 0.5) {
                            if (input[292] <= 0.5) {
                                if (input[1092] <= 0.5) {
                                    if (input[1163] <= 0.5) {
                                        if (input[1549] <= 0.5) {
                                            memcpy(var17, (double[]){0.26666666666666666, 0.7333333333333333}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
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
                if (input[63] <= 0.5) {
                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[811] <= 0.5) {
            if (input[1085] <= 0.5) {
                if (input[1579] <= 0.5) {
                    if (input[1576] <= 0.5) {
                        if (input[0] <= 0.8437182307243347) {
                            if (input[584] <= 0.5) {
                                if (input[1522] <= 0.5) {
                                    if (input[980] <= 0.5) {
                                        if (input[605] <= 0.5) {
                                            memcpy(var17, (double[]){0.029411764705882353, 0.9705882352941176}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
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
                        } else {
                            if (input[1587] <= 0.5) {
                                if (input[1593] <= 0.5) {
                                    if (input[1586] <= 0.5) {
                                        if (input[452] <= 0.5) {
                                            memcpy(var17, (double[]){0.875, 0.125}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var4, var17, 2, var3);
    double var18[2];
    if (input[864] <= 0.5) {
        if (input[517] <= 0.5) {
            if (input[883] <= 0.5) {
                if (input[607] <= 0.5) {
                    if (input[1546] <= 0.5) {
                        if (input[1573] <= 0.5) {
                            if (input[1556] <= 0.5) {
                                if (input[804] <= 0.5) {
                                    if (input[215] <= 0.5) {
                                        if (input[530] <= 0.5) {
                                            memcpy(var18, (double[]){0.4374537379718727, 0.5625462620281273}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1590] <= 0.5) {
                                    if (input[702] <= 0.5) {
                                        if (input[1589] <= 0.5) {
                                            memcpy(var18, (double[]){0.2777777777777778, 0.7222222222222222}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[264] <= 0.5) {
                                if (input[505] <= 0.5) {
                                    if (input[1431] <= 0.5) {
                                        if (input[829] <= 0.5) {
                                            memcpy(var18, (double[]){0.6388888888888888, 0.3611111111111111}, 2 * sizeof(double));
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
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[1590] <= 0.5) {
                            if (input[1186] <= 0.5) {
                                if (input[1298] <= 0.5) {
                                    if (input[1475] <= 0.5) {
                                        if (input[1539] <= 0.5) {
                                            memcpy(var18, (double[]){0.3389830508474576, 0.6610169491525424}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
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
                        if (input[1581] <= 0.5) {
                            if (input[217] <= 0.5) {
                                if (input[1068] <= 0.5) {
                                    if (input[1602] <= 0.5) {
                                        if (input[240] <= 0.5) {
                                            memcpy(var19, (double[]){0.4616508400292184, 0.5383491599707816}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[274] <= 0.5) {
                                            memcpy(var19, (double[]){0.2553191489361702, 0.7446808510638298}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[822] <= 0.5) {
                                if (input[298] <= 0.5) {
                                    if (input[441] <= 0.5) {
                                        if (input[1565] <= 0.5) {
                                            memcpy(var19, (double[]){0.6388888888888888, 0.3611111111111111}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
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
            } else {
                if (input[490] <= 0.5) {
                    if (input[770] <= 0.5) {
                        if (input[1597] <= 0.5) {
                            if (input[1468] <= 0.5) {
                                if (input[1289] <= 0.5) {
                                    if (input[685] <= 0.5) {
                                        if (input[1575] <= 0.5) {
                                            memcpy(var19, (double[]){0.7222222222222222, 0.2777777777777778}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= -0.2660878598690033) {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
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
