// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/OverlayCull.comp.00000000.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kOverlayCull_comp_00000000[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x6d,0x97,0x5b,0x4c,0x9c,0x55,
    0x10,0xc7,0xcf,0xec,0xc2,0x82,0x25,0x42,0x29,0x95,0x05,0x6c,0x8c,0x96,0x6a,0x8c,
    0x90,0xb5,0xb5,0xb6,0x85,0x68,0x89,0x4d,0x56,0xcb,0x03,0x2d,0x65,0x59,0xea,0x46,
    0xca,0x65,0x53,0x62,0x2f,0x11,0x6d,0x8b,0x36,0xdc,0x12,0xfb,0x60,0x7c,0xf4,0x85,
    0x9a,0xd8,0xa8,0x0f,0xbe,0x60,0xb4,0x50,0x1a,0x7d,0x68,0xdf,0x4a,0x52,0x34,0x4a,
    0x54,0x6c,0x54,0x4c,0x8c,0x7d,0x10,0x0d,0x89,0xad,0x8d,0x8d,0xbd,0x58,0x7a,0xb1,
    0xce,0x7c,0xe7,0x3f,0x30,0x7c,0x94,0xe4,0xe4,0xfb,0xe6,0x3f,0xe7,0xcc,0xfc,0xce,
    0x39,0xdf,0x99,0xc3,0x46,0x23,0x95,0x79,0xce,0x91,0x5b,0xe6,0xf2,0xdd,0xc7,0xe4,
    0x82,0xbf,0x62,0x17,0x71,0xf2,0x5a,0xe0,0x62,0xc1,0x73,0x6b,0x43,0x73,0x43,0xa2,
    0xe7,0xf5,0xae,0xc4,0xd3,0x1b,0xd6,0x8a,0xbf,0xd0,0x45,0x83,0x7e,0xe2,0x2b,0x72,
    0x79,0x2e,0x97,0x9f,0x39,0xdc,0xba,0xb3,0xfb,0x5e,0x15,0xbd,0x99,0xdb,0x10,0xb7,
    0xe5,0x3c,0x3e,0x27,0x88,0xe7,0xdc,0xc3,0xe8,0x1f,0xc4,0x63,0xb5,0x39,0x88,0xef,
    0xdc,0x83,0xb0,0x77,0xf1,0x33,0x16,0x8c,0x71,0xae,0x9e,0x23,0xb6,0x79,0x14,0x57,
    0x89,0xe7,0x56,0xce,0x29,0x5a,0x04,0xfd,0x3b,0xf8,0xb9,0x7a,0xde,0xe7,0xed,0x47,
    0x4c,0xfc,0x21,0xc4,0xaf,0x80,0x3d,0x16,0xea,0x3f,0x86,0xfe,0x1a,0x5b,0xec,0x72,
    0xf8,0x4e,0x63,0xac,0xd8,0x25,0x9c,0x31,0x12,0xf4,0x8d,0x06,0xb3,0x96,0xf7,0x07,
    0xb8,0x4f,0x0c,0x73,0x92,0xbf,0x38,0xdb,0x05,0xe0,0x17,0x7f,0x15,0xfc,0x2b,0x30,
    0x9f,0x95,0xac,0x96,0x18,0x3d,0x8e,0xb1,0xab,0xd8,0x2e,0xc3,0x38,0xaf,0xe5,0x04,
    0x39,0x65,0xcd,0x44,0x7f,0x06,0x76,0x05,0x34,0xf1,0xaf,0xc2,0x7b,0xcc,0xc4,0x93,
    0x35,0xca,0x37,0x76,0x02,0x7d,0xd4,0xae,0x0d,0x71,0x25,0xb1,0x4e,0xc2,0xdd,0x84,
    0x58,0x51,0xc4,0x4f,0xc1,0xd7,0x84,0xfc,0x29,0xec,0x27,0x99,0xf1,0x69,0xcc,0x5b,
    0xfa,0xb7,0xc0,0x17,0x43,0xbc,0x0c,0xde,0x6d,0xfe,0x56,0x6e,0xcf,0x61,0xbe,0xb2,
    0xcf,0x19,0x68,0x0f,0x61,0x4f,0x77,0x21,0x56,0x3b,0x38,0xdb,0x90,0x5b,0xec,0x0e,
    0xb3,0xe6,0x9d,0xe6,0x3b,0xaa,0x82,0x9d,0x35,0x2c,0x5d,0xe8,0x9b,0x01,0xcb,0xa1,
    0x60,0xff,0xbc,0x56,0xcd,0xdf,0x94,0xec,0xd1,0x9b,0xe0,0x4f,0x9b,0xf9,0x0d,0x21,
    0xa6,0xf6,0x79,0x0f,0x6b,0x9a,0x08,0xbe,0x81,0xfb,0xdc,0x28,0xe6,0x84,0xe3,0x31,
    0xff,0x17,0x09,0xe6,0xe0,0x73,0x9f,0x80,0x36,0x8a,0xb8,0x62,0x8f,0x99,0xef,0xe3,
    0x33,0x7e,0x76,0xce,0xb3,0xc4,0x82,0xf5,0x3d,0x8d,0x7d,0x4f,0xce,0xef,0x49,0x34,
    0xc8,0x3f,0xcc,0x89,0x36,0x32,0x4b,0x04,0xeb,0xe8,0xb0,0x3f,0x37,0x58,0x91,0xb3,
    0xb6,0x19,0xfb,0x76,0x14,0xec,0x8d,0x7c,0x06,0x65,0xdc,0xbb,0xd0,0x8e,0x62,0x8c,
    0xf0,0xbe,0x85,0x39,0x1d,0x83,0x5f,0xe6,0x76,0x04,0xda,0x07,0xd0,0x45,0xdb,0xc2,
    0x9a,0xec,0xe5,0x19,0xec,0x77,0x1a,0x79,0x64,0xde,0xe3,0xd0,0xb7,0xb0,0x25,0x6b,
    0x7c,0x16,0xfb,0x92,0x85,0x6f,0x33,0xf6,0x7d,0x02,0xbe,0x26,0x8e,0x25,0xe3,0xbe,
    0x84,0xe6,0x8c,0xf6,0x15,0x34,0x99,0xdb,0x49,0xd6,0x64,0x7f,0xbe,0x46,0x5f,0xf1,
    0xfd,0xcb,0x33,0x9d,0xc2,0x98,0x9b,0x1c,0x57,0x7c,0x93,0xdc,0xa6,0x30,0xff,0x49,
    0x33,0xdf,0x6f,0x10,0x6b,0xc2,0xcc,0x57,0x62,0xca,0xbe,0x7f,0x0b,0xbf,0xcc,0xf1,
    0x7d,0x8e,0x23,0x79,0xbe,0x83,0x3e,0xc7,0x71,0x34,0x9e,0x3c,0xaf,0x71,0x3c,0xf1,
    0x7f,0x0f,0x96,0x5c,0xf4,0x9d,0x04,0xcf,0xb4,0xe1,0x91,0x3e,0xe7,0xb8,0x4d,0x63,
    0xfc,0x39,0xc3,0xf3,0x83,0xe1,0x89,0x60,0xcf,0x4e,0x80,0xe7,0x47,0xf8,0x8f,0x19,
    0x9e,0x9f,0xa0,0x0b,0x8f,0xc6,0x9b,0x36,0x3c,0x3f,0x83,0x69,0x0a,0x7d,0x25,0xd7,
    0x27,0xbc,0x8a,0xb2,0x8e,0xbf,0xc0,0x9f,0xc4,0x5e,0x4d,0x60,0x7d,0x7f,0x85,0x6f,
    0x1c,0x7b,0x2a,0xf5,0xe2,0x3c,0x6a,0x88,0x68,0x75,0x4c,0x75,0x1e,0xfd,0x74,0xfd,
    0xff,0x84,0x6f,0x05,0xe6,0x5b,0x41,0x0b,0xf3,0x15,0xdf,0x05,0x19,0x4f,0x9e,0xef,
    0x02,0xbe,0x1f,0xc9,0x75,0xd1,0x8c,0xd3,0x5c,0x7f,0x21,0xd7,0x45,0xf3,0xfd,0x5c,
    0x82,0xae,0xf6,0xdf,0x60,0xfa,0x02,0x71,0x2e,0x43,0xbb,0x64,0xf8,0x2e,0x1b,0xbe,
    0x7f,0x90,0xa7,0x12,0x7c,0xe5,0x86,0x4f,0x7c,0x57,0xe4,0x9c,0x82,0xef,0x8a,0xe1,
    0xbb,0x6a,0xc6,0x29,0xdf,0x35,0xf0,0x5d,0x35,0x3c,0xd7,0xa1,0xab,0x7d,0x23,0xc4,
    0x37,0x07,0xed,0xba,0xe1,0x9b,0x33,0x7c,0xb7,0x90,0x27,0x01,0xbe,0x32,0xc3,0x27,
    0xbe,0xdb,0x52,0xcf,0xc1,0x77,0xdb,0xf0,0xdd,0x31,0xe3,0x94,0xef,0x3f,0xf0,0xdd,
    0x31,0x3c,0x77,0xa1,0xab,0x4d,0xb4,0x98,0x2f,0x42,0x5e,0xbb,0x6b,0xf8,0x44,0x53,
    0xbe,0x1c,0xf2,0x79,0x6a,0xc1,0x17,0x37,0x7c,0xe2,0xcb,0xe5,0x16,0x07,0x9f,0xbc,
    0x2b,0x5f,0xcc,0x8c,0x53,0xbe,0x3c,0xf2,0x7c,0xe2,0x53,0x9e,0x7c,0xf2,0xba,0xda,
    0xcb,0x42,0x7c,0x05,0xe4,0x35,0xe9,0xa7,0x7c,0x05,0x86,0xef,0x7e,0xe4,0x49,0x82,
    0xaf,0xd4,0xf0,0x89,0xaf,0x90,0x5b,0x29,0xf8,0x0a,0x0d,0x5f,0x91,0x19,0xa7,0x7c,
    0xcb,0xc1,0x57,0x64,0x78,0x8a,0xc9,0xeb,0x6a,0x97,0x84,0xf8,0x56,0x92,0xd7,0x8a,
    0x0d,0x9f,0x68,0x72,0x2e,0x35,0x6f,0x29,0x6c,0x5d,0xa7,0x38,0x6c,0xdd,0xd7,0x32,
    0xd8,0xfa,0x1d,0x96,0xc3,0xd6,0x73,0x23,0xcf,0x4f,0x31,0xdf,0xdf,0xb0,0xef,0x69,
    0xcc,0x77,0xd6,0xd4,0x17,0xf1,0xcd,0x70,0x9b,0x45,0x3d,0x98,0x31,0x73,0xfb,0x1d,
    0xdf,0x46,0xd6,0x7c,0x0b,0x7f,0x40,0x4f,0xb1,0x25,0x35,0xe8,0x08,0x79,0x6d,0x18,
    0x6b,0x28,0x0c,0x1a,0x6b,0x16,0xb5,0x45,0xfa,0xbd,0x43,0xfe,0x2e,0x14,0x2e,0x19,
    0x33,0x63,0x6a,0xf4,0x47,0xf0,0x3b,0xf3,0xad,0xae,0x21,0x7f,0x57,0x8d,0x9b,0x7b,
    0xe0,0x51,0x5a,0xb8,0x07,0xd6,0xd0,0xc2,0x3d,0xf0,0x18,0x79,0x9f,0xc6,0x7b,0x9c,
    0xbc,0x66,0xef,0x81,0x27,0xa0,0xd9,0x7b,0xa0,0x8a,0x7c,0x5f,0xf1,0xc9,0xba,0xac,
    0x33,0xdf,0x81,0xf8,0xaa,0xb9,0xad,0xc3,0x7a,0xca,0xbb,0xd6,0xdd,0x04,0x62,0x69,
    0x0e,0x7b,0x0f,0x3c,0x49,0xde,0x6f,0xef,0x81,0xb5,0xe4,0x75,0x59,0x1b,0x8d,0x27,
    0x4f,0xad,0xbb,0x4f,0x91,0x67,0x99,0x45,0xdf,0x6a,0xf0,0xd4,0x18,0x1e,0xe9,0xb3,
    0x9e,0x5b,0x0d,0xc6,0xaf,0x37,0x3c,0x1b,0x0c,0x4f,0xf8,0x1e,0xd8,0x48,0xde,0x6f,
    0xef,0x81,0x4d,0xe4,0x75,0xe1,0xd1,0x78,0x35,0x86,0xa7,0x96,0x3c,0x93,0x30,0x6e,
    0x42,0x5e,0xbd,0x07,0x9e,0x25,0xef,0x0f,0xdf,0x03,0x75,0xe4,0x7d,0xb6,0xe6,0xd7,
    0x61,0x1e,0x83,0xa1,0xfa,0xde,0xc0,0xf6,0x20,0xf2,0x36,0x98,0xf3,0xb5,0x8d,0x96,
    0xd6,0xf7,0xed,0x38,0x5f,0xdb,0xcc,0x79,0x6a,0x24,0xaf,0xab,0xdd,0x14,0x3a,0x5f,
    0x29,0xf2,0x5a,0xa3,0x39,0x5f,0x29,0x73,0xfe,0xd3,0xb4,0xb8,0xbe,0x0f,0x18,0x3e,
    0xf1,0xb5,0x70,0x1b,0x00,0x5f,0x8b,0xe1,0xdb,0x49,0x4b,0xeb,0xfb,0x8b,0xe0,0xdb,
    0x69,0x78,0x32,0xe4,0x75,0xb5,0x5f,0x0a,0xf1,0xb5,0x92,0xd7,0x32,0x86,0xaf,0xd5,
    0xf0,0xb5,0xd1,0xe2,0xfa,0xde,0x6f,0xf8,0xc4,0xd7,0xce,0xad,0x1f,0x7c,0xed,0x86,
    0xaf,0x83,0x96,0xd6,0xf7,0x4e,0xf0,0x75,0x18,0x9e,0x2c,0x79,0x5d,0xed,0xdd,0x21,
    0xbe,0x2e,0xf2,0x5a,0xd6,0xf0,0x75,0x19,0xbe,0x97,0x43,0xf5,0xbd,0xcf,0xf0,0x89,
    0x6f,0x0f,0xb7,0x3e,0xf0,0xed,0x31,0x7c,0x7b,0xef,0x51,0xdf,0xf7,0x81,0x6f,0xaf,
    0xe1,0xd9,0x4f,0x5e,0x57,0xfb,0x95,0x10,0x5f,0x37,0x79,0x6d,0xbf,0xe1,0xeb,0x36,
    0x7c,0xaf,0x85,0xea,0x7b,0xaf,0xe1,0x13,0xdf,0x01,0x6e,0xbd,0xe0,0x3b,0x60,0xf8,
    0x0e,0xde,0xa3,0xbe,0x1f,0x02,0xdf,0x41,0xc3,0xd3,0x43,0x5e,0x57,0xfb,0x8d,0x10,
    0xdf,0x61,0xf2,0x5a,0x8f,0xe1,0x3b,0x8c,0xf3,0xa6,0x79,0x7b,0x61,0xeb,0x3a,0xf5,
    0xc1,0xd6,0x7d,0xed,0x87,0xad,0xdf,0xe1,0x00,0x6c,0x3d,0x37,0x83,0x38,0x5b,0xf5,
    0xb4,0xb8,0x96,0x27,0xd9,0xae,0x47,0x1f,0x79,0xd7,0x79,0x3c,0x4f,0x4b,0x6b,0xf9,
    0x0b,0xe4,0x75,0xad,0xe5,0x6f,0x93,0xd7,0x6c,0x2d,0xd7,0x58,0xf5,0xb4,0x50,0xcb,
    0x3f,0x44,0x2d,0x17,0x06,0x19,0x93,0x34,0xb5,0x77,0x18,0x7e,0x87,0xb5,0x1f,0x09,
    0xdd,0x35,0xc7,0xb9,0x8d,0xe0,0x7e,0x38,0x0e,0x96,0xd1,0xa0,0x7e,0xfa,0xdf,0x2f,
    0x83,0xf8,0xed,0xf2,0x39,0x7e,0x3f,0xec,0xe0,0x9c,0x52,0xe3,0x4f,0xe1,0x9e,0x18,
    0x36,0xbf,0xa7,0x76,0x73,0xdf,0x93,0xe8,0x7b,0x0a,0xbc,0x1a,0x7b,0x24,0xf8,0x9f,
    0x86,0x5c,0x0d,0xb7,0xff,0x01,0x0a,0x64,0x63,0x51,0x74,0x10,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// #extension GL_EXT_samplerless_texture_functions : require
//
// layout(local_size_x = 32, local_size_y = 1, local_size_z = 1)in;
//
// layout(set = 0, binding = 0, rgba32ui)uniform writeonly uimage2D culledWidgetsOut;
//
// layout(set = 0, binding = 1)uniform WidgetCoordinates
// {
//     uvec4 coordinates[32 + 32];
// };
//
// shared uint intersectingWidgets[32];
//
// void accumulateWidgets(const uint localId)
// {
//
//     if(localId < 16)
//     {
//         intersectingWidgets[localId]|= intersectingWidgets[localId + 16];
//         if(localId < 8)
//         {
//             intersectingWidgets[localId]|= intersectingWidgets[localId + 8];
//             if(localId < 4)
//             {
//                 intersectingWidgets[localId]|= intersectingWidgets[localId + 4];
//                 if(localId < 2)
//                 {
//                     intersectingWidgets[localId]|= intersectingWidgets[localId + 2];
//                     if(localId < 1)
//                     {
//                         intersectingWidgets[localId]|= intersectingWidgets[localId + 1];
//                     }
//                 }
//             }
//         }
//     }
// }
//
// uvec2 cullWidgets(const uint offset, const uvec2 blockCoordLow, const uvec2 blockCoordHigh)
// {
//     const uint localId = gl_LocalInvocationID . x;
//     const uvec4 widgetCoords = coordinates[offset + localId];
//
//     const bool intersects = widgetCoords . x < widgetCoords . z &&
//                             all(lessThan(widgetCoords . xy, blockCoordHigh))&&
//                             all(greaterThanEqual(widgetCoords . zw, blockCoordLow));
//
//     uvec2 ballot = uvec2(0, 0);
//
//     intersectingWidgets[localId]= uint(intersects)<< localId;
//     accumulateWidgets(localId);
//     if(localId == 0)
//     {
//         ballot . x = intersectingWidgets[0];
//     }
//
//     return ballot;
// }
//
// void main()
// {
//
//     const uvec2 outCoord = gl_WorkGroupID . xy;
//     const uvec2 blockCoordLow = outCoord * uvec2(8, 4);
//     const uvec2 blockCoordHigh = blockCoordLow + uvec2(8, 4);
//
//     uvec2 culledWidgets;
//
//     culledWidgets . x = cullWidgets(0, blockCoordLow, blockCoordHigh). x;
//     culledWidgets . y = cullWidgets(32, blockCoordLow, blockCoordHigh). x;
//
//     if(gl_LocalInvocationID . x == 0)
//     {
//         imageStore(culledWidgetsOut, ivec2(outCoord), uvec4(culledWidgets, 0, 0));
//     }
// }