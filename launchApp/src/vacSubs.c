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

static long vacSub11(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[11];
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
    memcpy(vaptr, temp,11*sizeof(float));
    return 0;
}
static long vacSub12(aSubRecord *pasub)
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
    memcpy(vaptr,temp,12*sizeof(float));
    return 0;
}
static long vacSub13(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[13];
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
    memcpy(vaptr,temp,13*sizeof(float));
    return 0;
}
static long vacSub14(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[14];
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
    memcpy(vaptr,temp,14*sizeof(float));
    return 0;
}
static long vacSub15(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[15];
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
    memcpy(vaptr,temp,15*sizeof(float));
    return 0;
}
static long vacSub16(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[16];
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
    memcpy(vaptr,temp,16*sizeof(float));
    return 0;
}
static long vacSub18(aSubRecord *pasub)
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
static long vacSub19(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float temp[19];
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
    memcpy(vaptr,temp,19*sizeof(float));
    return 0;
}
static long vacSub2(aSubRecord *pasub)
{
    float *vaptr;
    vaptr = (float *)pasub->vala;

    float *temp[2];
    temp[0] = (float *)pasub->a;
    temp[1] = (float *)pasub->b;

    int length[2];
    length[0] = (long *)pasub->noa;
    length[1] = (long *)pasub->nob;

    int i;
    for(i=0;i<2;i++) {
        memcpy(vaptr, temp[i],length[i]*sizeof(float));
        vaptr += length[i];
    }
    return 0;
}
static long vacSubAll(aSubRecord *pasub)
{
    float  *vaptr;
    vaptr = (float *)pasub->vala;
    float *temp[16];
    //taking in superperiod waveforms, each L=52.79m
    //exception is C01 and C30 which are read in individually
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
    temp[15] = (float *)pasub->p;

    int length[16];
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
    length[15] = (long *)pasub->nop;


    int i;
    for(i=0;i<16;i++) {
        memcpy(vaptr, temp[i],length[i]*sizeof(float));
        vaptr += length[i];
    }

    return 0;
}

epicsRegisterFunction(vacSub11);
epicsRegisterFunction(vacSub12);
epicsRegisterFunction(vacSub13);
epicsRegisterFunction(vacSub14);
epicsRegisterFunction(vacSub15);
epicsRegisterFunction(vacSub16);
epicsRegisterFunction(vacSub18);
epicsRegisterFunction(vacSub19);
epicsRegisterFunction(vacSub2);
epicsRegisterFunction(vacSubAll);

