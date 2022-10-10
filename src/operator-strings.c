// Copyright 2022 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: src/operator-strings.yaml
//   Generator: tools/generate-enum-strings.py


#include <assert.h>
#include <stdint.h>

#include <xnnpack/operator-type.h>

static const uint16_t offset[] = {0,8,22,36,50,64,78,92,119,147,175,203,230,257,275,293,318,344,360,376,391,406,428,451,474,497,520,543,566,584,607,625,648,672,696,720,744,768,792,806,821,836,862,888,914,940,972,998,1025,1052,1069,1086,1100,1114,1128,1144,1160,1186,1212,1238,1264,1298,1332,1366,1400,1434,1454,1474,1495,1516,1537,1558,1582,1606,1629,1652,1670,1688,1706,1724,1743,1762,1781,1800,1817,1834,1850,1866,1894,1922,1949,1976,2004,2022,2040,2058,2076,2091,2107,2123,2141,2159,2177,2203,2230,2257,2274,2291,2313,2335,2364,2393,2412,2431,2450,2469,2484,2499,2520,2541,2560,2580,2600};

static const char *data =
    "Invalid\0"
    "Abs (NC, F16)\0"
    "Abs (NC, F32)\0"
    "Add (ND, F16)\0"
    "Add (ND, F32)\0"
    "Add (ND, QS8)\0"
    "Add (ND, QU8)\0"
    "ArgMax Pooling (NHWC, F32)\0"
    "Average Pooling (NHWC, F16)\0"
    "Average Pooling (NHWC, F32)\0"
    "Average Pooling (NHWC, QU8)\0"
    "Bankers Rounding (NC, F16)\0"
    "Bankers Rounding (NC, F32)\0"
    "Ceiling (NC, F16)\0"
    "Ceiling (NC, F32)\0"
    "Channel Shuffle (NC, X8)\0"
    "Channel Shuffle (NC, X32)\0"
    "Clamp (NC, F16)\0"
    "Clamp (NC, F32)\0"
    "Clamp (NC, S8)\0"
    "Clamp (NC, U8)\0"
    "Constant Pad (ND, X8)\0"
    "Constant Pad (ND, X16)\0"
    "Constant Pad (ND, X32)\0"
    "Convert (NC, F16, F32)\0"
    "Convert (NC, F32, F16)\0"
    "Convert (NC, F32, QS8)\0"
    "Convert (NC, F32, QU8)\0"
    "Convert (NC, QS8)\0"
    "Convert (NC, QS8, F32)\0"
    "Convert (NC, QU8)\0"
    "Convert (NC, QU8, F32)\0"
    "Convolution (NHWC, F16)\0"
    "Convolution (NHWC, F32)\0"
    "Convolution (NHWC, QC8)\0"
    "Convolution (NHWC, QS8)\0"
    "Convolution (NHWC, QU8)\0"
    "Convolution (NCHW, F32)\0"
    "Copy (NC, X8)\0"
    "Copy (NC, X16)\0"
    "Copy (NC, X32)\0"
    "Deconvolution (NHWC, F16)\0"
    "Deconvolution (NHWC, F32)\0"
    "Deconvolution (NHWC, QS8)\0"
    "Deconvolution (NHWC, QU8)\0"
    "Depth To Space (NCHW2NHWC, X32)\0"
    "Depth To Space (NHWC, X8)\0"
    "Depth To Space (NHWC, X16)\0"
    "Depth To Space (NHWC, X32)\0"
    "Divide (ND, F16)\0"
    "Divide (ND, F32)\0"
    "ELU (NC, F16)\0"
    "ELU (NC, F32)\0"
    "ELU (NC, QS8)\0"
    "Floor (NC, F16)\0"
    "Floor (NC, F32)\0"
    "Fully Connected (NC, F16)\0"
    "Fully Connected (NC, F32)\0"
    "Fully Connected (NC, QS8)\0"
    "Fully Connected (NC, QU8)\0"
    "Global Average Pooling (NWC, F16)\0"
    "Global Average Pooling (NWC, F32)\0"
    "Global Average Pooling (NWC, QS8)\0"
    "Global Average Pooling (NWC, QU8)\0"
    "Global Average Pooling (NCW, F32)\0"
    "HardSwish (NC, F16)\0"
    "HardSwish (NC, F32)\0"
    "Leaky ReLU (NC, F16)\0"
    "Leaky ReLU (NC, F32)\0"
    "Leaky ReLU (NC, QS8)\0"
    "Leaky ReLU (NC, QU8)\0"
    "Max Pooling (NHWC, F16)\0"
    "Max Pooling (NHWC, F32)\0"
    "Max Pooling (NHWC, S8)\0"
    "Max Pooling (NHWC, U8)\0"
    "Maximum (ND, F16)\0"
    "Maximum (ND, F32)\0"
    "Minimum (ND, F16)\0"
    "Minimum (ND, F32)\0"
    "Multiply (ND, F16)\0"
    "Multiply (ND, F32)\0"
    "Multiply (ND, QS8)\0"
    "Multiply (ND, QU8)\0"
    "Negate (NC, F16)\0"
    "Negate (NC, F32)\0"
    "PReLU (NC, F16)\0"
    "PReLU (NC, F32)\0"
    "Resize Bilinear (NHWC, F16)\0"
    "Resize Bilinear (NHWC, F32)\0"
    "Resize Bilinear (NHWC, S8)\0"
    "Resize Bilinear (NHWC, U8)\0"
    "Resize Bilinear (NCHW, F32)\0"
    "Sigmoid (NC, F16)\0"
    "Sigmoid (NC, F32)\0"
    "Sigmoid (NC, QS8)\0"
    "Sigmoid (NC, QU8)\0"
    "Slice (ND, X8)\0"
    "Slice (ND, X16)\0"
    "Slice (ND, X32)\0"
    "Softmax (NC, F16)\0"
    "Softmax (NC, F32)\0"
    "Softmax (NC, QU8)\0"
    "Space To Depth (NHWC, X8)\0"
    "Space To Depth (NHWC, X16)\0"
    "Space To Depth (NHWC, X32)\0"
    "Square (NC, F16)\0"
    "Square (NC, F32)\0"
    "Square Root (NC, F16)\0"
    "Square Root (NC, F32)\0"
    "Squared Difference (NC, F16)\0"
    "Squared Difference (NC, F32)\0"
    "Subtract (ND, F16)\0"
    "Subtract (ND, F32)\0"
    "Subtract (ND, QS8)\0"
    "Subtract (ND, QU8)\0"
    "Tanh (NC, QS8)\0"
    "Tanh (NC, QU8)\0"
    "Truncation (NC, F16)\0"
    "Truncation (NC, F32)\0"
    "Transpose (ND, X8)\0"
    "Transpose (ND, X16)\0"
    "Transpose (ND, X32)\0"
    "Unpooling (NHWC, X32)\0"
;

const char* xnn_operator_type_to_string(enum xnn_operator_type type) {
  assert(type <= xnn_operator_type_unpooling_nhwc_x32);
  return &data[offset[type]];
}