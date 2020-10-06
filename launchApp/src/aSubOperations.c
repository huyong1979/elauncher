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

static long psDiff2(aSubRecord *pasub)
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
static long psSub3(aSubRecord *pasub)
{
    float *vaptr;
    vaptr = (float *)pasub->vala;

    float *temp[3];
    temp[0] = (float *)pasub->a;
    temp[1] = (float *)pasub->b;
    temp[2] = (float *)pasub->c;

    int length[3];
    length[0] = (long *)pasub->noa;
    length[1] = (long *)pasub->nob;
    length[2] = (long *)pasub->noc;

    int i;
    for(i=0;i<3;i++) {
        memcpy(vaptr, temp[i],length[i]*sizeof(float));
        vaptr += length[i];
    }
    return 0;
}
static long psSub15(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float *temp[15];
    temp[0] = (float *)pasub->a;
    temp[1] = (float *)pasub->b;
    temp[2] = (float *)pasub->c;
    temp[3] = (float *)pasub->d;
    temp[4] = (float *)pasub->e;
    temp[5] = (float *)pasub->f;
    temp[6] = (float *)pasub->g;
    temp[7] = (float *)pasub->h;
    temp[8] = (float *)pasub->i;
    temp[9] = (float *)pasub->j;
    temp[10] = (float *)pasub->k;
    temp[11] = (float *)pasub->l;
    temp[12] = (float *)pasub->m;
    temp[13] = (float *)pasub->n;
    temp[14] = (float *)pasub->o;

    int length[15];
    length[0] = (long *)pasub->noa;
    length[1] = (long *)pasub->nob;
    length[2] = (long *)pasub->noc;
    length[3] = (long *)pasub->nod;
    length[4] = (long *)pasub->noe;
    length[5] = (long *)pasub->nof;
    length[6] = (long *)pasub->nog;
    length[7] = (long *)pasub->noh;
    length[8] = (long *)pasub->noi;
    length[9] = (long *)pasub->noj;
    length[10] = (long *)pasub->nok;
    length[11] = (long *)pasub->nol;
    length[12] = (long *)pasub->nom;
    length[13] = (long *)pasub->non;
    length[14] = (long *)pasub->noo;

    int i;
    for(i=0;i<15;i++) {
    memcpy(vaptr, temp[i],length[i]*sizeof(float));
    vaptr += length[i];
    }
    return 0;
}
static long psSub6(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[6];
    temp[0] = *(float *)pasub->a;
    temp[1] = *(float *)pasub->b;
    temp[2] = *(float *)pasub->c;
    temp[3] = *(float *)pasub->d;
    temp[4] = *(float *)pasub->e;
    temp[5] = *(float *)pasub->f;
    memcpy(vaptr,temp,6*sizeof(float));
    return 0;
}
static long psSub9(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[9];
    temp[0] = *(float *)pasub->a;
    temp[1] = *(float *)pasub->b;
    temp[2] = *(float *)pasub->c;
    temp[3] = *(float *)pasub->d;
    temp[4] = *(float *)pasub->e;
    temp[5] = *(float *)pasub->f;
    temp[6] = *(float *)pasub->g;
    temp[7] = *(float *)pasub->h;
    temp[8] = *(float *)pasub->i;
    memcpy(vaptr,temp,9*sizeof(float));
    return 0;
}
static long psSub10(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[10];
    temp[0] = *(float *)pasub->a;
    temp[1] = *(float *)pasub->b;
    temp[2] = *(float *)pasub->c;
    temp[3] = *(float *)pasub->d;
    temp[4] = *(float *)pasub->e;
    temp[5] = *(float *)pasub->f;
    temp[6] = *(float *)pasub->g;
    temp[7] = *(float *)pasub->h;
    temp[8] = *(float *)pasub->i;
    temp[9] = *(float *)pasub->j;
    memcpy(vaptr,temp,10*sizeof(float));
    return 0;
}
static long psSub12(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[12];
    temp[0] = *(float *)pasub->a;
    temp[1] = *(float *)pasub->b;
    temp[2] = *(float *)pasub->c;
    temp[3] = *(float *)pasub->d;
    temp[4] = *(float *)pasub->e;
    temp[5] = *(float *)pasub->f;
    temp[6] = *(float *)pasub->g;
    temp[7] = *(float *)pasub->h;
    temp[8] = *(float *)pasub->i;
    temp[9] = *(float *)pasub->j;
    temp[10] = *(float *)pasub->k;
    temp[11] = *(float *)pasub->l;
    memcpy(vaptr, temp,12*sizeof(float));
    return 0;
}
static long psSub18(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[18];
    temp[0] = *(float *)pasub->a;
    temp[1] = *(float *)pasub->b;
    temp[2] = *(float *)pasub->c;
    temp[3] = *(float *)pasub->d;
    temp[4] = *(float *)pasub->e;
    temp[5] = *(float *)pasub->f;
    temp[6] = *(float *)pasub->g;
    temp[7] = *(float *)pasub->h;
    temp[8] = *(float *)pasub->i;
    temp[9] = *(float *)pasub->j;
    temp[10] = *(float *)pasub->k;
    temp[11] = *(float *)pasub->l;
    temp[12] = *(float *)pasub->m;
    temp[13] = *(float *)pasub->n;
    temp[14] = *(float *)pasub->o;
    temp[15] = *(float *)pasub->p;
    temp[16] = *(float *)pasub->q;
    temp[17] = *(float *)pasub->r;
    memcpy(vaptr,temp,18*sizeof(float));
    return 0;
}
static long psSub20(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[20];
    temp[0] = *(float *)pasub->a;
    temp[1] = *(float *)pasub->b;
    temp[2] = *(float *)pasub->c;
    temp[3] = *(float *)pasub->d;
    temp[4] = *(float *)pasub->e;
    temp[5] = *(float *)pasub->f;
    temp[6] = *(float *)pasub->g;
    temp[7] = *(float *)pasub->h;
    temp[8] = *(float *)pasub->i;
    temp[9] = *(float *)pasub->j;
    temp[10] = *(float *)pasub->k;
    temp[11] = *(float *)pasub->l;
    temp[12] = *(float *)pasub->m;
    temp[13] = *(float *)pasub->n;
    temp[14] = *(float *)pasub->o;
    temp[15] = *(float *)pasub->p;
    temp[16] = *(float *)pasub->q;
    temp[17] = *(float *)pasub->r;
    temp[18] = *(float *)pasub->s;
    temp[19] = *(float *)pasub->t;
    memcpy(vaptr,temp,20*sizeof(float));
    return 0;
}

epicsRegisterFunction(psSub3);
epicsRegisterFunction(psSub6);
epicsRegisterFunction(psSub9);
epicsRegisterFunction(psSub10);
epicsRegisterFunction(psSub12);
epicsRegisterFunction(psSub15);
epicsRegisterFunction(psSub18);
epicsRegisterFunction(psSub20);
epicsRegisterFunction(psDiff2);

