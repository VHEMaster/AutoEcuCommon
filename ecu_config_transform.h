/*
 * ecu_interpolation.h
 *
 *  Created on: Feb 19, 2024
 *      Author: VHEMaster
 */

#ifndef ECU_CONFIG_TRANSFORM_H_
#define ECU_CONFIG_TRANSFORM_H_

#include "interpolation_extended.h"
#include "defines.h"
#include "structs.h"

STATIC_INLINE sMathInterpolateInput ecu_interpolate_input_u8(float value, const uint8_t *table, uint32_t size, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_input_u8(value, table, size, &interpolate_transform);
}

STATIC_INLINE sMathInterpolateInput ecu_interpolate_input_u16(float value, const uint16_t *table, uint32_t size, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_input_u16(value, table, size, &interpolate_transform);
}

STATIC_INLINE sMathInterpolateInput ecu_interpolate_input_u32(float value, const uint32_t *table, uint32_t size, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_input_u32(value, table, size, &interpolate_transform);
}

STATIC_INLINE sMathInterpolateInput ecu_interpolate_input_s8(float value, const int8_t *table, uint32_t size, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_input_s8(value, table, size, &interpolate_transform);
}

STATIC_INLINE sMathInterpolateInput ecu_interpolate_input_s16(float value, const int16_t *table, uint32_t size, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_input_s16(value, table, size, &interpolate_transform);
}

STATIC_INLINE sMathInterpolateInput ecu_interpolate_input_s32(float value, const int32_t *table, uint32_t size, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_input_s32(value, table, size, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_1d_u8(sMathInterpolateInput input, const uint8_t *table, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_u8(input, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_1d_u16(sMathInterpolateInput input, const uint16_t *table, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_u16(input, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_1d_u32(sMathInterpolateInput input, const uint32_t *table, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_u32(input, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_1d_s8(sMathInterpolateInput input, const int8_t *table, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_s8(input, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_1d_s16(sMathInterpolateInput input, const int16_t *table, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_s16(input, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_1d_s32(sMathInterpolateInput input, const int32_t *table, const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_s32(input, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_u8(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const uint8_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_u8(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_u16(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const uint16_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_u16(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_u32(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const uint32_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_u32(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_s8(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const int8_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_s8(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_s16(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const int16_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_s16(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_s32(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const int32_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_s32(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_limit_u8(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const uint8_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_limit_u8(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_limit_u16(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const uint16_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_limit_u16(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_limit_u32(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const uint32_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_limit_u32(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_limit_s8(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const int8_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_limit_s8(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_limit_s16(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const int16_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_limit_s16(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_limit_s32(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const int32_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_limit_s32(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_point_u8(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const uint8_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_point_u8(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_point_u16(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const uint16_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_point_u16(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_point_u32(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const uint32_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_point_u32(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_point_s8(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const int8_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_point_s8(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_point_s16(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const int16_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_point_s16(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_point_s32(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, const int32_t (*table)[x_size], const sEcuParamTransform *transform)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_point_s32(input_x, input_y, x_size, table, &interpolate_transform);
}

STATIC_INLINE float ecu_interpolate_2d_set_u8(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, uint8_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_u8(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_u16(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, uint16_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_u16(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_u32(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, uint32_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_u32(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_s8(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, int8_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_s8(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_s16(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, int16_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_s16(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_s32(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, int32_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_s32(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_point_u8(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, uint8_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_point_u8(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_point_u16(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, uint16_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_point_u16(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_point_u32(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, uint32_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_point_u32(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_point_s8(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, int8_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_point_s8(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_point_s16(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, int16_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_point_s16(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_2d_set_point_s32(sMathInterpolateInput input_x, sMathInterpolateInput input_y,
    uint32_t x_size, int32_t (*table)[x_size], const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_2d_set_point_s32(input_x, input_y, x_size, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_1d_set_u8(sMathInterpolateInput input, uint8_t *table, const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_set_u8(input, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_1d_set_u16(sMathInterpolateInput input, uint16_t *table, const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_set_u16(input, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_1d_set_u32(sMathInterpolateInput input, uint32_t *table, const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_set_u32(input, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_1d_set_s8(sMathInterpolateInput input, int8_t *table, const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_set_s8(input, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_1d_set_s16(sMathInterpolateInput input, int16_t *table, const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_set_s16(input, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE float ecu_interpolate_1d_set_s32(sMathInterpolateInput input, int32_t *table, const sEcuParamTransform *transform, float new_value, float limit_l, float limit_h)
{
  const sMathInterpolationTransform interpolate_transform = { .gain = transform->gain, .offset = transform->offset };

  return math_interpolate_1d_set_s32(input, table, &interpolate_transform, new_value, limit_l, limit_h);
}

STATIC_INLINE void ecu_transform_from_u8(float *dst, const uint8_t *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = *src++ * transform->gain + transform->offset;
  }
}

STATIC_INLINE void ecu_transform_from_u16(float *dst, const uint16_t *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = *src++ * transform->gain + transform->offset;
  }
}

STATIC_INLINE void ecu_transform_from_u32(float *dst, const uint32_t *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = *src++ * transform->gain + transform->offset;
  }
}

STATIC_INLINE void ecu_transform_from_s8(float *dst, const int8_t *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = *src++ * transform->gain + transform->offset;
  }
}

STATIC_INLINE void ecu_transform_from_s16(float *dst, const int16_t *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = *src++ * transform->gain + transform->offset;
  }
}

STATIC_INLINE void ecu_transform_from_s32(float *dst, const int32_t *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = *src++ * transform->gain + transform->offset;
  }
}

STATIC_INLINE void ecu_transform_to_u8(uint8_t *dst, const float *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = (*src++ - transform->offset) / transform->gain;
  }
}

STATIC_INLINE void ecu_transform_to_u16(uint16_t *dst, const float *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = (*src++ - transform->offset) / transform->gain;
  }
}

STATIC_INLINE void ecu_transform_to_u32(uint32_t *dst, const float *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = (*src++ - transform->offset) / transform->gain;
  }
}

STATIC_INLINE void ecu_transform_to_s8(int8_t *dst, const float *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = (*src++ - transform->offset) / transform->gain;
  }
}

STATIC_INLINE void ecu_transform_to_s16(int16_t *dst, const float *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = (*src++ - transform->offset) / transform->gain;
  }
}

STATIC_INLINE void ecu_transform_to_s32(int32_t *dst, const float *src, uint32_t dst_sizeof, uint32_t src_sizeof, const sEcuParamTransform *transform)
{
  uint32_t items;

  src_sizeof /= sizeof(*src);
  dst_sizeof /= sizeof(*dst);
  items = MIN(src_sizeof, dst_sizeof);

  while(items--) {
    *dst++ = (*src++ - transform->offset) / transform->gain;
  }
}

#endif /* ECU_CONFIG_TRANSFORM_H_ */
