#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class model_dtree_d5_leaf5 {
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
                                        if (x[1578] <= 0.5) {
                                            return 0;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.0551098585128784) {
                                        if (x[0] <= -1.21735018491745) {
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

                            else {
                                if (x[0] <= 0.7380224168300629) {
                                    if (x[0] <= 0.5266307890415192) {
                                        if (x[0] <= -0.9002627432346344) {
                                            return 1;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        return 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 0.8965661227703094) {
                                        return 1;
                                    }

                                    else {
                                        if (x[0] <= 1.0022619664669037) {
                                            return 1;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1581] <= 0.5) {
                                if (x[0] <= -0.9795345962047577) {
                                    if (x[0] <= -1.3230460286140442) {
                                        return 1;
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[0] <= 0.8965661227703094) {
                                        if (x[0] <= 0.5266307890415192) {
                                            return 1;
                                        }

                                        else {
                                            return 1;
                                        }
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