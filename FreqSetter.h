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

#ifndef FREQSETTER_H
#define FREQSETTER_H

#include "FreqGetter.h"
#include <assert.h>
#include <stdio.h>

extern FILE** pSetFiles;

unsigned int getCoreNumber();
unsigned int getMinAvailableFreq(unsigned int coreID);

/**
 * Open and prepare frequency operation
 * \return 0 is everything gone fine
 */
char openFreqSetterFiles();

/**
 * Close the opened file to change frequencies
 */
void closeFreqSetterFiles(void);

/**
 * Set a new frequency for a specific core determined by \a coreID
 * \param coreID the id of the core to set
 * \param targetFreq the new freq
 */
inline void setFreq(unsigned int coreID, unsigned int targetFreq)
{
   assert(coreID < getCoreNumber());
   
   fprintf(pSetFiles[coreID],"%d",targetFreq);
   fflush(pSetFiles[coreID]);
}

/**
 * Set a new frequency for all cores
 * \param targetFreq the new freq
 */
inline void setAllFreq(unsigned int targetFreq)
{
   int nbCore = getCoreNumber();
   int i;
   
   for (i = 0; i < nbCore ; i++ )
   {
      fprintf(pSetFiles[i],"%d",targetFreq);
      fflush(pSetFiles[i]);
   }
}

/**
 * Set the minimal available frequency for all cores
 */
inline void setMinFreqForAll()
{
   setAllFreq(getMinAvailableFreq(0));
   waitCurFreq(0,getMinAvailableFreq(0));
}

/**
 * Set a new cpufreq governor for all cores
 * \param newPolicy the new governor to set
 * \return 0 is everything gone fine
 */
char setCPUGovernor(const char* newPolicy);

#endif
