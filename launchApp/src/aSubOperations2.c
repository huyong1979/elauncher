#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dbAccess.h>
#include <dbDefs.h>
#include <dbFldTypes.h>
#include <registryFunction.h>
#include <aSubRecord.h>
#include <waveformRecord.h>
#include <epicsExport.h>
#include <epicsTime.h>
#include <math.h>

static long psDiff22(aSubRecord *pasub)
{
    float *vaptr = (float *)pasub->vala;
    int length = (long *)pasub->noa;

    float *temp1;
    float *temp2;
    temp1 = (float *)pasub->a;
    temp2 = (float *)pasub->b;

    int i;
    for(i=0;i<length;i++) {
        vaptr[i] = temp1[i]-temp2[i];
    }
    return 0;
}

epicsRegisterFunction(psDiff22);

