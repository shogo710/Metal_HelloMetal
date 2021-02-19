//
//  ShaderTypes.h
//  HelloMetal
//
//  Created by Shogo Nobuhara on 2021/02/14.
//

#ifndef ShaderTypes_h
#define ShaderTypes_h

#include <simd/simd.h>

enum {
    kShaderVertexInputIndexVertices     = 0,
    kShaderVertexInputIndexViewportSize = 1,
    kShaderVertexInputIndexPastTime     = 2
};

typedef struct {
    vector_float2 position;
    vector_float4 color;
} ShaderVertex;

#endif /* ShaderTypes_h */
