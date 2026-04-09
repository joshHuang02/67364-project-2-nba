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
    double var31[2];
    double var32[2];
    double var33[2];
    double var34[2];
    double var35[2];
    double var36[2];
    double var37[2];
    double var38[2];
    double var39[2];
    double var40[2];
    double var41[2];
    double var42[2];
    double var43[2];
    double var44[2];
    double var45[2];
    double var46[2];
    double var47[2];
    double var48[2];
    double var49[2];
    double var50[2];
    double var51[2];
    double var52[2];
    double var53[2];
    double var54[2];
    double var55[2];
    double var56[2];
    double var57[2];
    double var58[2];
    double var59[2];
    double var60[2];
    double var61[2];
    double var62[2];
    double var63[2];
    double var64[2];
    double var65[2];
    double var66[2];
    double var67[2];
    double var68[2];
    double var69[2];
    double var70[2];
    double var71[2];
    double var72[2];
    double var73[2];
    double var74[2];
    double var75[2];
    double var76[2];
    double var77[2];
    double var78[2];
    double var79[2];
    double var80[2];
    double var81[2];
    double var82[2];
    double var83[2];
    double var84[2];
    double var85[2];
    double var86[2];
    double var87[2];
    double var88[2];
    double var89[2];
    double var90[2];
    double var91[2];
    double var92[2];
    double var93[2];
    double var94[2];
    double var95[2];
    double var96[2];
    double var97[2];
    double var98[2];
    double var99[2];
    double var100[2];
    if (input[1406] <= 0.5) {
        if (input[536] <= 0.5) {
            if (input[468] <= 0.5) {
                if (input[647] <= 0.5) {
                    if (input[645] <= 0.5) {
                        memcpy(var100, (double[]){0.4528178243774574, 0.5471821756225426}, 2 * sizeof(double));
                    } else {
                        memcpy(var100, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var100, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var100, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var100, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var100, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    double var101[2];
    if (input[519] <= 0.5) {
        if (input[321] <= 0.5) {
            if (input[417] <= 0.5) {
                if (input[1586] <= 0.5) {
                    if (input[1572] <= 0.5) {
                        memcpy(var101, (double[]){0.41321152494729446, 0.5867884750527056}, 2 * sizeof(double));
                    } else {
                        memcpy(var101, (double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1571] <= 0.5) {
                        memcpy(var101, (double[]){0.6212121212121212, 0.3787878787878788}, 2 * sizeof(double));
                    } else {
                        memcpy(var101, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var101, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var101, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var101, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var100, var101, 2, var99);
    double var102[2];
    if (input[1576] <= 0.5) {
        if (input[1546] <= 0.5) {
            if (input[252] <= 0.5) {
                if (input[1007] <= 0.5) {
                    if (input[724] <= 0.5) {
                        memcpy(var102, (double[]){0.43988684582743987, 0.5601131541725601}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1604] <= 0.5) {
                if (input[1512] <= 0.5) {
                    if (input[1225] <= 0.5) {
                        memcpy(var102, (double[]){0.21739130434782608, 0.782608695652174}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var102, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1565] <= 0.5) {
            if (input[751] <= 0.5) {
                if (input[1573] <= 0.5) {
                    if (input[126] <= 0.5) {
                        memcpy(var102, (double[]){0.559322033898305, 0.4406779661016949}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var99, var102, 2, var98);
    double var103[2];
    if (input[562] <= 0.5) {
        if (input[883] <= 0.5) {
            if (input[1051] <= 0.5) {
                if (input[1573] <= 0.5) {
                    if (input[863] <= 0.5) {
                        memcpy(var103, (double[]){0.43584521384928715, 0.5641547861507128}, 2 * sizeof(double));
                    } else {
                        memcpy(var103, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[884] <= 0.5) {
                        memcpy(var103, (double[]){0.6909090909090909, 0.3090909090909091}, 2 * sizeof(double));
                    } else {
                        memcpy(var103, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var103, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var103, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var103, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var98, var103, 2, var97);
    double var104[2];
    if (input[1155] <= 0.5) {
        if (input[1547] <= 0.5) {
            if (input[1305] <= 0.5) {
                if (input[1598] <= 0.5) {
                    if (input[1602] <= 0.5) {
                        memcpy(var104, (double[]){0.4752333094041637, 0.5247666905958364}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1551] <= 0.5) {
                        memcpy(var104, (double[]){0.21951219512195122, 0.7804878048780488}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var104, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[25] <= 0.5) {
                if (input[956] <= 0.5) {
                    if (input[1438] <= 0.5) {
                        memcpy(var104, (double[]){0.30612244897959184, 0.6938775510204082}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var104, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var104, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var104, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var97, var104, 2, var96);
    double var105[2];
    if (input[797] <= 0.5) {
        if (input[1585] <= 0.5) {
            if (input[1598] <= 0.5) {
                if (input[1594] <= 0.5) {
                    if (input[904] <= 0.5) {
                        memcpy(var105, (double[]){0.45003594536304814, 0.5499640546369519}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1547] <= 0.5) {
                        memcpy(var105, (double[]){0.6938775510204082, 0.30612244897959184}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1370] <= 0.5) {
                    if (input[728] <= 0.5) {
                        memcpy(var105, (double[]){0.17391304347826086, 0.8260869565217391}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var105, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[296] <= 0.5) {
                if (input[1564] <= 0.5) {
                    if (input[1552] <= 0.5) {
                        memcpy(var105, (double[]){0.2558139534883721, 0.7441860465116279}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var105, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var105, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var105, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var96, var105, 2, var95);
    double var106[2];
    if (input[673] <= 0.5) {
        if (input[492] <= 0.5) {
            if (input[1564] <= 0.5) {
                if (input[1565] <= 0.5) {
                    if (input[1568] <= 0.5) {
                        memcpy(var106, (double[]){0.4182726623840114, 0.5817273376159886}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.6274509803921569, 0.37254901960784315}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1590] <= 0.5) {
                        memcpy(var106, (double[]){0.6097560975609756, 0.3902439024390244}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[272] <= 0.5) {
                    if (input[1589] <= 0.5) {
                        memcpy(var106, (double[]){0.23684210526315788, 0.7631578947368421}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var106, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var106, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var106, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var95, var106, 2, var94);
    double var107[2];
    if (input[1571] <= 0.5) {
        if (input[1591] <= 0.5) {
            if (input[1336] <= 0.5) {
                if (input[334] <= 0.5) {
                    if (input[1594] <= 0.5) {
                        memcpy(var107, (double[]){0.47715736040609136, 0.5228426395939086}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.6458333333333334, 0.3541666666666667}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var107, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var107, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[125] <= 0.5) {
                if (input[1566] <= 0.5) {
                    if (input[900] <= 0.5) {
                        memcpy(var107, (double[]){0.20454545454545456, 0.7954545454545454}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var107, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var107, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1187] <= 0.5) {
            if (input[1085] <= 0.5) {
                if (input[1351] <= 0.5) {
                    if (input[584] <= 0.5) {
                        memcpy(var107, (double[]){0.2909090909090909, 0.7090909090909091}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var107, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var107, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var107, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var94, var107, 2, var93);
    double var108[2];
    if (input[864] <= 0.5) {
        if (input[517] <= 0.5) {
            if (input[883] <= 0.5) {
                if (input[607] <= 0.5) {
                    if (input[1546] <= 0.5) {
                        memcpy(var108, (double[]){0.43920765027322406, 0.5607923497267759}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.3088235294117647, 0.6911764705882353}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var108, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var108, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var108, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var108, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var93, var108, 2, var92);
    double var109[2];
    if (input[264] <= 0.5) {
        if (input[728] <= 0.5) {
            if (input[1568] <= 0.5) {
                if (input[630] <= 0.5) {
                    if (input[34] <= 0.5) {
                        memcpy(var109, (double[]){0.46472184531886024, 0.5352781546811397}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var109, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[882] <= 0.5) {
                    if (input[1228] <= 0.5) {
                        memcpy(var109, (double[]){0.6538461538461539, 0.34615384615384615}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var109, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var109, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var109, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var92, var109, 2, var91);
    double var110[2];
    if (input[492] <= 0.5) {
        if (input[33] <= 0.5) {
            if (input[1218] <= 0.5) {
                if (input[1595] <= 0.5) {
                    if (input[1115] <= 0.5) {
                        memcpy(var110, (double[]){0.43537414965986393, 0.564625850340136}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[968] <= 0.5) {
                        memcpy(var110, (double[]){0.2711864406779661, 0.7288135593220338}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var110, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var110, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var110, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var91, var110, 2, var90);
    double var111[2];
    if (input[901] <= 0.5) {
        if (input[152] <= 0.5) {
            if (input[0] <= 0.6323265731334686) {
                if (input[947] <= 0.5) {
                    if (input[1575] <= 0.5) {
                        memcpy(var111, (double[]){0.4941935483870968, 0.5058064516129033}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.26666666666666666, 0.7333333333333333}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var111, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1553] <= 0.5) {
                    if (input[317] <= 0.5) {
                        memcpy(var111, (double[]){0.38636363636363635, 0.6136363636363636}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[438] <= 0.5) {
                        memcpy(var111, (double[]){0.7, 0.3}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var111, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var111, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var90, var111, 2, var89);
    double var112[2];
    if (input[1434] <= 0.5) {
        if (input[109] <= 0.5) {
            if (input[1457] <= 0.5) {
                if (input[573] <= 0.5) {
                    if (input[1553] <= 0.5) {
                        memcpy(var112, (double[]){0.42005420054200543, 0.5799457994579946}, 2 * sizeof(double));
                    } else {
                        memcpy(var112, (double[]){0.6730769230769231, 0.3269230769230769}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var112, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var112, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var112, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var112, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var89, var112, 2, var88);
    double var113[2];
    if (input[589] <= 0.5) {
        if (input[336] <= 0.5) {
            if (input[57] <= 0.5) {
                if (input[1573] <= 0.5) {
                    if (input[97] <= 0.5) {
                        memcpy(var113, (double[]){0.40054127198917455, 0.5994587280108254}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1577] <= 0.5) {
                        memcpy(var113, (double[]){0.7692307692307693, 0.23076923076923078}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var113, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var113, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var113, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var88, var113, 2, var87);
    double var114[2];
    if (input[1149] <= 0.5) {
        if (input[516] <= 0.5) {
            if (input[874] <= 0.5) {
                if (input[0] <= 0.6323265731334686) {
                    if (input[946] <= 0.5) {
                        memcpy(var114, (double[]){0.5104712041884817, 0.4895287958115183}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1246] <= 0.5) {
                        memcpy(var114, (double[]){0.4109947643979058, 0.5890052356020943}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var114, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var87, var114, 2, var86);
    double var115[2];
    if (input[1583] <= 0.5) {
        if (input[1597] <= 0.5) {
            if (input[106] <= 0.5) {
                if (input[1563] <= 0.5) {
                    if (input[449] <= 0.5) {
                        memcpy(var115, (double[]){0.4625998547567175, 0.5374001452432825}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1581] <= 0.5) {
                        memcpy(var115, (double[]){0.3050847457627119, 0.6949152542372882}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1570] <= 0.5) {
                if (input[1547] <= 0.5) {
                    if (input[194] <= 0.5) {
                        memcpy(var115, (double[]){0.2, 0.8}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var115, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1557] <= 0.5) {
            if (input[1573] <= 0.5) {
                if (input[181] <= 0.5) {
                    if (input[0] <= -1.534437656402588) {
                        memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.15, 0.85}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var115, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var115, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var86, var115, 2, var85);
    double var116[2];
    if (input[1263] <= 0.5) {
        if (input[506] <= 0.5) {
            if (input[745] <= 0.5) {
                if (input[1560] <= 0.5) {
                    if (input[1574] <= 0.5) {
                        memcpy(var116, (double[]){0.4348127600554785, 0.5651872399445215}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.6590909090909091, 0.3409090909090909}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1587] <= 0.5) {
                        memcpy(var116, (double[]){0.5581395348837209, 0.4418604651162791}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var116, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var116, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var116, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var85, var116, 2, var84);
    double var117[2];
    if (input[316] <= 0.5) {
        if (input[1564] <= 0.5) {
            if (input[1571] <= 0.5) {
                if (input[1072] <= 0.5) {
                    if (input[802] <= 0.5) {
                        memcpy(var117, (double[]){0.4530812324929972, 0.5469187675070029}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var117, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1588] <= 0.5) {
                    if (input[1268] <= 0.5) {
                        memcpy(var117, (double[]){0.22641509433962265, 0.7735849056603774}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var117, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[457] <= 0.5) {
                if (input[193] <= 0.5) {
                    if (input[837] <= 0.5) {
                        memcpy(var117, (double[]){0.22727272727272727, 0.7727272727272727}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var117, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var117, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var117, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var84, var117, 2, var83);
    double var118[2];
    if (input[1579] <= 0.5) {
        if (input[95] <= 0.5) {
            if (input[1192] <= 0.5) {
                if (input[1591] <= 0.5) {
                    if (input[311] <= 0.5) {
                        memcpy(var118, (double[]){0.4508138711960368, 0.5491861288039632}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1549] <= 0.5) {
                        memcpy(var118, (double[]){0.23636363636363636, 0.7636363636363637}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var118, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var118, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[388] <= 0.5) {
            if (input[250] <= 0.5) {
                if (input[1556] <= 0.5) {
                    if (input[1006] <= 0.5) {
                        memcpy(var118, (double[]){0.3269230769230769, 0.6730769230769231}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.2660878598690033) {
                        memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.6, 0.4}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var118, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var83, var118, 2, var82);
    double var119[2];
    if (input[38] <= 0.5) {
        if (input[1603] <= 0.5) {
            if (input[523] <= 0.5) {
                if (input[1602] <= 0.5) {
                    if (input[779] <= 0.5) {
                        memcpy(var119, (double[]){0.46721877156659763, 0.5327812284334024}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1299] <= 0.5) {
                        memcpy(var119, (double[]){0.2631578947368421, 0.7368421052631579}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var119, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[665] <= 0.5) {
                if (input[863] <= 0.5) {
                    if (input[1302] <= 0.5) {
                        memcpy(var119, (double[]){0.07894736842105263, 0.9210526315789473}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var119, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var119, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var119, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var82, var119, 2, var81);
    double var120[2];
    if (input[1573] <= 0.5) {
        if (input[384] <= 0.5) {
            if (input[1585] <= 0.5) {
                if (input[1561] <= 0.5) {
                    if (input[1565] <= 0.5) {
                        memcpy(var120, (double[]){0.42, 0.58}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.7058823529411765, 0.29411764705882354}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1593] <= 0.5) {
                        memcpy(var120, (double[]){0.6122448979591837, 0.3877551020408163}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= -1.3758939504623413) {
                    if (input[1551] <= 0.5) {
                        memcpy(var120, (double[]){0.625, 0.375}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1350] <= 0.5) {
                        memcpy(var120, (double[]){0.17391304347826086, 0.8260869565217391}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var120, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1580] <= 0.5) {
            if (input[0] <= 0.8701421916484833) {
                if (input[773] <= 0.5) {
                    if (input[989] <= 0.5) {
                        memcpy(var120, (double[]){0.4482758620689655, 0.5517241379310345}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var120, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1597] <= 0.5) {
                    memcpy(var120, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var120, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var120, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var81, var120, 2, var80);
    double var121[2];
    if (input[310] <= 0.5) {
        if (input[1573] <= 0.5) {
            if (input[1564] <= 0.5) {
                if (input[41] <= 0.5) {
                    if (input[1591] <= 0.5) {
                        memcpy(var121, (double[]){0.44795405599425697, 0.552045944005743}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){0.18333333333333332, 0.8166666666666667}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var121, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[457] <= 0.5) {
                    if (input[1600] <= 0.5) {
                        memcpy(var121, (double[]){0.1891891891891892, 0.8108108108108109}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){0.5, 0.5}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var121, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1592] <= 0.5) {
                if (input[737] <= 0.5) {
                    if (input[1601] <= 0.5) {
                        memcpy(var121, (double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var121, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var121, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var121, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var80, var121, 2, var79);
    double var122[2];
    if (input[775] <= 0.5) {
        if (input[417] <= 0.5) {
            if (input[1300] <= 0.5) {
                if (input[1545] <= 0.5) {
                    if (input[1562] <= 0.5) {
                        memcpy(var122, (double[]){0.4408304498269896, 0.5591695501730104}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1408] <= 0.5) {
                        memcpy(var122, (double[]){0.3023255813953488, 0.6976744186046512}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var122, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var122, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var122, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var79, var122, 2, var78);
    double var123[2];
    if (input[1602] <= 0.5) {
        if (input[1033] <= 0.5) {
            if (input[1562] <= 0.5) {
                if (input[996] <= 0.5) {
                    if (input[1262] <= 0.5) {
                        memcpy(var123, (double[]){0.4399171270718232, 0.5600828729281768}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[891] <= 0.5) {
                    if (input[550] <= 0.5) {
                        memcpy(var123, (double[]){0.6129032258064516, 0.3870967741935484}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var123, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var123, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1556] <= 0.5) {
            if (input[831] <= 0.5) {
                if (input[133] <= 0.5) {
                    if (input[930] <= 0.5) {
                        memcpy(var123, (double[]){0.2826086956521739, 0.717391304347826}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var78, var123, 2, var77);
    double var124[2];
    if (input[530] <= 0.5) {
        if (input[1550] <= 0.5) {
            if (input[863] <= 0.5) {
                if (input[1571] <= 0.5) {
                    if (input[1181] <= 0.5) {
                        memcpy(var124, (double[]){0.458981612446959, 0.541018387553041}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1129] <= 0.5) {
                        memcpy(var124, (double[]){0.31343283582089554, 0.6865671641791045}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var124, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[429] <= 0.5) {
                if (input[178] <= 0.5) {
                    if (input[1603] <= 0.5) {
                        memcpy(var124, (double[]){0.1875, 0.8125}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var124, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var124, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var124, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var77, var124, 2, var76);
    double var125[2];
    if (input[1581] <= 0.5) {
        if (input[1552] <= 0.5) {
            if (input[1591] <= 0.5) {
                if (input[1167] <= 0.5) {
                    if (input[1563] <= 0.5) {
                        memcpy(var125, (double[]){0.4617691154422789, 0.5382308845577212}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.3157894736842105, 0.6842105263157895}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var125, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[12] <= 0.5) {
                    if (input[1432] <= 0.5) {
                        memcpy(var125, (double[]){0.14634146341463414, 0.8536585365853658}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var125, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= -0.9795345962047577) {
                if (input[0] <= -1.0588064789772034) {
                    if (input[1590] <= 0.5) {
                        memcpy(var125, (double[]){0.25, 0.75}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var125, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var125, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1546] <= 0.5) {
            if (input[1347] <= 0.5) {
                if (input[1568] <= 0.5) {
                    if (input[790] <= 0.5) {
                        memcpy(var125, (double[]){0.7021276595744681, 0.2978723404255319}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.5039034187793732) {
                        memcpy(var125, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.25, 0.75}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var125, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var125, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var76, var125, 2, var75);
    double var126[2];
    if (input[1558] <= 0.5) {
        if (input[1571] <= 0.5) {
            if (input[1503] <= 0.5) {
                if (input[1598] <= 0.5) {
                    if (input[756] <= 0.5) {
                        memcpy(var126, (double[]){0.4396551724137931, 0.5603448275862069}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1566] <= 0.5) {
                        memcpy(var126, (double[]){0.1891891891891892, 0.8108108108108109}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var126, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1596] <= 0.5) {
                if (input[875] <= 0.5) {
                    if (input[985] <= 0.5) {
                        memcpy(var126, (double[]){0.20967741935483872, 0.7903225806451613}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var126, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[820] <= 0.5) {
            if (input[394] <= 0.5) {
                if (input[1140] <= 0.5) {
                    if (input[1585] <= 0.5) {
                        memcpy(var126, (double[]){0.22580645161290322, 0.7741935483870968}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var126, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var75, var126, 2, var74);
    double var127[2];
    if (input[217] <= 0.5) {
        if (input[337] <= 0.5) {
            if (input[765] <= 0.5) {
                if (input[1563] <= 0.5) {
                    if (input[1156] <= 0.5) {
                        memcpy(var127, (double[]){0.4371176070700204, 0.5628823929299797}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1239] <= 0.5) {
                        memcpy(var127, (double[]){0.3389830508474576, 0.6610169491525424}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var127, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var127, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var127, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var74, var127, 2, var73);
    double var128[2];
    if (input[1553] <= 0.5) {
        if (input[1192] <= 0.5) {
            if (input[1218] <= 0.5) {
                if (input[1120] <= 0.5) {
                    if (input[326] <= 0.5) {
                        memcpy(var128, (double[]){0.43686006825938567, 0.5631399317406144}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var128, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var128, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var128, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1409] <= 0.5) {
            if (input[1598] <= 0.5) {
                if (input[126] <= 0.5) {
                    if (input[1418] <= 0.5) {
                        memcpy(var128, (double[]){0.7068965517241379, 0.29310344827586204}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var128, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var128, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var128, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var73, var128, 2, var72);
    double var129[2];
    if (input[148] <= 0.5) {
        if (input[518] <= 0.5) {
            if (input[1387] <= 0.5) {
                if (input[1565] <= 0.5) {
                    if (input[196] <= 0.5) {
                        memcpy(var129, (double[]){0.43454790823211875, 0.5654520917678812}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[373] <= 0.5) {
                        memcpy(var129, (double[]){0.6739130434782609, 0.32608695652173914}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var129, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var129, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var129, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var72, var129, 2, var71);
    double var130[2];
    if (input[130] <= 0.5) {
        if (input[1591] <= 0.5) {
            if (input[1587] <= 0.5) {
                if (input[1552] <= 0.5) {
                    if (input[735] <= 0.5) {
                        memcpy(var130, (double[]){0.4525179856115108, 0.5474820143884892}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1597] <= 0.5) {
                        memcpy(var130, (double[]){0.19148936170212766, 0.8085106382978723}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[412] <= 0.5) {
                    if (input[1514] <= 0.5) {
                        memcpy(var130, (double[]){0.65, 0.35}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var130, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1569] <= 0.5) {
                if (input[535] <= 0.5) {
                    if (input[1005] <= 0.5) {
                        memcpy(var130, (double[]){0.2653061224489796, 0.7346938775510204}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var130, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var71, var130, 2, var70);
    double var131[2];
    if (input[1546] <= 0.5) {
        if (input[976] <= 0.5) {
            if (input[1561] <= 0.5) {
                if (input[900] <= 0.5) {
                    if (input[1573] <= 0.5) {
                        memcpy(var131, (double[]){0.4324127906976744, 0.5675872093023255}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.6857142857142857, 0.3142857142857143}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var131, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1601] <= 0.5) {
                    if (input[1580] <= 0.5) {
                        memcpy(var131, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.3982076346874237) {
                        memcpy(var131, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var131, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[507] <= 0.5) {
            if (input[1510] <= 0.5) {
                if (input[1590] <= 0.5) {
                    if (input[782] <= 0.5) {
                        memcpy(var131, (double[]){0.25, 0.75}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var131, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var70, var131, 2, var69);
    double var132[2];
    if (input[356] <= 0.5) {
        if (input[1500] <= 0.5) {
            if (input[1547] <= 0.5) {
                if (input[1574] <= 0.5) {
                    if (input[968] <= 0.5) {
                        memcpy(var132, (double[]){0.43472222222222223, 0.5652777777777778}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1346] <= 0.5) {
                        memcpy(var132, (double[]){0.7045454545454546, 0.29545454545454547}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1597] <= 0.5) {
                    if (input[1349] <= 0.5) {
                        memcpy(var132, (double[]){0.27906976744186046, 0.7209302325581395}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var132, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var132, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var132, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var69, var132, 2, var68);
    double var133[2];
    if (input[1403] <= 0.5) {
        if (input[980] <= 0.5) {
            if (input[1553] <= 0.5) {
                if (input[844] <= 0.5) {
                    if (input[1560] <= 0.5) {
                        memcpy(var133, (double[]){0.43820224719101125, 0.5617977528089888}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.7169811320754716, 0.2830188679245283}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var133, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1579] <= 0.5) {
                    if (input[1597] <= 0.5) {
                        memcpy(var133, (double[]){0.673469387755102, 0.32653061224489793}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.6, 0.4}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var133, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var133, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var133, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var68, var133, 2, var67);
    double var134[2];
    if (input[1546] <= 0.5) {
        if (input[1597] <= 0.5) {
            if (input[1555] <= 0.5) {
                if (input[1557] <= 0.5) {
                    if (input[1374] <= 0.5) {
                        memcpy(var134, (double[]){0.450336071695295, 0.549663928304705}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1595] <= 0.5) {
                        memcpy(var134, (double[]){0.31746031746031744, 0.6825396825396826}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[216] <= 0.5) {
                    if (input[545] <= 0.5) {
                        memcpy(var134, (double[]){0.6521739130434783, 0.34782608695652173}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1553] <= 0.5) {
                if (input[1565] <= 0.5) {
                    if (input[372] <= 0.5) {
                        memcpy(var134, (double[]){0.21212121212121213, 0.7878787878787878}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[360] <= 0.5) {
                        memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= -0.477479487657547) {
                    memcpy(var134, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1307] <= 0.5) {
            if (input[877] <= 0.5) {
                if (input[1594] <= 0.5) {
                    if (input[1577] <= 0.5) {
                        memcpy(var134, (double[]){0.2564102564102564, 0.7435897435897436}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var67, var134, 2, var66);
    double var135[2];
    if (input[1562] <= 0.5) {
        if (input[1602] <= 0.5) {
            if (input[58] <= 0.5) {
                if (input[138] <= 0.5) {
                    if (input[1495] <= 0.5) {
                        memcpy(var135, (double[]){0.46615491974877876, 0.5338450802512212}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var135, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1036] <= 0.5) {
                if (input[0] <= 0.5266307890415192) {
                    if (input[1079] <= 0.5) {
                        memcpy(var135, (double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1322] <= 0.5) {
                        memcpy(var135, (double[]){0.3076923076923077, 0.6923076923076923}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[711] <= 0.5) {
            if (input[1589] <= 0.5) {
                if (input[1593] <= 0.5) {
                    if (input[1214] <= 0.5) {
                        memcpy(var135, (double[]){0.6842105263157895, 0.3157894736842105}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.05469620227813721) {
                        memcpy(var135, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var135, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var66, var135, 2, var65);
    double var136[2];
    if (input[1563] <= 0.5) {
        if (input[1552] <= 0.5) {
            if (input[839] <= 0.5) {
                if (input[0] <= 0.6323265731334686) {
                    if (input[979] <= 0.5) {
                        memcpy(var136, (double[]){0.5026525198938993, 0.4973474801061008}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[234] <= 0.5) {
                        memcpy(var136, (double[]){0.399702823179792, 0.600297176820208}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var136, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1590] <= 0.5) {
                if (input[1580] <= 0.5) {
                    if (input[1594] <= 0.5) {
                        memcpy(var136, (double[]){0.3023255813953488, 0.6976744186046512}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1536] <= 0.5) {
                        memcpy(var136, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1271] <= 0.5) {
                    memcpy(var136, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1586] <= 0.5) {
            if (input[1461] <= 0.5) {
                if (input[1598] <= 0.5) {
                    if (input[477] <= 0.5) {
                        memcpy(var136, (double[]){0.22916666666666666, 0.7708333333333334}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1507] <= 0.5) {
                if (input[1506] <= 0.5) {
                    memcpy(var136, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var65, var136, 2, var64);
    double var137[2];
    if (input[1594] <= 0.5) {
        if (input[70] <= 0.5) {
            if (input[1021] <= 0.5) {
                if (input[1224] <= 0.5) {
                    if (input[920] <= 0.5) {
                        memcpy(var137, (double[]){0.44081632653061226, 0.5591836734693878}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var137, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var137, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var137, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1571] <= 0.5) {
            if (input[686] <= 0.5) {
                if (input[122] <= 0.5) {
                    if (input[1418] <= 0.5) {
                        memcpy(var137, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var137, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var137, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var137, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var64, var137, 2, var63);
    double var138[2];
    if (input[779] <= 0.5) {
        if (input[1594] <= 0.5) {
            if (input[1552] <= 0.5) {
                if (input[356] <= 0.5) {
                    if (input[1471] <= 0.5) {
                        memcpy(var138, (double[]){0.44697508896797156, 0.5530249110320284}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var138, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[74] <= 0.5) {
                    if (input[1590] <= 0.5) {
                        memcpy(var138, (double[]){0.1388888888888889, 0.8611111111111112}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var138, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1552] <= 0.5) {
                if (input[1361] <= 0.5) {
                    if (input[1563] <= 0.5) {
                        memcpy(var138, (double[]){0.5869565217391305, 0.41304347826086957}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var138, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var138, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var138, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var63, var138, 2, var62);
    double var139[2];
    if (input[583] <= 0.5) {
        if (input[735] <= 0.5) {
            if (input[1581] <= 0.5) {
                if (input[1576] <= 0.5) {
                    if (input[0] <= -1.534437656402588) {
                        memcpy(var139, (double[]){0.26666666666666666, 0.7333333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.4537509104151493, 0.5462490895848507}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.5831753015518188) {
                        memcpy(var139, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.43333333333333335, 0.5666666666666667}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[526] <= 0.5) {
                    if (input[1562] <= 0.5) {
                        memcpy(var139, (double[]){0.609375, 0.390625}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var139, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var139, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var139, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var62, var139, 2, var61);
    double var140[2];
    if (input[1550] <= 0.5) {
        if (input[1327] <= 0.5) {
            if (input[0] <= 0.6323265731334686) {
                if (input[1568] <= 0.5) {
                    if (input[1567] <= 0.5) {
                        memcpy(var140, (double[]){0.4707482993197279, 0.5292517006802722}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.6923076923076923, 0.3076923076923077}, 2 * sizeof(double));
                    }
                } else {
                    if (input[894] <= 0.5) {
                        memcpy(var140, (double[]){0.7647058823529411, 0.23529411764705882}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[349] <= 0.5) {
                    if (input[162] <= 0.5) {
                        memcpy(var140, (double[]){0.41379310344827586, 0.5862068965517241}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var140, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var140, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1334] <= 0.5) {
            if (input[1282] <= 0.5) {
                if (input[467] <= 0.5) {
                    if (input[429] <= 0.5) {
                        memcpy(var140, (double[]){0.24489795918367346, 0.7551020408163265}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var140, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var140, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var140, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var61, var140, 2, var60);
    double var141[2];
    if (input[1552] <= 0.5) {
        if (input[1103] <= 0.5) {
            if (input[0] <= 0.5266307890415192) {
                if (input[1567] <= 0.5) {
                    if (input[1564] <= 0.5) {
                        memcpy(var141, (double[]){0.5040387722132472, 0.49596122778675283}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.2, 0.8}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1579] <= 0.5) {
                        memcpy(var141, (double[]){0.8, 0.2}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[525] <= 0.5) {
                    if (input[1209] <= 0.5) {
                        memcpy(var141, (double[]){0.4111111111111111, 0.5888888888888889}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var141, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var141, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1580] <= 0.5) {
            if (input[1597] <= 0.5) {
                if (input[74] <= 0.5) {
                    if (input[1599] <= 0.5) {
                        memcpy(var141, (double[]){0.09090909090909091, 0.9090909090909091}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var141, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[0] <= -0.10754409432411194) {
                    memcpy(var141, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[372] <= 0.5) {
                        memcpy(var141, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[675] <= 0.5) {
                if (input[0] <= -0.8738387823104858) {
                    memcpy(var141, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var141, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var141, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var60, var141, 2, var59);
    double var142[2];
    if (input[1397] <= 0.5) {
        if (input[902] <= 0.5) {
            if (input[1530] <= 0.5) {
                if (input[1557] <= 0.5) {
                    if (input[1277] <= 0.5) {
                        memcpy(var142, (double[]){0.4380053908355795, 0.5619946091644205}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[607] <= 0.5) {
                        memcpy(var142, (double[]){0.2916666666666667, 0.7083333333333334}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var142, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var142, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var142, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var59, var142, 2, var58);
    double var143[2];
    if (input[670] <= 0.5) {
        if (input[892] <= 0.5) {
            if (input[754] <= 0.5) {
                if (input[484] <= 0.5) {
                    if (input[951] <= 0.5) {
                        memcpy(var143, (double[]){0.44146500981033354, 0.5585349901896665}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var143, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var143, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var143, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var143, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var58, var143, 2, var57);
    double var144[2];
    if (input[1039] <= 0.5) {
        if (input[1567] <= 0.5) {
            if (input[1597] <= 0.5) {
                if (input[1557] <= 0.5) {
                    if (input[1073] <= 0.5) {
                        memcpy(var144, (double[]){0.4471188913202042, 0.5528811086797958}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[986] <= 0.5) {
                        memcpy(var144, (double[]){0.3188405797101449, 0.6811594202898551}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1571] <= 0.5) {
                    if (input[1558] <= 0.5) {
                        memcpy(var144, (double[]){0.3142857142857143, 0.6857142857142857}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var144, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[107] <= 0.5) {
                if (input[1312] <= 0.5) {
                    if (input[1603] <= 0.5) {
                        memcpy(var144, (double[]){0.75, 0.25}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var144, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var144, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var144, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var57, var144, 2, var56);
    double var145[2];
    if (input[1573] <= 0.5) {
        if (input[1480] <= 0.5) {
            if (input[1327] <= 0.5) {
                if (input[1571] <= 0.5) {
                    if (input[380] <= 0.5) {
                        memcpy(var145, (double[]){0.463859649122807, 0.536140350877193}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[399] <= 0.5) {
                        memcpy(var145, (double[]){0.20634920634920634, 0.7936507936507936}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var145, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var145, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1592] <= 0.5) {
            if (input[1444] <= 0.5) {
                if (input[1597] <= 0.5) {
                    if (input[1067] <= 0.5) {
                        memcpy(var145, (double[]){0.7297297297297297, 0.2702702702702703}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var145, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var145, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var145, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var56, var145, 2, var55);
    double var146[2];
    if (input[1552] <= 0.5) {
        if (input[757] <= 0.5) {
            if (input[1559] <= 0.5) {
                if (input[1550] <= 0.5) {
                    if (input[1256] <= 0.5) {
                        memcpy(var146, (double[]){0.4694167852062589, 0.5305832147937412}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1598] <= 0.5) {
                        memcpy(var146, (double[]){0.24324324324324326, 0.7567567567567568}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1577] <= 0.5) {
                    if (input[1464] <= 0.5) {
                        memcpy(var146, (double[]){0.35294117647058826, 0.6470588235294118}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var146, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var146, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1495] <= 0.5) {
            if (input[328] <= 0.5) {
                if (input[1603] <= 0.5) {
                    if (input[1592] <= 0.5) {
                        memcpy(var146, (double[]){0.2553191489361702, 0.7446808510638298}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var146, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var146, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var146, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var55, var146, 2, var54);
    double var147[2];
    if (input[1602] <= 0.5) {
        if (input[673] <= 0.5) {
            if (input[1561] <= 0.5) {
                if (input[412] <= 0.5) {
                    if (input[16] <= 0.5) {
                        memcpy(var147, (double[]){0.4479669193659545, 0.5520330806340454}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var147, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1604] <= 0.5) {
                    if (input[476] <= 0.5) {
                        memcpy(var147, (double[]){0.6410256410256411, 0.358974358974359}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var147, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var147, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1121] <= 0.5) {
            if (input[1546] <= 0.5) {
                if (input[1565] <= 0.5) {
                    if (input[48] <= 0.5) {
                        memcpy(var147, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1322] <= 0.5) {
                    if (input[1036] <= 0.5) {
                        memcpy(var147, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var54, var147, 2, var53);
    double var148[2];
    if (input[286] <= 0.5) {
        if (input[518] <= 0.5) {
            if (input[0] <= 0.6851744949817657) {
                if (input[1550] <= 0.5) {
                    if (input[1576] <= 0.5) {
                        memcpy(var148, (double[]){0.4935400516795866, 0.5064599483204134}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.8108108108108109, 0.1891891891891892}, 2 * sizeof(double));
                    }
                } else {
                    if (input[616] <= 0.5) {
                        memcpy(var148, (double[]){0.17857142857142858, 0.8214285714285714}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[225] <= 0.5) {
                    if (input[387] <= 0.5) {
                        memcpy(var148, (double[]){0.4072463768115942, 0.5927536231884057}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var148, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var148, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var148, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var53, var148, 2, var52);
    double var149[2];
    if (input[1552] <= 0.5) {
        if (input[534] <= 0.5) {
            if (input[463] <= 0.5) {
                if (input[1570] <= 0.5) {
                    if (input[1561] <= 0.5) {
                        memcpy(var149, (double[]){0.4288840262582057, 0.5711159737417943}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.6444444444444445, 0.35555555555555557}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1591] <= 0.5) {
                        memcpy(var149, (double[]){0.29850746268656714, 0.7014925373134329}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var149, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var149, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1527] <= 0.5) {
            if (input[840] <= 0.5) {
                if (input[372] <= 0.5) {
                    if (input[1210] <= 0.5) {
                        memcpy(var149, (double[]){0.18, 0.82}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var149, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var149, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var149, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var52, var149, 2, var51);
    double var150[2];
    if (input[1579] <= 0.5) {
        if (input[1587] <= 0.5) {
            if (input[452] <= 0.5) {
                if (input[641] <= 0.5) {
                    if (input[1593] <= 0.5) {
                        memcpy(var150, (double[]){0.4037900874635568, 0.5962099125364432}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.6862745098039216, 0.3137254901960784}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var150, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var150, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[677] <= 0.5) {
                if (input[1572] <= 0.5) {
                    if (input[1266] <= 0.5) {
                        memcpy(var150, (double[]){0.68, 0.32}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var150, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var150, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[685] <= 0.5) {
            if (input[1558] <= 0.5) {
                if (input[1560] <= 0.5) {
                    if (input[1547] <= 0.5) {
                        memcpy(var150, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var150, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var150, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var150, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var51, var150, 2, var50);
    double var151[2];
    if (input[1570] <= 0.5) {
        if (input[333] <= 0.5) {
            if (input[660] <= 0.5) {
                if (input[445] <= 0.5) {
                    if (input[1557] <= 0.5) {
                        memcpy(var151, (double[]){0.4585987261146497, 0.5414012738853503}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var151, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var151, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var151, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[83] <= 0.5) {
            if (input[1502] <= 0.5) {
                if (input[521] <= 0.5) {
                    if (input[903] <= 0.5) {
                        memcpy(var151, (double[]){0.29411764705882354, 0.7058823529411765}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var151, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var151, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var151, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var50, var151, 2, var49);
    double var152[2];
    if (input[1568] <= 0.5) {
        if (input[1602] <= 0.5) {
            if (input[943] <= 0.5) {
                if (input[829] <= 0.5) {
                    if (input[1571] <= 0.5) {
                        memcpy(var152, (double[]){0.4395043731778426, 0.5604956268221575}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.23529411764705882, 0.7647058823529411}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var152, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var152, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1322] <= 0.5) {
                if (input[439] <= 0.5) {
                    if (input[1553] <= 0.5) {
                        memcpy(var152, (double[]){0.23076923076923078, 0.7692307692307693}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var152, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var152, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1592] <= 0.5) {
            if (input[1423] <= 0.5) {
                if (input[209] <= 0.5) {
                    if (input[685] <= 0.5) {
                        memcpy(var152, (double[]){0.6078431372549019, 0.39215686274509803}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var152, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var152, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var152, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var49, var152, 2, var48);
    double var153[2];
    if (input[1562] <= 0.5) {
        if (input[676] <= 0.5) {
            if (input[531] <= 0.5) {
                if (input[1591] <= 0.5) {
                    if (input[437] <= 0.5) {
                        memcpy(var153, (double[]){0.453015427769986, 0.5469845722300141}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[766] <= 0.5) {
                        memcpy(var153, (double[]){0.1694915254237288, 0.8305084745762712}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var153, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var153, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1443] <= 0.5) {
            if (input[1603] <= 0.5) {
                if (input[957] <= 0.5) {
                    if (input[1579] <= 0.5) {
                        memcpy(var153, (double[]){0.6829268292682927, 0.3170731707317073}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var153, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var153, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var153, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var48, var153, 2, var47);
    double var154[2];
    if (input[897] <= 0.5) {
        if (input[1330] <= 0.5) {
            if (input[357] <= 0.5) {
                if (input[728] <= 0.5) {
                    if (input[902] <= 0.5) {
                        memcpy(var154, (double[]){0.4476439790575916, 0.5523560209424084}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var154, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var154, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var154, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var154, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var47, var154, 2, var46);
    double var155[2];
    if (input[111] <= 0.5) {
        if (input[1567] <= 0.5) {
            if (input[1589] <= 0.5) {
                if (input[0] <= 0.6323265731334686) {
                    if (input[1584] <= 0.5) {
                        memcpy(var155, (double[]){0.4708222811671088, 0.5291777188328912}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.6842105263157895, 0.3157894736842105}, 2 * sizeof(double));
                    }
                } else {
                    if (input[443] <= 0.5) {
                        memcpy(var155, (double[]){0.37237237237237236, 0.6276276276276276}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[750] <= 0.5) {
                    if (input[664] <= 0.5) {
                        memcpy(var155, (double[]){0.6585365853658537, 0.34146341463414637}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[343] <= 0.5) {
                if (input[911] <= 0.5) {
                    if (input[1219] <= 0.5) {
                        memcpy(var155, (double[]){0.6862745098039216, 0.3137254901960784}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var155, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var46, var155, 2, var45);
    double var156[2];
    if (input[1568] <= 0.5) {
        if (input[428] <= 0.5) {
            if (input[868] <= 0.5) {
                if (input[1594] <= 0.5) {
                    if (input[1591] <= 0.5) {
                        memcpy(var156, (double[]){0.4357864357864358, 0.5642135642135642}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){0.18604651162790697, 0.813953488372093}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1565] <= 0.5) {
                        memcpy(var156, (double[]){0.7115384615384616, 0.28846153846153844}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var156, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var156, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[0] <= -0.9531106650829315) {
            if (input[757] <= 0.5) {
                if (input[1597] <= 0.5) {
                    if (input[562] <= 0.5) {
                        memcpy(var156, (double[]){0.9473684210526315, 0.05263157894736842}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var156, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var156, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[324] <= 0.5) {
                if (input[1590] <= 0.5) {
                    if (input[1593] <= 0.5) {
                        memcpy(var156, (double[]){0.44, 0.56}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var156, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var156, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var45, var156, 2, var44);
    double var157[2];
    if (input[1594] <= 0.5) {
        if (input[0] <= 0.6323265731334686) {
            if (input[41] <= 0.5) {
                if (input[992] <= 0.5) {
                    if (input[125] <= 0.5) {
                        memcpy(var157, (double[]){0.481029810298103, 0.518970189701897}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var157, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var157, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1577] <= 0.5) {
                if (input[1166] <= 0.5) {
                    if (input[1357] <= 0.5) {
                        memcpy(var157, (double[]){0.3840682788051209, 0.615931721194879}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var157, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1548] <= 0.5) {
                    if (input[1551] <= 0.5) {
                        memcpy(var157, (double[]){0.5, 0.5}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var157, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1418] <= 0.5) {
            if (input[257] <= 0.5) {
                if (input[1566] <= 0.5) {
                    if (input[981] <= 0.5) {
                        memcpy(var157, (double[]){0.7391304347826086, 0.2608695652173913}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.5) {
                        memcpy(var157, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var157, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var157, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var44, var157, 2, var43);
    double var158[2];
    if (input[68] <= 0.5) {
        if (input[1553] <= 0.5) {
            if (input[1602] <= 0.5) {
                if (input[1556] <= 0.5) {
                    if (input[446] <= 0.5) {
                        memcpy(var158, (double[]){0.43951324266284897, 0.560486757337151}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[634] <= 0.5) {
                        memcpy(var158, (double[]){0.32653061224489793, 0.673469387755102}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1299] <= 0.5) {
                    if (input[1547] <= 0.5) {
                        memcpy(var158, (double[]){0.17073170731707318, 0.8292682926829268}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var158, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1029] <= 0.5) {
                if (input[1588] <= 0.5) {
                    if (input[518] <= 0.5) {
                        memcpy(var158, (double[]){0.7619047619047619, 0.23809523809523808}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var158, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var158, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var158, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var43, var158, 2, var42);
    double var159[2];
    if (input[175] <= 0.5) {
        if (input[74] <= 0.5) {
            if (input[1594] <= 0.5) {
                if (input[1567] <= 0.5) {
                    if (input[1591] <= 0.5) {
                        memcpy(var159, (double[]){0.45098039215686275, 0.5490196078431373}, 2 * sizeof(double));
                    } else {
                        memcpy(var159, (double[]){0.17647058823529413, 0.8235294117647058}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1413] <= 0.5) {
                        memcpy(var159, (double[]){0.7037037037037037, 0.2962962962962963}, 2 * sizeof(double));
                    } else {
                        memcpy(var159, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1074] <= 0.5) {
                    if (input[1551] <= 0.5) {
                        memcpy(var159, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var159, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var159, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var159, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var159, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var42, var159, 2, var41);
    double var160[2];
    if (input[1553] <= 0.5) {
        if (input[308] <= 0.5) {
            if (input[807] <= 0.5) {
                if (input[1552] <= 0.5) {
                    if (input[1589] <= 0.5) {
                        memcpy(var160, (double[]){0.4458874458874459, 0.5541125541125541}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.6521739130434783, 0.34782608695652173}, 2 * sizeof(double));
                    }
                } else {
                    if (input[539] <= 0.5) {
                        memcpy(var160, (double[]){0.30158730158730157, 0.6984126984126984}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var160, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var160, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[727] <= 0.5) {
            if (input[1409] <= 0.5) {
                if (input[1598] <= 0.5) {
                    if (input[1246] <= 0.5) {
                        memcpy(var160, (double[]){0.75, 0.25}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var160, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var160, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var160, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var41, var160, 2, var40);
    double var161[2];
    if (input[1555] <= 0.5) {
        if (input[1256] <= 0.5) {
            if (input[544] <= 0.5) {
                if (input[507] <= 0.5) {
                    if (input[1591] <= 0.5) {
                        memcpy(var161, (double[]){0.41718213058419246, 0.5828178694158076}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.20512820512820512, 0.7948717948717948}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var161, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var161, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var161, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1242] <= 0.5) {
            if (input[1603] <= 0.5) {
                if (input[1596] <= 0.5) {
                    if (input[1597] <= 0.5) {
                        memcpy(var161, (double[]){0.7647058823529411, 0.23529411764705882}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var161, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var161, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var161, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var40, var161, 2, var39);
    double var162[2];
    if (input[133] <= 0.5) {
        if (input[1029] <= 0.5) {
            if (input[1339] <= 0.5) {
                if (input[1550] <= 0.5) {
                    if (input[215] <= 0.5) {
                        memcpy(var162, (double[]){0.4609690444145357, 0.5390309555854643}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1583] <= 0.5) {
                        memcpy(var162, (double[]){0.20930232558139536, 0.7906976744186046}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var162, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var162, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var162, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var39, var162, 2, var38);
    double var163[2];
    if (input[1574] <= 0.5) {
        if (input[76] <= 0.5) {
            if (input[355] <= 0.5) {
                if (input[492] <= 0.5) {
                    if (input[1576] <= 0.5) {
                        memcpy(var163, (double[]){0.4398051496172582, 0.5601948503827419}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var163, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var163, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var163, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[0] <= 0.79087033867836) {
            if (input[1601] <= 0.5) {
                if (input[838] <= 0.5) {
                    if (input[1592] <= 0.5) {
                        memcpy(var163, (double[]){0.75, 0.25}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var163, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var163, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[493] <= 0.5) {
                if (input[1346] <= 0.5) {
                    if (input[1588] <= 0.5) {
                        memcpy(var163, (double[]){0.8, 0.2}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var163, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var163, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var38, var163, 2, var37);
    double var164[2];
    if (input[1552] <= 0.5) {
        if (input[1260] <= 0.5) {
            if (input[150] <= 0.5) {
                if (input[576] <= 0.5) {
                    if (input[1317] <= 0.5) {
                        memcpy(var164, (double[]){0.4621160409556314, 0.5378839590443686}, 2 * sizeof(double));
                    } else {
                        memcpy(var164, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var164, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var164, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var164, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1527] <= 0.5) {
            if (input[1540] <= 0.5) {
                if (input[1353] <= 0.5) {
                    if (input[1524] <= 0.5) {
                        memcpy(var164, (double[]){0.23728813559322035, 0.7627118644067796}, 2 * sizeof(double));
                    } else {
                        memcpy(var164, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var164, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var164, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var164, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var37, var164, 2, var36);
    double var165[2];
    if (input[516] <= 0.5) {
        if (input[1564] <= 0.5) {
            if (input[0] <= 0.6323265731334686) {
                if (input[597] <= 0.5) {
                    if (input[74] <= 0.5) {
                        memcpy(var165, (double[]){0.496, 0.504}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var165, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1312] <= 0.5) {
                    if (input[308] <= 0.5) {
                        memcpy(var165, (double[]){0.3877551020408163, 0.6122448979591837}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var165, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1578] <= 0.5) {
                if (input[0] <= 1.1079577803611755) {
                    if (input[404] <= 0.5) {
                        memcpy(var165, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var165, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var165, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var165, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var36, var165, 2, var35);
    double var166[2];
    if (input[1553] <= 0.5) {
        if (input[316] <= 0.5) {
            if (input[1362] <= 0.5) {
                if (input[1556] <= 0.5) {
                    if (input[1224] <= 0.5) {
                        memcpy(var166, (double[]){0.4297752808988764, 0.5702247191011236}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[354] <= 0.5) {
                        memcpy(var166, (double[]){0.21568627450980393, 0.7843137254901961}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var166, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var166, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[248] <= 0.5) {
            if (input[1591] <= 0.5) {
                if (input[1597] <= 0.5) {
                    if (input[1578] <= 0.5) {
                        memcpy(var166, (double[]){0.6382978723404256, 0.3617021276595745}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var166, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var166, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var166, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var35, var166, 2, var34);
    double var167[2];
    if (input[1561] <= 0.5) {
        if (input[77] <= 0.5) {
            if (input[554] <= 0.5) {
                if (input[1573] <= 0.5) {
                    if (input[967] <= 0.5) {
                        memcpy(var167, (double[]){0.41217634709587125, 0.5878236529041287}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1582] <= 0.5) {
                        memcpy(var167, (double[]){0.7777777777777778, 0.2222222222222222}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var167, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var167, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1601] <= 0.5) {
            if (input[1181] <= 0.5) {
                if (input[1588] <= 0.5) {
                    if (input[1377] <= 0.5) {
                        memcpy(var167, (double[]){0.6078431372549019, 0.39215686274509803}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var167, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var167, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[744] <= 0.5) {
                memcpy(var167, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var167, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var34, var167, 2, var33);
    double var168[2];
    if (input[1581] <= 0.5) {
        if (input[1015] <= 0.5) {
            if (input[384] <= 0.5) {
                if (input[88] <= 0.5) {
                    if (input[1562] <= 0.5) {
                        memcpy(var168, (double[]){0.4340013821700069, 0.5659986178299931}, 2 * sizeof(double));
                    } else {
                        memcpy(var168, (double[]){0.7567567567567568, 0.24324324324324326}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var168, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var168, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var168, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1214] <= 0.5) {
            if (input[947] <= 0.5) {
                if (input[721] <= 0.5) {
                    if (input[1164] <= 0.5) {
                        memcpy(var168, (double[]){0.6888888888888889, 0.3111111111111111}, 2 * sizeof(double));
                    } else {
                        memcpy(var168, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var168, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var168, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var168, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var33, var168, 2, var32);
    double var169[2];
    if (input[1553] <= 0.5) {
        if (input[1562] <= 0.5) {
            if (input[673] <= 0.5) {
                if (input[1589] <= 0.5) {
                    if (input[761] <= 0.5) {
                        memcpy(var169, (double[]){0.41138790035587186, 0.5886120996441281}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1566] <= 0.5) {
                        memcpy(var169, (double[]){0.6578947368421053, 0.34210526315789475}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var169, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1597] <= 0.5) {
                if (input[1604] <= 0.5) {
                    if (input[1214] <= 0.5) {
                        memcpy(var169, (double[]){0.6756756756756757, 0.32432432432432434}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var169, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var169, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1590] <= 0.5) {
            if (input[1426] <= 0.5) {
                if (input[0] <= 0.8701421916484833) {
                    if (input[1043] <= 0.5) {
                        memcpy(var169, (double[]){0.7037037037037037, 0.2962962962962963}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1587] <= 0.5) {
                        memcpy(var169, (double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var169, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var169, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var32, var169, 2, var31);
    double var170[2];
    if (input[1477] <= 0.5) {
        if (input[1598] <= 0.5) {
            if (input[1547] <= 0.5) {
                if (input[1209] <= 0.5) {
                    if (input[236] <= 0.5) {
                        memcpy(var170, (double[]){0.4443671766342142, 0.5556328233657858}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var170, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1040] <= 0.5) {
                    if (input[1174] <= 0.5) {
                        memcpy(var170, (double[]){0.2708333333333333, 0.7291666666666666}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var170, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1546] <= 0.5) {
                if (input[859] <= 0.5) {
                    if (input[1560] <= 0.5) {
                        memcpy(var170, (double[]){0.2, 0.8}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var170, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var170, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var170, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var31, var170, 2, var30);
    double var171[2];
    if (input[304] <= 0.5) {
        if (input[511] <= 0.5) {
            if (input[1467] <= 0.5) {
                if (input[1552] <= 0.5) {
                    if (input[97] <= 0.5) {
                        memcpy(var171, (double[]){0.4666666666666667, 0.5333333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[645] <= 0.5) {
                        memcpy(var171, (double[]){0.1206896551724138, 0.8793103448275862}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var171, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var171, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var171, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var30, var171, 2, var29);
    double var172[2];
    if (input[1503] <= 0.5) {
        if (input[770] <= 0.5) {
            if (input[130] <= 0.5) {
                if (input[1550] <= 0.5) {
                    if (input[1603] <= 0.5) {
                        memcpy(var172, (double[]){0.47214484679665736, 0.5278551532033426}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){0.2127659574468085, 0.7872340425531915}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1577] <= 0.5) {
                        memcpy(var172, (double[]){0.11764705882352941, 0.8823529411764706}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var172, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var172, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var172, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var29, var172, 2, var28);
    double var173[2];
    if (input[303] <= 0.5) {
        if (input[188] <= 0.5) {
            if (input[315] <= 0.5) {
                if (input[356] <= 0.5) {
                    if (input[1032] <= 0.5) {
                        memcpy(var173, (double[]){0.43184796854521623, 0.5681520314547838}, 2 * sizeof(double));
                    } else {
                        memcpy(var173, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var173, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var173, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var173, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var173, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var28, var173, 2, var27);
    double var174[2];
    if (input[1587] <= 0.5) {
        if (input[1573] <= 0.5) {
            if (input[1356] <= 0.5) {
                if (input[0] <= 0.6323265731334686) {
                    if (input[44] <= 0.5) {
                        memcpy(var174, (double[]){0.47696476964769646, 0.5230352303523035}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[381] <= 0.5) {
                        memcpy(var174, (double[]){0.3665223665223665, 0.6334776334776335}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var174, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[968] <= 0.5) {
                if (input[1345] <= 0.5) {
                    if (input[1580] <= 0.5) {
                        memcpy(var174, (double[]){0.75, 0.25}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var174, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var174, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1427] <= 0.5) {
            if (input[1369] <= 0.5) {
                if (input[777] <= 0.5) {
                    if (input[418] <= 0.5) {
                        memcpy(var174, (double[]){0.6481481481481481, 0.35185185185185186}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var174, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var174, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var174, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var27, var174, 2, var26);
    double var175[2];
    if (input[156] <= 0.5) {
        if (input[1485] <= 0.5) {
            if (input[1564] <= 0.5) {
                if (input[786] <= 0.5) {
                    if (input[1565] <= 0.5) {
                        memcpy(var175, (double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                    } else {
                        memcpy(var175, (double[]){0.6388888888888888, 0.3611111111111111}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var175, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1581] <= 0.5) {
                    if (input[1516] <= 0.5) {
                        memcpy(var175, (double[]){0.20930232558139536, 0.7906976744186046}, 2 * sizeof(double));
                    } else {
                        memcpy(var175, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 0.7115984559059143) {
                        memcpy(var175, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var175, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var175, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var175, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var26, var175, 2, var25);
    double var176[2];
    if (input[71] <= 0.5) {
        if (input[1585] <= 0.5) {
            if (input[754] <= 0.5) {
                if (input[1589] <= 0.5) {
                    if (input[976] <= 0.5) {
                        memcpy(var176, (double[]){0.4365024288688411, 0.563497571131159}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1560] <= 0.5) {
                        memcpy(var176, (double[]){0.6078431372549019, 0.39215686274509803}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var176, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1211] <= 0.5) {
                if (input[1091] <= 0.5) {
                    if (input[1553] <= 0.5) {
                        memcpy(var176, (double[]){0.3055555555555556, 0.6944444444444444}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var176, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var25, var176, 2, var24);
    double var177[2];
    if (input[995] <= 0.5) {
        if (input[1556] <= 0.5) {
            if (input[778] <= 0.5) {
                if (input[868] <= 0.5) {
                    if (input[1546] <= 0.5) {
                        memcpy(var177, (double[]){0.4559548978153629, 0.5440451021846371}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.2127659574468085, 0.7872340425531915}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var177, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var177, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1575] <= 0.5) {
                if (input[802] <= 0.5) {
                    if (input[845] <= 0.5) {
                        memcpy(var177, (double[]){0.2982456140350877, 0.7017543859649122}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var177, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var177, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var177, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var24, var177, 2, var23);
    double var178[2];
    if (input[1560] <= 0.5) {
        if (input[139] <= 0.5) {
            if (input[208] <= 0.5) {
                if (input[995] <= 0.5) {
                    if (input[1563] <= 0.5) {
                        memcpy(var178, (double[]){0.4252136752136752, 0.5747863247863247}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.2903225806451613, 0.7096774193548387}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var178, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var178, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var178, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1589] <= 0.5) {
            if (input[424] <= 0.5) {
                if (input[1176] <= 0.5) {
                    if (input[94] <= 0.5) {
                        memcpy(var178, (double[]){0.5849056603773585, 0.41509433962264153}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var178, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var178, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var178, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var23, var178, 2, var22);
    double var179[2];
    if (input[63] <= 0.5) {
        if (input[1171] <= 0.5) {
            if (input[807] <= 0.5) {
                if (input[1586] <= 0.5) {
                    if (input[1567] <= 0.5) {
                        memcpy(var179, (double[]){0.43309859154929575, 0.5669014084507042}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.625, 0.375}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1567] <= 0.5) {
                        memcpy(var179, (double[]){0.546875, 0.453125}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var179, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var179, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var179, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var22, var179, 2, var21);
    double var180[2];
    if (input[195] <= 0.5) {
        if (input[1583] <= 0.5) {
            if (input[1213] <= 0.5) {
                if (input[0] <= 0.6851744949817657) {
                    if (input[1571] <= 0.5) {
                        memcpy(var180, (double[]){0.5095011876484561, 0.49049881235154397}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.125, 0.875}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1560] <= 0.5) {
                        memcpy(var180, (double[]){0.40371621621621623, 0.5962837837837838}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var180, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1557] <= 0.5) {
                if (input[0] <= 0.8701421916484833) {
                    if (input[1572] <= 0.5) {
                        memcpy(var180, (double[]){0.05128205128205128, 0.9487179487179487}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1549] <= 0.5) {
                        memcpy(var180, (double[]){0.5, 0.5}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var180, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var180, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var21, var180, 2, var20);
    double var181[2];
    if (input[1550] <= 0.5) {
        if (input[780] <= 0.5) {
            if (input[83] <= 0.5) {
                if (input[1397] <= 0.5) {
                    if (input[1576] <= 0.5) {
                        memcpy(var181, (double[]){0.43874643874643876, 0.5612535612535613}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){0.6486486486486487, 0.35135135135135137}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var181, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var181, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var181, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1575] <= 0.5) {
            if (input[1584] <= 0.5) {
                if (input[429] <= 0.5) {
                    if (input[1424] <= 0.5) {
                        memcpy(var181, (double[]){0.24, 0.76}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var181, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var181, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var181, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var20, var181, 2, var19);
    double var182[2];
    if (input[1057] <= 0.5) {
        if (input[643] <= 0.5) {
            if (input[1263] <= 0.5) {
                if (input[1595] <= 0.5) {
                    if (input[856] <= 0.5) {
                        memcpy(var182, (double[]){0.4486044928522805, 0.5513955071477196}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[660] <= 0.5) {
                        memcpy(var182, (double[]){0.2711864406779661, 0.7288135593220338}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var182, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var182, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var182, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var19, var182, 2, var18);
    double var183[2];
    if (input[1484] <= 0.5) {
        if (input[236] <= 0.5) {
            if (input[1361] <= 0.5) {
                if (input[1562] <= 0.5) {
                    if (input[2] <= 0.5) {
                        memcpy(var183, (double[]){0.44693877551020406, 0.5530612244897959}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1577] <= 0.5) {
                        memcpy(var183, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var183, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var183, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var183, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var18, var183, 2, var17);
    double var184[2];
    if (input[1585] <= 0.5) {
        if (input[58] <= 0.5) {
            if (input[1553] <= 0.5) {
                if (input[347] <= 0.5) {
                    if (input[57] <= 0.5) {
                        memcpy(var184, (double[]){0.42569444444444443, 0.5743055555555555}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var184, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[392] <= 0.5) {
                    if (input[526] <= 0.5) {
                        memcpy(var184, (double[]){0.6486486486486487, 0.35135135135135137}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var184, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var184, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[967] <= 0.5) {
            if (input[1211] <= 0.5) {
                if (input[1557] <= 0.5) {
                    if (input[888] <= 0.5) {
                        memcpy(var184, (double[]){0.21739130434782608, 0.782608695652174}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var184, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var184, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var184, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var17, var184, 2, var16);
    double var185[2];
    if (input[1588] <= 0.5) {
        if (input[434] <= 0.5) {
            if (input[349] <= 0.5) {
                if (input[744] <= 0.5) {
                    if (input[1467] <= 0.5) {
                        memcpy(var185, (double[]){0.446524064171123, 0.553475935828877}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var185, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var185, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var185, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[532] <= 0.5) {
            if (input[1304] <= 0.5) {
                if (input[1551] <= 0.5) {
                    if (input[1569] <= 0.5) {
                        memcpy(var185, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var185, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var185, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var185, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var16, var185, 2, var15);
    double var186[2];
    if (input[1595] <= 0.5) {
        if (input[1573] <= 0.5) {
            if (input[786] <= 0.5) {
                if (input[1576] <= 0.5) {
                    if (input[1192] <= 0.5) {
                        memcpy(var186, (double[]){0.447178002894356, 0.552821997105644}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1174] <= 0.5) {
                        memcpy(var186, (double[]){0.6086956521739131, 0.391304347826087}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var186, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[884] <= 0.5) {
                if (input[817] <= 0.5) {
                    if (input[1585] <= 0.5) {
                        memcpy(var186, (double[]){0.6341463414634146, 0.36585365853658536}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var186, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var186, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[1053] <= 0.5) {
            if (input[1435] <= 0.5) {
                if (input[860] <= 0.5) {
                    if (input[938] <= 0.5) {
                        memcpy(var186, (double[]){0.3148148148148148, 0.6851851851851852}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var186, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var186, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var186, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var15, var186, 2, var14);
    double var187[2];
    if (input[948] <= 0.5) {
        if (input[1589] <= 0.5) {
            if (input[1564] <= 0.5) {
                if (input[1567] <= 0.5) {
                    if (input[1293] <= 0.5) {
                        memcpy(var187, (double[]){0.42048710601719197, 0.579512893982808}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[63] <= 0.5) {
                        memcpy(var187, (double[]){0.7, 0.3}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[203] <= 0.5) {
                    if (input[827] <= 0.5) {
                        memcpy(var187, (double[]){0.18181818181818182, 0.8181818181818182}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var187, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1129] <= 0.5) {
                if (input[704] <= 0.5) {
                    if (input[1554] <= 0.5) {
                        memcpy(var187, (double[]){0.66, 0.34}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var187, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var187, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var187, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var14, var187, 2, var13);
    double var188[2];
    if (input[1568] <= 0.5) {
        if (input[889] <= 0.5) {
            if (input[0] <= -1.3758939504623413) {
                if (input[1552] <= 0.5) {
                    if (input[535] <= 0.5) {
                        memcpy(var188, (double[]){0.3503184713375796, 0.6496815286624203}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[704] <= 0.5) {
                        memcpy(var188, (double[]){0.125, 0.875}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1585] <= 0.5) {
                    if (input[417] <= 0.5) {
                        memcpy(var188, (double[]){0.47466874512860485, 0.5253312548713952}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1547] <= 0.5) {
                        memcpy(var188, (double[]){0.25, 0.75}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var188, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1228] <= 0.5) {
            if (input[490] <= 0.5) {
                if (input[473] <= 0.5) {
                    if (input[531] <= 0.5) {
                        memcpy(var188, (double[]){0.6756756756756757, 0.32432432432432434}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var188, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var188, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var188, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var13, var188, 2, var12);
    double var189[2];
    if (input[101] <= 0.5) {
        if (input[1591] <= 0.5) {
            if (input[1561] <= 0.5) {
                if (input[686] <= 0.5) {
                    if (input[1585] <= 0.5) {
                        memcpy(var189, (double[]){0.45616535994297935, 0.5438346400570206}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.25, 0.75}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var189, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1421] <= 0.5) {
                    if (input[1594] <= 0.5) {
                        memcpy(var189, (double[]){0.717948717948718, 0.28205128205128205}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[254] <= 0.5) {
                if (input[1061] <= 0.5) {
                    if (input[535] <= 0.5) {
                        memcpy(var189, (double[]){0.2894736842105263, 0.7105263157894737}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var189, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var12, var189, 2, var11);
    double var190[2];
    if (input[1571] <= 0.5) {
        if (input[482] <= 0.5) {
            if (input[1547] <= 0.5) {
                if (input[1176] <= 0.5) {
                    if (input[1567] <= 0.5) {
                        memcpy(var190, (double[]){0.4450109249817917, 0.5549890750182083}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.627906976744186, 0.37209302325581395}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var190, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1393] <= 0.5) {
                    if (input[926] <= 0.5) {
                        memcpy(var190, (double[]){0.2807017543859649, 0.7192982456140351}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var190, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var190, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[1598] <= 0.5) {
            if (input[1578] <= 0.5) {
                if (input[1589] <= 0.5) {
                    if (input[24] <= 0.5) {
                        memcpy(var190, (double[]){0.2549019607843137, 0.7450980392156863}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var11, var190, 2, var10);
    double var191[2];
    if (input[1378] <= 0.5) {
        if (input[1332] <= 0.5) {
            if (input[1594] <= 0.5) {
                if (input[1586] <= 0.5) {
                    if (input[1562] <= 0.5) {
                        memcpy(var191, (double[]){0.4351648351648352, 0.5648351648351648}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.6530612244897959, 0.3469387755102041}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1572] <= 0.5) {
                        memcpy(var191, (double[]){0.5797101449275363, 0.42028985507246375}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.5, 0.5}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1418] <= 0.5) {
                    if (input[1565] <= 0.5) {
                        memcpy(var191, (double[]){0.7291666666666666, 0.2708333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var191, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var191, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var191, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var10, var191, 2, var9);
    double var192[2];
    if (input[1105] <= 0.5) {
        if (input[1553] <= 0.5) {
            if (input[331] <= 0.5) {
                if (input[496] <= 0.5) {
                    if (input[13] <= 0.5) {
                        memcpy(var192, (double[]){0.4358974358974359, 0.5641025641025641}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var192, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var192, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1594] <= 0.5) {
                if (input[1439] <= 0.5) {
                    if (input[1308] <= 0.5) {
                        memcpy(var192, (double[]){0.6428571428571429, 0.35714285714285715}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var192, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var192, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var192, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var9, var192, 2, var8);
    double var193[2];
    if (input[1598] <= 0.5) {
        if (input[927] <= 0.5) {
            if (input[821] <= 0.5) {
                if (input[1550] <= 0.5) {
                    if (input[1167] <= 0.5) {
                        memcpy(var193, (double[]){0.42657342657342656, 0.5734265734265734}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[973] <= 0.5) {
                        memcpy(var193, (double[]){0.22916666666666666, 0.7708333333333334}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var193, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var193, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[165] <= 0.5) {
            if (input[282] <= 0.5) {
                if (input[0] <= 0.5794786810874939) {
                    if (input[1566] <= 0.5) {
                        memcpy(var193, (double[]){0.4, 0.6}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[225] <= 0.5) {
                        memcpy(var193, (double[]){0.08333333333333333, 0.9166666666666666}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var8, var193, 2, var7);
    double var194[2];
    if (input[70] <= 0.5) {
        if (input[1484] <= 0.5) {
            if (input[1532] <= 0.5) {
                if (input[1191] <= 0.5) {
                    if (input[895] <= 0.5) {
                        memcpy(var194, (double[]){0.4325916230366492, 0.5674083769633508}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var194, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var194, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var194, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var194, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var7, var194, 2, var6);
    double var195[2];
    if (input[779] <= 0.5) {
        if (input[1557] <= 0.5) {
            if (input[724] <= 0.5) {
                if (input[1411] <= 0.5) {
                    if (input[1575] <= 0.5) {
                        memcpy(var195, (double[]){0.4309978768577495, 0.5690021231422505}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.2692307692307692, 0.7307692307692307}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var195, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var195, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[0] <= -1.534437656402588) {
                memcpy(var195, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[1149] <= 0.5) {
                    if (input[44] <= 0.5) {
                        memcpy(var195, (double[]){0.21311475409836064, 0.7868852459016393}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var195, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var6, var195, 2, var5);
    double var196[2];
    if (input[820] <= 0.5) {
        if (input[1595] <= 0.5) {
            if (input[1568] <= 0.5) {
                if (input[1594] <= 0.5) {
                    if (input[1057] <= 0.5) {
                        memcpy(var196, (double[]){0.4326853851691865, 0.5673146148308136}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[309] <= 0.5) {
                        memcpy(var196, (double[]){0.7083333333333334, 0.2916666666666667}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1584] <= 0.5) {
                    if (input[1586] <= 0.5) {
                        memcpy(var196, (double[]){0.7272727272727273, 0.2727272727272727}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var196, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= -1.1909262537956238) {
                if (input[797] <= 0.5) {
                    if (input[1553] <= 0.5) {
                        memcpy(var196, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var196, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1286] <= 0.5) {
                    if (input[1573] <= 0.5) {
                        memcpy(var196, (double[]){0.15789473684210525, 0.8421052631578947}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var196, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var196, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var5, var196, 2, var4);
    double var197[2];
    if (input[330] <= 0.5) {
        if (input[217] <= 0.5) {
            if (input[1562] <= 0.5) {
                if (input[733] <= 0.5) {
                    if (input[1575] <= 0.5) {
                        memcpy(var197, (double[]){0.4388335704125178, 0.5611664295874822}, 2 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){0.25333333333333335, 0.7466666666666667}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var197, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1582] <= 0.5) {
                    if (input[1604] <= 0.5) {
                        memcpy(var197, (double[]){0.6382978723404256, 0.3617021276595745}, 2 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var197, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var197, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        memcpy(var197, (double[]){1.0, 0.0}, 2 * sizeof(double));
    }
    add_vectors(var4, var197, 2, var3);
    double var198[2];
    if (input[1425] <= 0.5) {
        if (input[1581] <= 0.5) {
            if (input[959] <= 0.5) {
                if (input[572] <= 0.5) {
                    if (input[674] <= 0.5) {
                        memcpy(var198, (double[]){0.4282800815771584, 0.5717199184228416}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var198, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var198, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[0] <= 0.9494140446186066) {
                if (input[1566] <= 0.5) {
                    if (input[947] <= 0.5) {
                        memcpy(var198, (double[]){0.5121951219512195, 0.4878048780487805}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var198, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[526] <= 0.5) {
                    if (input[1565] <= 0.5) {
                        memcpy(var198, (double[]){0.8461538461538461, 0.15384615384615385}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var198, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var198, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var3, var198, 2, var2);
    double var199[2];
    if (input[1244] <= 0.5) {
        if (input[1570] <= 0.5) {
            if (input[111] <= 0.5) {
                if (input[1567] <= 0.5) {
                    if (input[1576] <= 0.5) {
                        memcpy(var199, (double[]){0.4305657604702425, 0.5694342395297576}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.582089552238806, 0.417910447761194}, 2 * sizeof(double));
                    }
                } else {
                    if (input[638] <= 0.5) {
                        memcpy(var199, (double[]){0.6590909090909091, 0.3409090909090909}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var199, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1302] <= 0.5) {
                if (input[1471] <= 0.5) {
                    if (input[304] <= 0.5) {
                        memcpy(var199, (double[]){0.2542372881355932, 0.7457627118644068}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var199, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var199, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        memcpy(var199, (double[]){0.0, 1.0}, 2 * sizeof(double));
    }
    add_vectors(var2, var199, 2, var1);
    mul_vector_number(var1, 0.01, 2, var0);
    memcpy(output, var0, 2 * sizeof(double));
}
