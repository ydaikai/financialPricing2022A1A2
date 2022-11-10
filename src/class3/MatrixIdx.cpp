/** \file  MatrixIdx.cpp
    \brief Example program demonstrating usage of overloaded
           operator () for subscripting.
           Copyright 2005 by Erik Schl�gl

		   Redistribution and use in source and binary forms, with or without modification, are permitted provided
		   that the following conditions are met:
		
           -# Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

           -# Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

           -# The name of the copyright holder may not be used to endorse or promote products derived from this software without specific prior written permission.
		
           THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
		   INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
		   PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY DIRECT, INDIRECT,
		   INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
		   OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
		   CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
		   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
		   POSSIBILITY OF SUCH DAMAGE.

		   Diva Analytics modified this file (Jan 29, 2016)

     */

#include <iostream>
#include "Matrix.h"

using namespace std;

int main(int argc, char *argv[])
{
    int i,j;
    Matrix A(3,2);
    // assign values to matrix elements
    for (i=0;i<3;i++) {
      for (j=0;j<2;j++) A(i,j) = 0.1*i*j; }
    // access matrix elements
    double sum = 0.0;
    for (i=0;i<3;i++) {
      for (j=0;j<2;j++) sum += A(i,j); }
    cout << "The sum of the matrix elements is " <<  sum << endl;


	double tmp;
	cin >> tmp;

    return EXIT_SUCCESS;
}
