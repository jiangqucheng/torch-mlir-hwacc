//===------------------------------------------------------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef NPCOMP_DIALECT_NPCOMPRT_IR_NPCOMPRTOPS_H
#define NPCOMP_DIALECT_NPCOMPRT_IR_NPCOMPRTOPS_H

#include "mlir/IR/OpDefinition.h"
#include "mlir/IR/OpImplementation.h"
#include "mlir/IR/StandardTypes.h"

namespace mlir {
namespace NPCOMP {
namespace npcomp_rt {

#define GET_OP_CLASSES
#include "npcomp/Dialect/NpcompRt/IR/NpcompRtOps.h.inc"

} // namespace npcomp_rt
} // namespace NPCOMP
} // namespace mlir

#endif // NPCOMP_DIALECT_NPCOMPRT_IR_NPCOMPRTOPS_H
