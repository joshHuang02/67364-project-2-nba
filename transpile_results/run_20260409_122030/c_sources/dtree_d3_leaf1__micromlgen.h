#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class model_dtree_d3_leaf1 {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[1552] <= 0.5) {
                            if (x[1571] <= 0.5) {
                                if (x[1564] <= 0.5) {
                                    return 1;
                                }

                                else {
                                    return 1;
                                }
                            }

                            else {
                                if (x[1580] <= 0.5) {
                                    return 1;
                                }

                                else {
                                    return 0;
                                }
                            }
                        }

                        else {
                            if (x[1592] <= 0.5) {
                                if (x[1597] <= 0.5) {
                                    return 1;
                                }

                                else {
                                    return 0;
                                }
                            }

                            else {
                                return 0;
                            }
                        }
                    }

                protected:
                };
            }
        }
    }