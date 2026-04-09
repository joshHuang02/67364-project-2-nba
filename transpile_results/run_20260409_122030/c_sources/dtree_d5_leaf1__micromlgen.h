#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class model_dtree_d5_leaf1 {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[1552] <= 0.5) {
                            if (x[1571] <= 0.5) {
                                if (x[1564] <= 0.5) {
                                    if (x[1567] <= 0.5) {
                                        if (x[1573] <= 0.5) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[1579] <= 0.5) {
                                            return 0;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.0551098585128784) {
                                        if (x[108] <= 0.5) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[1585] <= 0.5) {
                                            return 0;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1595] <= 0.5) {
                                    if (x[1580] <= 0.5) {
                                        if (x[1575] <= 0.5) {
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

                                else {
                                    return 0;
                                }
                            }
                        }

                        else {
                            if (x[1592] <= 0.5) {
                                if (x[1597] <= 0.5) {
                                    if (x[1581] <= 0.5) {
                                        if (x[778] <= 0.5) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -0.08112016320228577) {
                                            return 1;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1248] <= 0.5) {
                                        return 0;
                                    }

                                    else {
                                        return 1;
                                    }
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