//-------------------------------------------------------------------------------
//$Header: /home/dashley/cvsrep/uculib01/uculib01/src/stm8/cosmic/modxx/amu8adnbzu16nrxn/src/amu8adnbzu16nrxn.c,v 1.4 2010/02/16 23:46:45 dashley Exp $
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


void UcuAmU8aDnbzU16nRxn(UCU_UINT8 *in_arg, UCU_UINT16 in_nelem)
   {
   while (in_nelem)
      {
      if (*in_arg)
         (*in_arg)--;
      in_arg++;
      in_nelem--;
      }
   }

//-------------------------------------------------------------------------------
//End of $Id: amu8adnbzu16nrxn.c,v 1.4 2010/02/16 23:46:45 dashley Exp $
//-------------------------------------------------------------------------------
//$Log: amu8adnbzu16nrxn.c,v $
//Revision 1.4  2010/02/16 23:46:45  dashley
//Comments removed.
//
//Revision 1.3  2010/01/28 18:55:19  dashley
//Integration of UcuAmU8aDnbzU16nRxn().
//
//Revision 1.2  2010/01/22 18:59:19  dashley
//Extra line removed.
//
//Revision 1.1  2010/01/22 18:59:04  dashley
//Initial checkin.
//-------------------------------------------------------------------------------
