/*******************************************************************************
* Copyright 2019 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#ifndef OCL_RESAMPLING_PD_HPP
#define OCL_RESAMPLING_PD_HPP

#include "common/c_types_map.hpp"
#include "common/resampling_pd.hpp"
#include "ocl/ocl_engine.hpp"

namespace dnnl {
namespace impl {
namespace ocl {

struct ocl_resampling_fwd_pd_t : public resampling_fwd_pd_t {
    using resampling_fwd_pd_t::resampling_fwd_pd_t;
};

struct ocl_resampling_bwd_pd_t : public resampling_bwd_pd_t {
    using resampling_bwd_pd_t::resampling_bwd_pd_t;
};
} // namespace ocl
} // namespace impl
} // namespace dnnl

#endif
