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
    double var11[2];
    double var12[2];
    double var13[2];
    double var14[2];
    double var15[2];
    double var16[2];
    double var17[2];
    double var18[2];
    double var19[2];
    double var20[2];
    double var21[2];
    double var22[2];
    double var23[2];
    double var24[2];
    double var25[2];
    double var26[2];
    double var27[2];
    double var28[2];
    double var29[2];
    double var30[2];
    if (input[1406] <= 0.5) {
        if (input[536] <= 0.5) {
            if (input[468] <= 0.5) {
                if (input[647] <= 0.5) {
                    if (input[645] <= 0.5) {
                        memcpy(var30, (double[]){0.4528178243774574, 0.5471821756225426}, 2 * sizeof(double));
                    } else {
                        memcpy(var30, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var30, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var30, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var30, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var30, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    double var31[2];
    if (input[519] <= 0.5) {
        if (input[321] <= 0.5) {
            if (input[417] <= 0.5) {
                if (input[1586] <= 0.5) {
                    if (input[1572] <= 0.5) {
                        memcpy(var31, (double[]){0.41321152494729446, 0.5867884750527056}, 2 * sizeof(double));
                    } else {
                        memcpy(var31, (double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1571] <= 0.5) {
                        memcpy(var31, (double[]){0.6212121212121212, 0.3787878787878788}, 2 * sizeof(double));
                    } else {
                        memcpy(var31, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var31, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var31, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var31, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var30, var31, 2, var29);
    double var32[2];
    if (input[1576] <= 0.5) {
        if (input[1546] <= 0.5) {
            if (input[252] <= 0.5) {
                if (input[1007] <= 0.5) {
                    if (input[724] <= 0.5) {
                        memcpy(var32, (double[]){0.43988684582743987, 0.5601131541725601}, 2 * sizeof(double));
                    } else {
                        memcpy(var32, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var32, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var32, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1604] <= 0.5) {
                if (input[1512] <= 0.5) {
                    if (input[1225] <= 0.5) {
                        memcpy(var32, (double[]){0.21739130434782608, 0.782608695652174}, 2 * sizeof(double));
                    } else {
                        memcpy(var32, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var32, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var32, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1565] <= 0.5) {
            if (input[751] <= 0.5) {
                if (input[1573] <= 0.5) {
                    if (input[126] <= 0.5) {
                        memcpy(var32, (double[]){0.559322033898305, 0.4406779661016949}, 2 * sizeof(double));
                    } else {
                        memcpy(var32, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var32, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var32, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var32, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var29, var32, 2, var28);
    double var33[2];
    if (input[562] <= 0.5) {
        if (input[883] <= 0.5) {
            if (input[1051] <= 0.5) {
                if (input[1573] <= 0.5) {
                    if (input[863] <= 0.5) {
                        memcpy(var33, (double[]){0.43584521384928715, 0.5641547861507128}, 2 * sizeof(double));
                    } else {
                        memcpy(var33, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[884] <= 0.5) {
                        memcpy(var33, (double[]){0.6909090909090909, 0.3090909090909091}, 2 * sizeof(double));
                    } else {
                        memcpy(var33, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var33, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var33, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var33, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var28, var33, 2, var27);
    double var34[2];
    if (input[1155] <= 0.5) {
        if (input[1547] <= 0.5) {
            if (input[1305] <= 0.5) {
                if (input[1598] <= 0.5) {
                    if (input[1602] <= 0.5) {
                        memcpy(var34, (double[]){0.4752333094041637, 0.5247666905958364}, 2 * sizeof(double));
                    } else {
                        memcpy(var34, (double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1551] <= 0.5) {
                        memcpy(var34, (double[]){0.21951219512195122, 0.7804878048780488}, 2 * sizeof(double));
                    } else {
                        memcpy(var34, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var34, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[25] <= 0.5) {
                if (input[956] <= 0.5) {
                    if (input[1438] <= 0.5) {
                        memcpy(var34, (double[]){0.30612244897959184, 0.6938775510204082}, 2 * sizeof(double));
                    } else {
                        memcpy(var34, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var34, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var34, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var34, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var27, var34, 2, var26);
    double var35[2];
    if (input[797] <= 0.5) {
        if (input[1585] <= 0.5) {
            if (input[1598] <= 0.5) {
                if (input[1594] <= 0.5) {
                    if (input[904] <= 0.5) {
                        memcpy(var35, (double[]){0.45003594536304814, 0.5499640546369519}, 2 * sizeof(double));
                    } else {
                        memcpy(var35, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1547] <= 0.5) {
                        memcpy(var35, (double[]){0.6938775510204082, 0.30612244897959184}, 2 * sizeof(double));
                    } else {
                        memcpy(var35, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1370] <= 0.5) {
                    if (input[728] <= 0.5) {
                        memcpy(var35, (double[]){0.17391304347826086, 0.8260869565217391}, 2 * sizeof(double));
                    } else {
                        memcpy(var35, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var35, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[296] <= 0.5) {
                if (input[1564] <= 0.5) {
                    if (input[1552] <= 0.5) {
                        memcpy(var35, (double[]){0.2558139534883721, 0.7441860465116279}, 2 * sizeof(double));
                    } else {
                        memcpy(var35, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var35, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var35, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var35, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var26, var35, 2, var25);
    double var36[2];
    if (input[673] <= 0.5) {
        if (input[492] <= 0.5) {
            if (input[1564] <= 0.5) {
                if (input[1565] <= 0.5) {
                    if (input[1568] <= 0.5) {
                        memcpy(var36, (double[]){0.4182726623840114, 0.5817273376159886}, 2 * sizeof(double));
                    } else {
                        memcpy(var36, (double[]){0.6274509803921569, 0.37254901960784315}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1590] <= 0.5) {
                        memcpy(var36, (double[]){0.6097560975609756, 0.3902439024390244}, 2 * sizeof(double));
                    } else {
                        memcpy(var36, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[272] <= 0.5) {
                    if (input[1589] <= 0.5) {
                        memcpy(var36, (double[]){0.23684210526315788, 0.7631578947368421}, 2 * sizeof(double));
                    } else {
                        memcpy(var36, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var36, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var36, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var36, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var25, var36, 2, var24);
    double var37[2];
    if (input[1571] <= 0.5) {
        if (input[1591] <= 0.5) {
            if (input[1336] <= 0.5) {
                if (input[334] <= 0.5) {
                    if (input[1594] <= 0.5) {
                        memcpy(var37, (double[]){0.47715736040609136, 0.5228426395939086}, 2 * sizeof(double));
                    } else {
                        memcpy(var37, (double[]){0.6458333333333334, 0.3541666666666667}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var37, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var37, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[125] <= 0.5) {
                if (input[1566] <= 0.5) {
                    if (input[900] <= 0.5) {
                        memcpy(var37, (double[]){0.20454545454545456, 0.7954545454545454}, 2 * sizeof(double));
                    } else {
                        memcpy(var37, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var37, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var37, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1187] <= 0.5) {
            if (input[1085] <= 0.5) {
                if (input[1351] <= 0.5) {
                    if (input[584] <= 0.5) {
                        memcpy(var37, (double[]){0.2909090909090909, 0.7090909090909091}, 2 * sizeof(double));
                    } else {
                        memcpy(var37, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var37, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var37, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var37, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var24, var37, 2, var23);
    double var38[2];
    if (input[864] <= 0.5) {
        if (input[517] <= 0.5) {
            if (input[883] <= 0.5) {
                if (input[607] <= 0.5) {
                    if (input[1546] <= 0.5) {
                        memcpy(var38, (double[]){0.43920765027322406, 0.5607923497267759}, 2 * sizeof(double));
                    } else {
                        memcpy(var38, (double[]){0.3088235294117647, 0.6911764705882353}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var38, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var38, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var38, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var38, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var23, var38, 2, var22);
    double var39[2];
    if (input[264] <= 0.5) {
        if (input[728] <= 0.5) {
            if (input[1568] <= 0.5) {
                if (input[630] <= 0.5) {
                    if (input[34] <= 0.5) {
                        memcpy(var39, (double[]){0.46472184531886024, 0.5352781546811397}, 2 * sizeof(double));
                    } else {
                        memcpy(var39, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var39, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[882] <= 0.5) {
                    if (input[1228] <= 0.5) {
                        memcpy(var39, (double[]){0.6538461538461539, 0.34615384615384615}, 2 * sizeof(double));
                    } else {
                        memcpy(var39, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var39, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var39, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var39, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var22, var39, 2, var21);
    double var40[2];
    if (input[492] <= 0.5) {
        if (input[33] <= 0.5) {
            if (input[1218] <= 0.5) {
                if (input[1595] <= 0.5) {
                    if (input[1115] <= 0.5) {
                        memcpy(var40, (double[]){0.43537414965986393, 0.564625850340136}, 2 * sizeof(double));
                    } else {
                        memcpy(var40, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[968] <= 0.5) {
                        memcpy(var40, (double[]){0.2711864406779661, 0.7288135593220338}, 2 * sizeof(double));
                    } else {
                        memcpy(var40, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var40, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var40, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var40, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var21, var40, 2, var20);
    double var41[2];
    if (input[901] <= 0.5) {
        if (input[152] <= 0.5) {
            if (input[0] <= 0.6323265731334686) {
                if (input[947] <= 0.5) {
                    if (input[1575] <= 0.5) {
                        memcpy(var41, (double[]){0.4941935483870968, 0.5058064516129033}, 2 * sizeof(double));
                    } else {
                        memcpy(var41, (double[]){0.26666666666666666, 0.7333333333333333}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var41, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1553] <= 0.5) {
                    if (input[317] <= 0.5) {
                        memcpy(var41, (double[]){0.38636363636363635, 0.6136363636363636}, 2 * sizeof(double));
                    } else {
                        memcpy(var41, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[438] <= 0.5) {
                        memcpy(var41, (double[]){0.7, 0.3}, 2 * sizeof(double));
                    } else {
                        memcpy(var41, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var41, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var41, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var20, var41, 2, var19);
    double var42[2];
    if (input[1434] <= 0.5) {
        if (input[109] <= 0.5) {
            if (input[1457] <= 0.5) {
                if (input[573] <= 0.5) {
                    if (input[1553] <= 0.5) {
                        memcpy(var42, (double[]){0.42005420054200543, 0.5799457994579946}, 2 * sizeof(double));
                    } else {
                        memcpy(var42, (double[]){0.6730769230769231, 0.3269230769230769}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var42, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var42, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var42, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var42, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var19, var42, 2, var18);
    double var43[2];
    if (input[589] <= 0.5) {
        if (input[336] <= 0.5) {
            if (input[57] <= 0.5) {
                if (input[1573] <= 0.5) {
                    if (input[97] <= 0.5) {
                        memcpy(var43, (double[]){0.40054127198917455, 0.5994587280108254}, 2 * sizeof(double));
                    } else {
                        memcpy(var43, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1577] <= 0.5) {
                        memcpy(var43, (double[]){0.7692307692307693, 0.23076923076923078}, 2 * sizeof(double));
                    } else {
                        memcpy(var43, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var43, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var43, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var43, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var18, var43, 2, var17);
    double var44[2];
    if (input[1149] <= 0.5) {
        if (input[516] <= 0.5) {
            if (input[874] <= 0.5) {
                if (input[0] <= 0.6323265731334686) {
                    if (input[946] <= 0.5) {
                        memcpy(var44, (double[]){0.5104712041884817, 0.4895287958115183}, 2 * sizeof(double));
                    } else {
                        memcpy(var44, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1246] <= 0.5) {
                        memcpy(var44, (double[]){0.4109947643979058, 0.5890052356020943}, 2 * sizeof(double));
                    } else {
                        memcpy(var44, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var44, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var44, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var44, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var17, var44, 2, var16);
    double var45[2];
    if (input[1583] <= 0.5) {
        if (input[1597] <= 0.5) {
            if (input[106] <= 0.5) {
                if (input[1563] <= 0.5) {
                    if (input[449] <= 0.5) {
                        memcpy(var45, (double[]){0.4625998547567175, 0.5374001452432825}, 2 * sizeof(double));
                    } else {
                        memcpy(var45, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1581] <= 0.5) {
                        memcpy(var45, (double[]){0.3050847457627119, 0.6949152542372882}, 2 * sizeof(double));
                    } else {
                        memcpy(var45, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var45, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1570] <= 0.5) {
                if (input[1547] <= 0.5) {
                    if (input[194] <= 0.5) {
                        memcpy(var45, (double[]){0.2, 0.8}, 2 * sizeof(double));
                    } else {
                        memcpy(var45, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var45, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var45, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1557] <= 0.5) {
            if (input[1573] <= 0.5) {
                if (input[181] <= 0.5) {
                    if (input[0] <= -1.534437656402588) {
                        memcpy(var45, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var45, (double[]){0.15, 0.85}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var45, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var45, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var45, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var16, var45, 2, var15);
    double var46[2];
    if (input[1263] <= 0.5) {
        if (input[506] <= 0.5) {
            if (input[745] <= 0.5) {
                if (input[1560] <= 0.5) {
                    if (input[1574] <= 0.5) {
                        memcpy(var46, (double[]){0.4348127600554785, 0.5651872399445215}, 2 * sizeof(double));
                    } else {
                        memcpy(var46, (double[]){0.6590909090909091, 0.3409090909090909}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1587] <= 0.5) {
                        memcpy(var46, (double[]){0.5581395348837209, 0.4418604651162791}, 2 * sizeof(double));
                    } else {
                        memcpy(var46, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var46, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var46, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var46, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var15, var46, 2, var14);
    double var47[2];
    if (input[316] <= 0.5) {
        if (input[1564] <= 0.5) {
            if (input[1571] <= 0.5) {
                if (input[1072] <= 0.5) {
                    if (input[802] <= 0.5) {
                        memcpy(var47, (double[]){0.4530812324929972, 0.5469187675070029}, 2 * sizeof(double));
                    } else {
                        memcpy(var47, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var47, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1588] <= 0.5) {
                    if (input[1268] <= 0.5) {
                        memcpy(var47, (double[]){0.22641509433962265, 0.7735849056603774}, 2 * sizeof(double));
                    } else {
                        memcpy(var47, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var47, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[457] <= 0.5) {
                if (input[193] <= 0.5) {
                    if (input[837] <= 0.5) {
                        memcpy(var47, (double[]){0.22727272727272727, 0.7727272727272727}, 2 * sizeof(double));
                    } else {
                        memcpy(var47, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var47, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var47, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var47, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var14, var47, 2, var13);
    double var48[2];
    if (input[1579] <= 0.5) {
        if (input[95] <= 0.5) {
            if (input[1192] <= 0.5) {
                if (input[1591] <= 0.5) {
                    if (input[311] <= 0.5) {
                        memcpy(var48, (double[]){0.4508138711960368, 0.5491861288039632}, 2 * sizeof(double));
                    } else {
                        memcpy(var48, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1549] <= 0.5) {
                        memcpy(var48, (double[]){0.23636363636363636, 0.7636363636363637}, 2 * sizeof(double));
                    } else {
                        memcpy(var48, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var48, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var48, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[388] <= 0.5) {
            if (input[250] <= 0.5) {
                if (input[1556] <= 0.5) {
                    if (input[1006] <= 0.5) {
                        memcpy(var48, (double[]){0.3269230769230769, 0.6730769230769231}, 2 * sizeof(double));
                    } else {
                        memcpy(var48, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.2660878598690033) {
                        memcpy(var48, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var48, (double[]){0.6, 0.4}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var48, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var48, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var13, var48, 2, var12);
    double var49[2];
    if (input[38] <= 0.5) {
        if (input[1603] <= 0.5) {
            if (input[523] <= 0.5) {
                if (input[1602] <= 0.5) {
                    if (input[779] <= 0.5) {
                        memcpy(var49, (double[]){0.46721877156659763, 0.5327812284334024}, 2 * sizeof(double));
                    } else {
                        memcpy(var49, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1299] <= 0.5) {
                        memcpy(var49, (double[]){0.2631578947368421, 0.7368421052631579}, 2 * sizeof(double));
                    } else {
                        memcpy(var49, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var49, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[665] <= 0.5) {
                if (input[863] <= 0.5) {
                    if (input[1302] <= 0.5) {
                        memcpy(var49, (double[]){0.07894736842105263, 0.9210526315789473}, 2 * sizeof(double));
                    } else {
                        memcpy(var49, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var49, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var49, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var49, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var12, var49, 2, var11);
    double var50[2];
    if (input[1573] <= 0.5) {
        if (input[384] <= 0.5) {
            if (input[1585] <= 0.5) {
                if (input[1561] <= 0.5) {
                    if (input[1565] <= 0.5) {
                        memcpy(var50, (double[]){0.42, 0.58}, 2 * sizeof(double));
                    } else {
                        memcpy(var50, (double[]){0.7058823529411765, 0.29411764705882354}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1593] <= 0.5) {
                        memcpy(var50, (double[]){0.6122448979591837, 0.3877551020408163}, 2 * sizeof(double));
                    } else {
                        memcpy(var50, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= -1.3758939504623413) {
                    if (input[1551] <= 0.5) {
                        memcpy(var50, (double[]){0.625, 0.375}, 2 * sizeof(double));
                    } else {
                        memcpy(var50, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1350] <= 0.5) {
                        memcpy(var50, (double[]){0.17391304347826086, 0.8260869565217391}, 2 * sizeof(double));
                    } else {
                        memcpy(var50, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var50, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1580] <= 0.5) {
            if (input[0] <= 0.8701421916484833) {
                if (input[773] <= 0.5) {
                    if (input[989] <= 0.5) {
                        memcpy(var50, (double[]){0.4482758620689655, 0.5517241379310345}, 2 * sizeof(double));
                    } else {
                        memcpy(var50, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var50, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1597] <= 0.5) {
                    memcpy(var50, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var50, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var50, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var11, var50, 2, var10);
    double var51[2];
    if (input[310] <= 0.5) {
        if (input[1573] <= 0.5) {
            if (input[1564] <= 0.5) {
                if (input[41] <= 0.5) {
                    if (input[1591] <= 0.5) {
                        memcpy(var51, (double[]){0.44795405599425697, 0.552045944005743}, 2 * sizeof(double));
                    } else {
                        memcpy(var51, (double[]){0.18333333333333332, 0.8166666666666667}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var51, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[457] <= 0.5) {
                    if (input[1600] <= 0.5) {
                        memcpy(var51, (double[]){0.1891891891891892, 0.8108108108108109}, 2 * sizeof(double));
                    } else {
                        memcpy(var51, (double[]){0.5, 0.5}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var51, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1592] <= 0.5) {
                if (input[737] <= 0.5) {
                    if (input[1601] <= 0.5) {
                        memcpy(var51, (double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                    } else {
                        memcpy(var51, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var51, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var51, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var51, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var10, var51, 2, var9);
    double var52[2];
    if (input[775] <= 0.5) {
        if (input[417] <= 0.5) {
            if (input[1300] <= 0.5) {
                if (input[1545] <= 0.5) {
                    if (input[1562] <= 0.5) {
                        memcpy(var52, (double[]){0.4408304498269896, 0.5591695501730104}, 2 * sizeof(double));
                    } else {
                        memcpy(var52, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1408] <= 0.5) {
                        memcpy(var52, (double[]){0.3023255813953488, 0.6976744186046512}, 2 * sizeof(double));
                    } else {
                        memcpy(var52, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var52, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var52, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var52, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var9, var52, 2, var8);
    double var53[2];
    if (input[1602] <= 0.5) {
        if (input[1033] <= 0.5) {
            if (input[1562] <= 0.5) {
                if (input[996] <= 0.5) {
                    if (input[1262] <= 0.5) {
                        memcpy(var53, (double[]){0.4399171270718232, 0.5600828729281768}, 2 * sizeof(double));
                    } else {
                        memcpy(var53, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var53, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[891] <= 0.5) {
                    if (input[550] <= 0.5) {
                        memcpy(var53, (double[]){0.6129032258064516, 0.3870967741935484}, 2 * sizeof(double));
                    } else {
                        memcpy(var53, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var53, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var53, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1556] <= 0.5) {
            if (input[831] <= 0.5) {
                if (input[133] <= 0.5) {
                    if (input[930] <= 0.5) {
                        memcpy(var53, (double[]){0.2826086956521739, 0.717391304347826}, 2 * sizeof(double));
                    } else {
                        memcpy(var53, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var53, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var53, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var53, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var8, var53, 2, var7);
    double var54[2];
    if (input[530] <= 0.5) {
        if (input[1550] <= 0.5) {
            if (input[863] <= 0.5) {
                if (input[1571] <= 0.5) {
                    if (input[1181] <= 0.5) {
                        memcpy(var54, (double[]){0.458981612446959, 0.541018387553041}, 2 * sizeof(double));
                    } else {
                        memcpy(var54, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1129] <= 0.5) {
                        memcpy(var54, (double[]){0.31343283582089554, 0.6865671641791045}, 2 * sizeof(double));
                    } else {
                        memcpy(var54, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var54, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[429] <= 0.5) {
                if (input[178] <= 0.5) {
                    if (input[1603] <= 0.5) {
                        memcpy(var54, (double[]){0.1875, 0.8125}, 2 * sizeof(double));
                    } else {
                        memcpy(var54, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var54, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var54, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var54, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var7, var54, 2, var6);
    double var55[2];
    if (input[1581] <= 0.5) {
        if (input[1552] <= 0.5) {
            if (input[1591] <= 0.5) {
                if (input[1167] <= 0.5) {
                    if (input[1563] <= 0.5) {
                        memcpy(var55, (double[]){0.4617691154422789, 0.5382308845577212}, 2 * sizeof(double));
                    } else {
                        memcpy(var55, (double[]){0.3157894736842105, 0.6842105263157895}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var55, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[12] <= 0.5) {
                    if (input[1432] <= 0.5) {
                        memcpy(var55, (double[]){0.14634146341463414, 0.8536585365853658}, 2 * sizeof(double));
                    } else {
                        memcpy(var55, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var55, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= -0.9795345962047577) {
                if (input[0] <= -1.0588064789772034) {
                    if (input[1590] <= 0.5) {
                        memcpy(var55, (double[]){0.25, 0.75}, 2 * sizeof(double));
                    } else {
                        memcpy(var55, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var55, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var55, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1546] <= 0.5) {
            if (input[1347] <= 0.5) {
                if (input[1568] <= 0.5) {
                    if (input[790] <= 0.5) {
                        memcpy(var55, (double[]){0.7021276595744681, 0.2978723404255319}, 2 * sizeof(double));
                    } else {
                        memcpy(var55, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.5039034187793732) {
                        memcpy(var55, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var55, (double[]){0.25, 0.75}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var55, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var55, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var6, var55, 2, var5);
    double var56[2];
    if (input[1558] <= 0.5) {
        if (input[1571] <= 0.5) {
            if (input[1503] <= 0.5) {
                if (input[1598] <= 0.5) {
                    if (input[756] <= 0.5) {
                        memcpy(var56, (double[]){0.4396551724137931, 0.5603448275862069}, 2 * sizeof(double));
                    } else {
                        memcpy(var56, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1566] <= 0.5) {
                        memcpy(var56, (double[]){0.1891891891891892, 0.8108108108108109}, 2 * sizeof(double));
                    } else {
                        memcpy(var56, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var56, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1596] <= 0.5) {
                if (input[875] <= 0.5) {
                    if (input[985] <= 0.5) {
                        memcpy(var56, (double[]){0.20967741935483872, 0.7903225806451613}, 2 * sizeof(double));
                    } else {
                        memcpy(var56, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var56, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var56, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[820] <= 0.5) {
            if (input[394] <= 0.5) {
                if (input[1140] <= 0.5) {
                    if (input[1585] <= 0.5) {
                        memcpy(var56, (double[]){0.22580645161290322, 0.7741935483870968}, 2 * sizeof(double));
                    } else {
                        memcpy(var56, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var56, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var56, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var56, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var5, var56, 2, var4);
    double var57[2];
    if (input[217] <= 0.5) {
        if (input[337] <= 0.5) {
            if (input[765] <= 0.5) {
                if (input[1563] <= 0.5) {
                    if (input[1156] <= 0.5) {
                        memcpy(var57, (double[]){0.4371176070700204, 0.5628823929299797}, 2 * sizeof(double));
                    } else {
                        memcpy(var57, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1239] <= 0.5) {
                        memcpy(var57, (double[]){0.3389830508474576, 0.6610169491525424}, 2 * sizeof(double));
                    } else {
                        memcpy(var57, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var57, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var57, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var57, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var4, var57, 2, var3);
    double var58[2];
    if (input[1553] <= 0.5) {
        if (input[1192] <= 0.5) {
            if (input[1218] <= 0.5) {
                if (input[1120] <= 0.5) {
                    if (input[326] <= 0.5) {
                        memcpy(var58, (double[]){0.43686006825938567, 0.5631399317406144}, 2 * sizeof(double));
                    } else {
                        memcpy(var58, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var58, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var58, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var58, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1409] <= 0.5) {
            if (input[1598] <= 0.5) {
                if (input[126] <= 0.5) {
                    if (input[1418] <= 0.5) {
                        memcpy(var58, (double[]){0.7068965517241379, 0.29310344827586204}, 2 * sizeof(double));
                    } else {
                        memcpy(var58, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var58, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var58, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var58, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var3, var58, 2, var2);
    double var59[2];
    if (input[148] <= 0.5) {
        if (input[518] <= 0.5) {
            if (input[1387] <= 0.5) {
                if (input[1565] <= 0.5) {
                    if (input[196] <= 0.5) {
                        memcpy(var59, (double[]){0.43454790823211875, 0.5654520917678812}, 2 * sizeof(double));
                    } else {
                        memcpy(var59, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[373] <= 0.5) {
                        memcpy(var59, (double[]){0.6739130434782609, 0.32608695652173914}, 2 * sizeof(double));
                    } else {
                        memcpy(var59, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var59, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var59, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var59, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var2, var59, 2, var1);
    mul_vector_number(var1, 0.03333333333333333, 2, var0);
    memcpy(output, var0, 2 * sizeof(double));
}
