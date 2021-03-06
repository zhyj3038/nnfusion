//*****************************************************************************
// Copyright 2017-2020 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//*****************************************************************************

// Microsoft (c) 2019, NNFusion Team

#pragma once

#include "../util/tensor_op.hpp"

namespace nnfusion
{
    namespace op
    {
        /// \brief Class for variables.
        ///
        class Variable : public TensorOp
        {
        public:
            /// \brief Constructions a tensor view-typed variable node.
            ///
            /// \param element_type The element type of the variable.
            /// \param pshape The partial shape of the variable.
            Variable(const nnfusion::element::Type& element_type, const nnfusion::Shape& shape);
            bool is_variable() const override { return true; }
        };
    }
}
