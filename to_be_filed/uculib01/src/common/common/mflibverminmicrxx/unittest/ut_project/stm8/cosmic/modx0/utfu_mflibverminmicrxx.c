//-------------------------------------------------------------------------------
//$Header: /home/dashley/cvsrep/uculib01/uculib01/src/common/common/mflibverminmicrxx/unittest/ut_project/stm8/cosmic/modx0/utfu_mflibverminmicrxx.c,v 1.2 2010/02/14 21:47:29 dashley Exp $
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
#define MODULE_UTFU_MFLIBVERMINMICRXX

#include "\uculib01\include\stm8\cosmic\c\uculib.h"
#include "utfu_mflibverminmicrxx.h"


//Returns the number of test vectors that may be used for a speed test.
//
UCU_UINT32 UtsnMfLibVerMinMicRxx(void)
   {
   return(1);  //There is only one test vector.
   }


//Runs a selected test vector.  This is used for automated speed testing.
//
void UtspMfLibVerMinMicRxx(UCU_UINT32 test_no, void (*start_pointer)(void), void (*end_pointer)(void))
   {
   UCU_UINT16 rv;

   //We are ready to make the call.  Start the caller's timer.
   (*start_pointer)();

   //Call the function.
   rv = UcuMfLibVerMinMicRxx();

   //The call is finished.  Stop the caller's timer.
   (*end_pointer)();
   }


//Runs all test vectors.  Returns TRUE if OK, FALSE if any failed.
//
UCU_BOOLEAN UtfuMfLibVerMinMicRxx(void)
   {
   UCU_UINT16  minmic;

   minmic = UcuMfLibVerMinMicRxx();

   if (minmic == ((UCU_LIBVER_MINOR <<8 ) |  (UCU_LIBVER_MICRO)))
      {
      return(UCU_TRUE);
      }
   else
      {
      return(UCU_FALSE);
      }
   }


//-------------------------------------------------------------------------------
//$Log: utfu_mflibverminmicrxx.c,v $
//Revision 1.2  2010/02/14 21:47:29  dashley
//Unit test complete.
//
//Revision 1.1  2010/02/14 21:43:41  dashley
//Initial checkin.
//-------------------------------------------------------------------------------
//End of $RCSfile: utfu_mflibverminmicrxx.c,v $
//-------------------------------------------------------------------------------
