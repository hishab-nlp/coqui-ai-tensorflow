/* Copyright 2016 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

// Eigen Core has no SYCL backend
#define EIGEN_DONT_VECTORIZE
#define EIGEN_DONT_VECTORIZE_SYCL
#ifdef EIGEN_USE_SYCL
 #undef EIGEN_USE_SYCL
#endif  // EIGEN_USE_SYCL

#include "tensorflow/core/kernels/svd_op_impl.h"

namespace tensorflow {

REGISTER_LINALG_OP("Svd", (SvdOp<double>), double);
REGISTER_LINALG_OP("BatchSvd", (SvdOp<double>), double);

}  // namespace tensorflow
