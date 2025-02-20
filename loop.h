/*
 * ftalat - Frequency Transition Latency Estimator
 * Copyright (C) 2013 Universite de Versailles
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LOOP_H
#define LOOP_H

#include "rdtsc.h"

#define asmLoop()\
{\
   asm volatile(\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      "addl $1,%%eax;\n\t"\
      :\
      :\
      :"%eax"\
   );\
}


/**
 * Kernel of 128 add in ASM
 * The kernel time execution is measured with \a sync_rdtsc1 and \a sync_rdtsc2
 * \return the number of cycles to execute the kernel
 */
__inline__ unsigned long loop()
{
   unsigned long long startTime = 0;
   unsigned long long endTime = 0;
   unsigned int i = 0;
   
   //sync_rdtscll(startTime);
   sync_rdtsc1(startTime);

   for ( i = 0 ; i < 8; i++ )
      asmLoop();
   sync_rdtsc2(endTime);
   //sync_rdtscll(endTime);
   
   return (unsigned long) (endTime - startTime);
}

#endif
