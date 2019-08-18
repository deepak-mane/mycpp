# C++ Programming Language Basics

## Fundamental Types

| Category	| Type	| Description	| Bytes (Typical)	| Minimum (Typical)	| Maximum (Typical) |  
| --- | --- | --- | --- | --- | --- |
||||||

Integers	int
(or signed int)	Signed integer (of at least 16 bits)	4 (2)	-2147483648	2147483647
unsigned int	Unsigned integer (of at least 16 bits)	4 (2)	0	4294967295
char	Character 
(can be either signed or unsigned depends on implementation)	1	 	 
signed char	Character or signed tiny integer 
(guarantee to be signed)	1	-128	127
unsigned char	Character or unsigned tiny integer 
(guarantee to be unsigned)	1	0	255
short 
(or short int)
(or signed short)
(or signed short int)	Short signed integer (of at least 16 bits)	2	-32768	32767
unsigned short
(or unsigned shot int)	Unsigned short integer (of at least 16 bits)	2	0	65535
long 
(or long int)
(or signed long)
(or signed long int)	Long signed integer (of at least 32 bits)	4 (8)	-2147483648	2147483647
unsigned long
(or unsigned long int)	Unsigned long integer (of at least 32 bits)	4 (8)	0	same as above
long long 
(or long long int)
(or signed long long)
(or signed long long int) (C++11)	Very long signed integer (of at least 64 bits)	8	-263	263-1
unsigned long long
(or unsigned long long int) (C++11)	Unsigned very long integer (of at least 64 bits)	8	0	264-1
Real Numbers	float	Floating-point number, ≈7 digits
(IEEE 754 single-precision floating point format)	4	3.4e38	3.4e-38
double	Double precision floating-point number, ≈15 digits
(IEEE 754 double-precision floating point format)	8	1.7e308	1.7e-308
long double	Long double precision floating-point number, ≈19 digits
(IEEE 754 quadruple-precision floating point format)	12 (8)	 	 
Boolean
Numbers	bool	Boolean value of either true or false	1	false (0)	true (1 or non-zero)
Wide 
Characters	wchar_t
char16_t (C++11)
char32_t (C++11)	Wide (double-byte) character	2 (4)	 	 
