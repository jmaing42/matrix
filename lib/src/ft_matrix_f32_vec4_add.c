#include "ft_matrix.h"
#include "macros.h"

#if FT_MATRIX_TARGET == FT_MATRIX_TARGET_CODE_SSE

# include <immintrin.h>

ft_matrix_f32_vec4
	ft_matrix_f32_vec4_add(ft_matrix_f32_vec4 a, ft_matrix_f32_vec4 b) {
	__m128 c = _mm_add_ps(*((__m128 *)&a), *((__m128 *)&b));
	return *((ft_matrix_f32_vec4 *)&c);
}

#endif
