//-------------------------------------------------------------------------------
//$Header: /home/dashley/cvsrep/uculib01/uculib01/src/stm8/cosmic/modxx/atu16lsczyifaxdaxrrxx/unittest/ut_project/stm8/cosmic/modx0/utfu_atu16lsczyifaxdaxrrxx.c,v 1.6 2010/02/05 20:52:51 dashley Exp $
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
#define MODULE_UTFU_ATU16LSCZYIFAXDAXRRXX

#include "\uculib01\include\stm8\cosmic\c\uculib.h"
#include "utfu_atu16lsczyifaxdaxrrxx.h"


typedef struct
   {
   UCU_UINT16  arg;
   UCU_UINT16  arg_outof;
   UCU_UINT16  tgt_outof;
   UCU_UINT16  expected_result;
   } ATU16LSCZYIFAXDAXRRXX_TV;


//This is the table of test vectors.
//
const ATU16LSCZYIFAXDAXRRXX_TV AtU16LscZyiFAxdAxrRxx_Tvs[] =
   {
      //A zero value for arg_outof should always result in a zero calculated.
      {     0,      0,      0,      0},
      {  1100,      0,    293,      0},
      //A zero value for tgt_outof should always result in a zero calculated.
      {  1100,   2333,      0,      0},
      //The case of a very restricted domain should work correctly.
      {     0,      1,   1000,      0},
      {     1,      1,   1000,   1000},
      {     2,      1,   1000,   1000},
      {     1,      1,  65535,  65535},
      {     2,      1,  65535,  65535},
      //The case of a very restricted range should work correctly.
      {     0,   1000,      1,      0},
      {   999,   1000,      1,      0},
      {  1000,   1000,      1,      1},
      { 65534,  65535,      1,      0},
      { 65535,  65535,      1,      1},
      //The internal multiplication should not overflow or do anything bizarre even with
      //maximum values.
      {     0,  65535,  65535,      0},
      {     1,  65535,  65535,      1},
      {    19,  65535,  65535,     19},
      { 65534,  65535,  65535,  65534},
      { 65535,  65535,  65535,  65535},
   };


//Returns the number of test vectors that may be used for a speed test.
//
UCU_UINT32 UtsnAtU16LscZyiFAxdAxrRxx(void)
   {
   return(sizeof(AtU16LscZyiFAxdAxrRxx_Tvs)/sizeof(AtU16LscZyiFAxdAxrRxx_Tvs[0]));
   }


//Runs a selected test vector.  This is used for automated speed testing.
//
void UtspAtU16LscZyiFAxdAxrRxx(UCU_UINT32 test_no, void (*start_pointer)(void), void (*end_pointer)(void))
   {
   UCU_UINT16  arg;
   UCU_UINT16  arg_outof;
   UCU_UINT16  tgt_outof;
   UCU_BOOLEAN actual_value;

   //Error out if the index is invalid.
   //
   if (test_no >= (sizeof(AtU16LscZyiFAxdAxrRxx_Tvs)/sizeof(AtU16LscZyiFAxdAxrRxx_Tvs[0])))
      {
      while(UCU_TRUE)  //Can't allow this scenario and dereference an invalid vector.
         ;
      }

   //Fetch the parameters.  This removes all of the array indexing and so on from the
   //elapsed time calculation.
   arg            = AtU16LscZyiFAxdAxrRxx_Tvs[test_no].arg;
   arg_outof      = AtU16LscZyiFAxdAxrRxx_Tvs[test_no].arg_outof;
   tgt_outof      = AtU16LscZyiFAxdAxrRxx_Tvs[test_no].tgt_outof;
   
   //We are ready to make the call.  Start the caller's timer.
   (*start_pointer)();

   //Call the function.
   actual_value = UcuAtU16LscZyiFAxdAxrRxx(arg, arg_outof, tgt_outof);

   //The call is finished.  Stop the caller's timer.
   (*end_pointer)();
   }


//Runs all test vectors.  Returns TRUE if OK, FALSE if any failed.
//
UCU_BOOLEAN UtfuAtU16LscZyiFAxdAxrRxx(void)
   {
   UCU_BOOLEAN rv;
   UCU_UINT16  i;
   UCU_UINT16  arg;
   UCU_UINT16  arg_outof;
   UCU_UINT16  tgt_outof;
   UCU_UINT16  expected_result;
   UCU_UINT16  actual_result;

   rv = UCU_TRUE;

   for (i=0; i<(sizeof(AtU16LscZyiFAxdAxrRxx_Tvs)/sizeof(AtU16LscZyiFAxdAxrRxx_Tvs[0])); i++)
      {
      arg             = AtU16LscZyiFAxdAxrRxx_Tvs[i].arg;
      arg_outof       = AtU16LscZyiFAxdAxrRxx_Tvs[i].arg_outof;
      tgt_outof       = AtU16LscZyiFAxdAxrRxx_Tvs[i].tgt_outof;
      expected_result = AtU16LscZyiFAxdAxrRxx_Tvs[i].expected_result;

      actual_result = UcuAtU16LscZyiFAxdAxrRxx(arg, arg_outof, tgt_outof);

      if (actual_result != expected_result)
         rv = UCU_FALSE;
      }

   return(rv);
   }


//-------------------------------------------------------------------------------
//$Log: utfu_atu16lsczyifaxdaxrrxx.c,v $
//Revision 1.6  2010/02/05 20:52:51  dashley
//Automated test vector system changed from maximum of 2^16-1 cases to
//2^32-1 cases.
//
//Revision 1.5  2010/02/04 03:25:00  dashley
//Missing preprocessor directive added.
//
//Revision 1.4  2010/02/04 02:13:45  dashley
//Missing const keywords added.
//
//Revision 1.3  2010/02/03 22:13:26  dashley
//Edits.
//
//Revision 1.2  2010/02/03 21:22:12  dashley
//Extra line removed.
//
//Revision 1.1  2010/02/03 21:21:05  dashley
//Initial checkin.
//-------------------------------------------------------------------------------
//End of $RCSfile: utfu_atu16lsczyifaxdaxrrxx.c,v $
//-------------------------------------------------------------------------------
