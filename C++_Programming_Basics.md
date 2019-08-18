# C++ Programming Language Basics 
[Reference](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp1_Basics.html)
To be a proficient programmer, you need to master two things: 
- (1) the syntax of the programming language, and 
- (2) the core libraries (i.e., API) associated with the language.

## Fundamental Types
<p>The table below shows the <em>typical</em> size, minimum, maximum for the primitive types. Again, take note that the sizes are implementation dependent.</p>

<table class="table-zebra">
  <thead>
  <tr>
    <th>Category</th>
    <th>Type</th>
    <th>Description</th>
    <th>Bytes<br />(Typical)</th>
    <th>Minimum<br />(Typical)</th>
    <th>Maximum<br />(Typical)</th>
  </tr>
  </thead>
  <tbody class="font-code"> 
  
  <tr>
    <td rowspan="11">Integers</td>
    <td>int<br />
      (or signed int)</td>
    <td class="font-normal">Signed integer (of at least 16 bits)</td>
    <td>4 (2)</td>
    <td>-2147483648</td>
    <td>2147483647</td>
  </tr>
  <tr class="tr-alt">
    <td>unsigned int</td>
    <td class="font-normal">Unsigned integer (of at least 16 bits)</td>
    <td>4 (2)</td>
    <td>0</td>
    <td>4294967295</td>
  </tr>
  <tr>
    <td>char</td>
    <td class="font-normal">Character <br />
      (can be either signed or unsigned depends on implementation)</td>
    <td>1</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr class="tr-alt">
    <td>signed char</td>
    <td class="font-normal">Character or signed tiny integer <br />
      (guarantee to be signed)</td>
    <td>1</td>
    <td>-128</td>
    <td>127</td>
  </tr>
  <tr>
    <td>unsigned char</td>
    <td class="font-normal">Character or unsigned tiny integer  <br />
      (guarantee to be unsigned)</td>
    <td>1</td>
    <td>0</td>
    <td>255</td>
  </tr>
  <tr class="tr-alt">
    <td>short <br />
      (or short int)<br />
      (or signed short)<br />
      (or signed short int)</td>
    <td class="font-normal">Short signed integer (of at least 16 bits)</td>
    <td>2</td>
    <td>-32768</td>
    <td>32767</td>
  </tr>
  <tr>
    <td>unsigned short<br />
      (or unsigned shot int)</td>
    <td class="font-normal">Unsigned short integer (of at least 16 bits)</td>
    <td>2</td>
    <td>0</td>
    <td>65535</td>
  </tr>
  <tr class="tr-alt">
    <td>long <br />
      (or long int)<br />
      (or signed long)<br />
      (or signed long int)</td>
    <td class="font-normal">Long signed integer (of at least 32 bits)</td>
    <td>4 (8)</td>
    <td>-2147483648</td>
    <td>2147483647</td>
  </tr>
  <tr>
    <td>unsigned long<br />
      (or unsigned long int)</td>
    <td class="font-normal">Unsigned long integer (of at least 32 bits)</td>
    <td>4 (8)</td>
    <td>0</td>
    <td class="font-normal">same as above</td>
  </tr>
  <tr class="tr-alt">
    <td>long long <br />
      (or long long int)<br />
      (or signed long long)<br />
      (or signed long long int) (C++11)</td>
    <td class="font-normal">Very long signed integer (of at least 64 bits)</td>
    <td>8</td>
    <td>-2<sup>63</sup></td>
    <td>2<sup>63</sup>-1</td>
  </tr>
  <tr>
    <td>unsigned long long<br />
      (or unsigned long long int) (C++11)</td>
    <td class="font-normal">Unsigned very long integer (of at least 64 bits)</td>
    <td>8</td>
    <td>0</td>
    <td>2<sup>64</sup>-1</td>
  </tr>
  <tr class="tr-alt">
    <td rowspan="3">Real Numbers</td>
    <td>float</td>
    <td class="font-normal">Floating-point number, &asymp;7 digits<br />
    (IEEE 754 single-precision floating point format)</td>
    <td>4</td>
    <td>3.4e38</td>
    <td>3.4e-38</td>
  </tr>
  <tr>
    <td>double</td>
    <td class="font-normal">Double precision floating-point number, &asymp;15 digits<br />
    (IEEE 754 double-precision floating point format)</td>
    <td>8</td>
    <td>1.7e308</td>
    <td>1.7e-308</td>
  </tr>
  <tr class="tr-alt">
    <td>long double</td>
    <td class="font-normal">Long double precision floating-point number, &asymp;19 digits<br />
    (IEEE 754 quadruple-precision floating point format)</td>
    <td>12 (8)</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>Boolean<br />
      Numbers</td>
    <td>bool</td>
    <td class="font-normal">Boolean value of either <code>true</code> or <code>false</code> </td>
    <td>1</td>
    <td>false (0)</td>
    <td>true (1 or non-zero)</td>
  </tr>
  <tr class="tr-alt">
    <td>Wide <br />
      Characters</td>
    <td>wchar_t<br />
      char16_t (C++11)<br />
      char32_t (C++11)</td>
    <td class="font-normal">Wide (double-byte) character</td>
    <td>2 (4)</td>
    <td>&nbsp;</td>
    <td>&nbsp;</td>
  </tr>
  </tbody>
</table>

<p>In addition, many C++ library functions use a type called <code>size_t</code>, which is equivalent (<code>typedef</code>) to a <code>unsigned int</code>, meant for counting, size or length, with 0 and positive integers.</p>


<h5>*The <span class="font-code">sizeof</span> Operator</h5>

<p>C/C++ provides an unary <code>sizeof</code> operator to get the size of the operand (in bytes). The following program uses <code>sizeof</code> operator to print the size of the fundamental types.</p>

<table class="table-program">
<col class="col-line-number" />
<col class="col-program" />
<tbody>
<tr>
<td>
<pre>
<span class="color-comment">/*
 * Print Size of Fundamental Types (SizeofTypes.cpp).
 */</span>
#include &lt;iostream&gt;
using namespace std;
 
int main() {
   cout &lt;&lt; &quot;sizeof(char) is &quot; &lt;&lt; sizeof(char) &lt;&lt; &quot; bytes &quot; &lt;&lt; endl;
   cout &lt;&lt; &quot;sizeof(short) is &quot; &lt;&lt; sizeof(short) &lt;&lt; &quot; bytes &quot; &lt;&lt; endl;
   cout &lt;&lt; &quot;sizeof(int) is &quot; &lt;&lt; sizeof(int) &lt;&lt; &quot; bytes &quot; &lt;&lt; endl;
   cout &lt;&lt; &quot;sizeof(long) is &quot; &lt;&lt; sizeof(long) &lt;&lt; &quot; bytes &quot; &lt;&lt; endl;
   cout &lt;&lt; &quot;sizeof(long long) is &quot; &lt;&lt; sizeof(long long) &lt;&lt; &quot; bytes &quot; &lt;&lt; endl;
   cout &lt;&lt; &quot;sizeof(float) is &quot; &lt;&lt; sizeof(float) &lt;&lt; &quot; bytes &quot; &lt;&lt; endl;
   cout &lt;&lt; &quot;sizeof(double) is &quot; &lt;&lt; sizeof(double) &lt;&lt; &quot; bytes &quot; &lt;&lt; endl;
   cout &lt;&lt; &quot;sizeof(long double) is &quot; &lt;&lt; sizeof(long double) &lt;&lt; &quot; bytes &quot; &lt;&lt; endl;
   cout &lt;&lt; &quot;sizeof(bool) is &quot; &lt;&lt; sizeof(bool) &lt;&lt; &quot; bytes &quot; &lt;&lt; endl;
   return 0;
}</pre>
</td>
</tr>
</tbody>
</table>

<pre class="output">
sizeof(char) is 1 bytes
sizeof(short) is 2 bytes
sizeof(int) is 4 bytes
sizeof(long) is 4 bytes
sizeof(long long) is 8 bytes
sizeof(float) is 4 bytes
sizeof(double) is 8 bytes
sizeof(long double) is 12 bytes
sizeof(bool) is 1 bytes</pre>

<p>The results may vary among different systems.</p>

<h5>*Header <span class="font-code">&lt;climits&gt;</span></h5>

<p>The <code>climits</code> header (ported to C++ from C's <code>limits.h</code>) contains information about limits of integer type. For example,</p>

<table class="table-program">
<col class="col-line-number" />
<col class="col-program" />
<tbody>
<tr>
<td>
<pre class="text-right">
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20</pre>
</td>
<td>
<pre>
<span class="color-comment">/* Test integer limits in &lt;climits&gt; header */</span>
#include &lt;iostream&gt;
#include &lt;climits&gt;  <span class="color-comment"> // integer limits</span>
using namespace std;
 
int main() {
   cout &lt;&lt; &quot;int max = &quot; &lt;&lt; INT_MAX &lt;&lt; endl;
   cout &lt;&lt; &quot;int min = &quot; &lt;&lt; INT_MIN &lt;&lt; endl;
   cout &lt;&lt; &quot;unsigned int max = &quot; &lt;&lt; UINT_MAX &lt;&lt; endl;
   cout &lt;&lt; &quot;long long max = &quot; &lt;&lt; LLONG_MAX &lt;&lt; endl;
   cout &lt;&lt; &quot;long long min = &quot; &lt;&lt; LLONG_MIN &lt;&lt; endl;
   cout &lt;&lt; &quot;unsigned long long max = &quot; &lt;&lt; ULLONG_MAX &lt;&lt; endl;
   cout &lt;&lt; &quot;Bits in char = &quot; &lt;&lt; CHAR_BIT &lt;&lt; endl;
   cout &lt;&lt; &quot;char max = &quot; &lt;&lt; CHAR_MAX &lt;&lt; endl;
   cout &lt;&lt; &quot;char min = &quot; &lt;&lt; CHAR_MIN &lt;&lt; endl;
   cout &lt;&lt; &quot;signed char max = &quot; &lt;&lt; SCHAR_MAX &lt;&lt; endl;
   cout &lt;&lt; &quot;signed char min = &quot; &lt;&lt; SCHAR_MIN &lt;&lt; endl;
   cout &lt;&lt; &quot;unsigned char max = &quot; &lt;&lt; UCHAR_MAX &lt;&lt; endl;
   return 0;
}</pre>
</td>
</tr>
</tbody>
</table>

<pre class="output">
int max = 2147483647
int min = -2147483648
unsigned int max = 4294967295
long long max = 9223372036854775807
long long min = -9223372036854775808
unsigned long long max = 18446744073709551615
Bits in char = 8
char max = 127
char min = -128
signed char max = 127
signed char min = -128
unsigned char max = 255</pre>
