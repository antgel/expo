/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <ABI31_0_0fabric/ABI31_0_0graphics/Geometry.h>

namespace facebook {
namespace ReactABI31_0_0 {

/*
 * LayoutContext: Additional contextual information useful for particular
 * layout approaches.
 */
struct LayoutContext {
  /*
   * Compound absolute position of the node relative to the root node.
   */
  Point absolutePosition {0, 0};

  /*
   * Reflects the scale factor needed to convert from the logical coordinate
   * space into the device coordinate space of the physical screen.
   * Some layout systems *might* use this to round layout metric values
   * to `pixel value`.
   */
  Float pointScaleFactor = {1.0};
};

} // namespace ReactABI31_0_0
} // namespace facebook
