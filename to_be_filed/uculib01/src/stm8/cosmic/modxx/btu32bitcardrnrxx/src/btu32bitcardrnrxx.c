//-------------------------------------------------------------------------------
//$Header: /home/dashley/cvsrep/uculib01/uculib01/src/stm8/cosmic/modxx/btu32bitcardrnrxx/src/btu32bitcardrnrxx.c,v 1.4 2010/02/11 18:21:44 dashley Exp $
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

#include "uculib.h"


UCU_UINT8 UcuBtU32BitCardRnRxx( UCU_UINT32 arg, UCU_UINT8 n )
   {
   UCU_UNION32 temp;

   //Clip n at 32 so we don't index arbitrarily.
   if (n > 32)
      n = 32;

   //Strip the left bits from the 32-bit value.
   arg = arg & UcuBtU32RmaskLut[n];

   //Assign so we can pick it apart.
   temp.ul = arg;

   //The value to return is the sum of the cardinalities of the bytes.
   return(   UcuBtU8BitCardRxx(temp.uc[0]) 
           + UcuBtU8BitCardRxx(temp.uc[1])
           + UcuBtU8BitCardRxx(temp.uc[2])
           + UcuBtU8BitCardRxx(temp.uc[3]));
   }


//-------------------------------------------------------------------------------
//End of $Id: btu32bitcardrnrxx.c,v 1.4 2010/02/11 18:21:44 dashley Exp $
//-------------------------------------------------------------------------------
//$Log: btu32bitcardrnrxx.c,v $
//Revision 1.4  2010/02/11 18:21:44  dashley
//Documentation removed.
//
//Revision 1.3  2010/01/31 02:46:48  dashley
//Bit cardinality functions added.
//
//Revision 1.2  2010/01/22 15:41:51  dashley
//Extra line removed.
//
//Revision 1.1  2010/01/22 15:41:26  dashley
//Initial checkin.
//-------------------------------------------------------------------------------
