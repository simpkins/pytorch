#pragma once

#include <torch/csrc/Export.h>
#include <torch/csrc/jit/ir/ir.h>

namespace torch {
namespace jit {

TORCH_API const std::string& GetSerializedShapeFunctions();

TORCH_API const OperatorMap<std::string>& GetShapeFunctionMappings();

} // namespace jit
} // namespace torch
