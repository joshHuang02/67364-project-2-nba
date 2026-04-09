#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class model_dtree_d3_leaf5 {
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
                                if (x[0] <= 0.7380224168300629) {
                                    return 1;
                                }

                                else {
                                    return 1;
                                }
                            }
                        }

                        else {
                            if (x[1581] <= 0.5) {
                                if (x[0] <= -0.9795345962047577) {
                                    return 1;
                                }

                                else {
                                    return 1;
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