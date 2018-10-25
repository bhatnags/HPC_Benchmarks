/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_IALLTOALLV = PMPI_IALLTOALLV
#pragma weak mpi_ialltoallv__ = PMPI_IALLTOALLV
#pragma weak mpi_ialltoallv_ = PMPI_IALLTOALLV
#pragma weak mpi_ialltoallv = PMPI_IALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_IALLTOALLV = pmpi_ialltoallv__
#pragma weak mpi_ialltoallv__ = pmpi_ialltoallv__
#pragma weak mpi_ialltoallv_ = pmpi_ialltoallv__
#pragma weak mpi_ialltoallv = pmpi_ialltoallv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_IALLTOALLV = pmpi_ialltoallv_
#pragma weak mpi_ialltoallv__ = pmpi_ialltoallv_
#pragma weak mpi_ialltoallv_ = pmpi_ialltoallv_
#pragma weak mpi_ialltoallv = pmpi_ialltoallv_
#else
#pragma weak MPI_IALLTOALLV = pmpi_ialltoallv
#pragma weak mpi_ialltoallv__ = pmpi_ialltoallv
#pragma weak mpi_ialltoallv_ = pmpi_ialltoallv
#pragma weak mpi_ialltoallv = pmpi_ialltoallv
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_IALLTOALLV = PMPI_IALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ialltoallv__ = pmpi_ialltoallv__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ialltoallv = pmpi_ialltoallv
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ialltoallv_ = pmpi_ialltoallv_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_IALLTOALLV  MPI_IALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ialltoallv__  mpi_ialltoallv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ialltoallv  mpi_ialltoallv
#else
#pragma _HP_SECONDARY_DEF pmpi_ialltoallv_  mpi_ialltoallv_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_IALLTOALLV as PMPI_IALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_ialltoallv__ as pmpi_ialltoallv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_ialltoallv as pmpi_ialltoallv
#else
#pragma _CRI duplicate mpi_ialltoallv_ as pmpi_ialltoallv_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_ialltoallv__ = MPI_IALLTOALLV
#pragma weak mpi_ialltoallv_ = MPI_IALLTOALLV
#pragma weak mpi_ialltoallv = MPI_IALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_IALLTOALLV = mpi_ialltoallv__
#pragma weak mpi_ialltoallv_ = mpi_ialltoallv__
#pragma weak mpi_ialltoallv = mpi_ialltoallv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_IALLTOALLV = mpi_ialltoallv_
#pragma weak mpi_ialltoallv__ = mpi_ialltoallv_
#pragma weak mpi_ialltoallv = mpi_ialltoallv_
#else
#pragma weak MPI_IALLTOALLV = mpi_ialltoallv
#pragma weak mpi_ialltoallv__ = mpi_ialltoallv
#pragma weak mpi_ialltoallv_ = mpi_ialltoallv
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IALLTOALLV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IALLTOALLV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IALLTOALLV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_ialltoallv__ = PMPI_IALLTOALLV
#pragma weak pmpi_ialltoallv_ = PMPI_IALLTOALLV
#pragma weak pmpi_ialltoallv = PMPI_IALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_IALLTOALLV = pmpi_ialltoallv__
#pragma weak pmpi_ialltoallv_ = pmpi_ialltoallv__
#pragma weak pmpi_ialltoallv = pmpi_ialltoallv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_IALLTOALLV = pmpi_ialltoallv_
#pragma weak pmpi_ialltoallv__ = pmpi_ialltoallv_
#pragma weak pmpi_ialltoallv = pmpi_ialltoallv_
#else
#pragma weak PMPI_IALLTOALLV = pmpi_ialltoallv
#pragma weak pmpi_ialltoallv__ = pmpi_ialltoallv
#pragma weak pmpi_ialltoallv_ = pmpi_ialltoallv
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_IALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallv")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_ialltoallv_ PMPI_IALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ialltoallv_ pmpi_ialltoallv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ialltoallv_ pmpi_ialltoallv
#else
#define mpi_ialltoallv_ pmpi_ialltoallv_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Ialltoallv
#define MPI_Ialltoallv PMPI_Ialltoallv 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_ialltoallv_ MPI_IALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ialltoallv_ mpi_ialltoallv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ialltoallv_ mpi_ialltoallv
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_ialltoallv_ ( void*v1, MPI_Fint v2[], MPI_Fint v3[], MPI_Fint *v4, void*v5, MPI_Fint v6[], MPI_Fint v7[], MPI_Fint *v8, MPI_Fint *v9, MPI_Fint *v10, MPI_Fint *ierr ){

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif
    if (v1 == MPIR_F_MPI_IN_PLACE) v1 = MPI_IN_PLACE;
    *ierr = MPI_Ialltoallv( v1, v2, v3, (MPI_Datatype)(*v4), v5, v6, v7, (MPI_Datatype)(*v8), (MPI_Comm)(*v9), (MPI_Request *)(v10) );
}