//-------------------------------------------------------------------------------
//$Header: /home/dashley/cvsrep/uculib01/uculib01/src/stm8/cosmic/modxx/btu32bitcardrnrxx/unittest/ut_project/stm8/cosmic/modx0/main.c,v 1.2 2010/02/12 21:33:10 dashley Exp $
//-------------------------------------------------------------------------------
//Copyright (c)2010 David T. Ashley
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software source code and associated documentation files (the
//"Software"), to deal in the Software without restriction, including without
//limitation the rights to use, copy, modify, merge, publish, distribute,
//sublicense, and/or sell copies of the Software, and to permit persons to whom
//the Software is furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in
//all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//THE SOFTWARE.
//-------------------------------------------------------------------------------
//This program links with the library and performs automated unit tests on the
//UcuBtU32BitCardRnRxx() function.
//-------------------------------------------------------------------------------

#include "\uculib01\include\stm8\cosmic\c\uculib.h"
#include "utfu_btu32bitcardrnrxx.h"


volatile UCU_BOOLEAN result;

void main(void)
   {
   result = UtfuBtU32BitCardRnRxx();

   //May examine the result assignment above to figure out if the unit test passed.

	while (1);
   }


//-------------------------------------------------------------------------------
//$Log: main.c,v $
//Revision 1.2  2010/02/12 21:33:10  dashley
//Unit testing completed.
//
//Revision 1.1  2010/02/12 20:33:30  dashley
//Edits.
//-------------------------------------------------------------------------------
//End of $RCSfile: main.c,v $
//-------------------------------------------------------------------------------
