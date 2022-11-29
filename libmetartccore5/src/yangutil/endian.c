//
// Created by 沈昊 on 2022/11/29.
//
#include <yangutil/endian.h>
uint32_t be32toh(uint32_t big_endian_32bits) {
  return ((big_endian_32bits & 0xff000000) >> 24) |
         ((big_endian_32bits & 0x00ff0000) >> 8) |
         ((big_endian_32bits & 0x0000ff00) << 8) |
         ((big_endian_32bits & 0x000000ff) << 24);
}