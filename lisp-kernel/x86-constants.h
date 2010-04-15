/*
   Copyright (C) 2005-2009 Clozure Associates
   This file is part of Clozure CL.  

   Clozure CL is licensed under the terms of the Lisp Lesser GNU Public
   License , known as the LLGPL and distributed with Clozure CL as the
   file "LICENSE".  The LLGPL consists of a preamble and the LGPL,
   which is distributed with Clozure CL as the file "LGPL".  Where these
   conflict, the preamble takes precedence.  

   Clozure CL is referenced in the preamble as the "LIBRARY."

   The LLGPL is also available online at
   http://opensource.franz.com/preamble.html
*/

#include "constants.h"


/* FP exception mask bits */
#define MXCSR_IM_BIT (7)        /* invalid masked when set*/
#define MXCSR_DM_BIT (8)        /* denormals masked when set*
#define MXCSR_ZM_BIT (9)        /* divide-by-zero masked when set */
#define MXCSR_OM_BIT (10)       /* overflow masked when set */
#define MXCSR_UM_BIT (11)       /* underflow masked when set */
#define MXCSR_PM_BIT (12)       /* precision masked when set */

/* Bits in the xFLAGS register */
#define X86_CARRY_FLAG_BIT (0)
#define X86_PARITY_FLAG_BIT (2)
#define X86_AUX_CARRY_FLAG_BIT (4)
#define X86_ZERO_FLAG_BIT (6)
#define X86_SIGN_FLAG_BIT (7)
#define X86_DIRECTION_FLAG_BIT (10)
#define X86_OVERFLOW_FLAG_BIT (11)

#define STATIC_BASE_ADDRESS 0x00012000



