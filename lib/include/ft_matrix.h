#ifndef FT_MATRIX_H
#define FT_MATRIX_H

#include <stdalign.h>

typedef union {
	struct {
		alignas(4) float x;
		alignas(4) float y;
		alignas(4) float z;
		alignas(4) float w;
	};

	float v[4];
} ft_matrix_f32_vec4;

typedef struct {
	struct {
		alignas(4) float x;
		alignas(4) float y;
		alignas(4) float z;
	};

	float v[3];
} ft_matrix_f32_vec3;

typedef union {
	struct {
		alignas(4) float x0;
		alignas(4) float y0;
		alignas(4) float z0;
		alignas(4) float w0;
		alignas(4) float x1;
		alignas(4) float y1;
		alignas(4) float z1;
		alignas(4) float w1;
		alignas(4) float x2;
		alignas(4) float y2;
		alignas(4) float z2;
		alignas(4) float w2;
		alignas(4) float x3;
		alignas(4) float y3;
		alignas(4) float z3;
		alignas(4) float w3;
	};

	struct {
		alignas(4) float xx;
		alignas(4) float yx;
		alignas(4) float zx;
		alignas(4) float wx;
		alignas(4) float xy;
		alignas(4) float yy;
		alignas(4) float zy;
		alignas(4) float wy;
		alignas(4) float xz;
		alignas(4) float yz;
		alignas(4) float zz;
		alignas(4) float wz;
		alignas(4) float xw;
		alignas(4) float yw;
		alignas(4) float zw;
		alignas(4) float ww;
	};

	float m[16];

	struct {
		ft_matrix_f32_vec4 x;
		ft_matrix_f32_vec4 y;
		ft_matrix_f32_vec4 z;
		ft_matrix_f32_vec4 w;
	};

	ft_matrix_f32_vec4 r[4];
} ft_matrix_f32_mat4;

typedef union {
	struct {
		alignas(4) float x0;
		alignas(4) float y0;
		alignas(4) float z0;
		alignas(4) float _pad0;
		alignas(4) float x1;
		alignas(4) float y1;
		alignas(4) float z1;
		alignas(4) float _pad1;
		alignas(4) float x2;
		alignas(4) float y2;
		alignas(4) float z2;
		alignas(4) float _pad2;
	};

	struct {
		alignas(4) float xx;
		alignas(4) float yx;
		alignas(4) float zx;
		alignas(4) float _padx;
		alignas(4) float xy;
		alignas(4) float yy;
		alignas(4) float zy;
		alignas(4) float _pady;
		alignas(4) float xz;
		alignas(4) float yz;
		alignas(4) float zz;
		alignas(4) float _padz;
	};

	float m[12];

	struct {
		ft_matrix_f32_vec4 x;
		ft_matrix_f32_vec4 y;
		ft_matrix_f32_vec4 z;
	};

	ft_matrix_f32_vec4 r[3];
} ft_matrix_f32_mat3;

typedef union {
	struct {
		alignas(8) double x;
		alignas(8) double y;
		alignas(8) double z;
		alignas(8) double w;
	};

	double v[4];
} ft_matrix_f64_vec4;

typedef struct {
	struct {
		alignas(8) double x;
		alignas(8) double y;
		alignas(8) double z;
		alignas(8) double _pad;
	};

	double v[4];
} ft_matrix_f64_vec3;

typedef union {
	struct {
		alignas(8) double x0;
		alignas(8) double y0;
		alignas(8) double z0;
		alignas(8) double w0;
		alignas(8) double x1;
		alignas(8) double y1;
		alignas(8) double z1;
		alignas(8) double w1;
		alignas(8) double x2;
		alignas(8) double y2;
		alignas(8) double z2;
		alignas(8) double w2;
		alignas(8) double x3;
		alignas(8) double y3;
		alignas(8) double z3;
		alignas(8) double w3;
	};

	struct {
		alignas(8) double xx;
		alignas(8) double yx;
		alignas(8) double zx;
		alignas(8) double wx;
		alignas(8) double xy;
		alignas(8) double yy;
		alignas(8) double zy;
		alignas(8) double wy;
		alignas(8) double xz;
		alignas(8) double yz;
		alignas(8) double zz;
		alignas(8) double wz;
		alignas(8) double xw;
		alignas(8) double yw;
		alignas(8) double zw;
		alignas(8) double ww;
	};

	double m[16];

	struct {
		ft_matrix_f64_vec4 x;
		ft_matrix_f64_vec4 y;
		ft_matrix_f64_vec4 z;
		ft_matrix_f64_vec4 w;
	};

	ft_matrix_f64_vec4 r[4];
} ft_matrix_f64_mat4;

typedef union {
	struct {
		alignas(8) double x0;
		alignas(8) double y0;
		alignas(8) double z0;
		alignas(8) double _pad0;
		alignas(8) double x1;
		alignas(8) double y1;
		alignas(8) double z1;
		alignas(8) double _pad1;
		alignas(8) double x2;
		alignas(8) double y2;
		alignas(8) double z2;
		alignas(8) double _pad2;
	};

	struct {
		alignas(8) double xx;
		alignas(8) double yx;
		alignas(8) double zx;
		alignas(8) double _padx;
		alignas(8) double xy;
		alignas(8) double yy;
		alignas(8) double zy;
		alignas(8) double _pady;
		alignas(8) double xz;
		alignas(8) double yz;
		alignas(8) double zz;
		alignas(8) double _padz;
	};

	double m[12];

	struct {
		ft_matrix_f64_vec4 x;
		ft_matrix_f64_vec4 y;
		ft_matrix_f64_vec4 z;
	};

	ft_matrix_f64_vec4 r[3];
} ft_matrix_f64_mat3;

#endif
