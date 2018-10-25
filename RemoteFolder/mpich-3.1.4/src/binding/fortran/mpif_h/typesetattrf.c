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
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_TYPE_SET_ATTR = PMPI_TYPE_SET_ATTR
#pragma weak mpi_type_set_attr__ = PMPI_TYPE_SET_ATTR
#pragma weak mpi_type_set_attr_ = PMPI_TYPE_SET_ATTR
#pragma weak mpi_type_set_attr = PMPI_TYPE_SET_ATTR
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_SET_ATTR = pmpi_type_set_attr__
#pragma weak mpi_type_set_attr__ = pmpi_type_set_attr__
#pragma weak mpi_type_set_attr_ = pmpi_type_set_attr__
#pragma weak mpi_type_set_attr = pmpi_type_set_attr__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_SET_ATTR = pmpi_type_set_attr_
#pragma weak mpi_type_set_attr__ = pmpi_type_set_attr_
#pragma weak mpi_type_set_attr_ = pmpi_type_set_attr_
#pragma weak mpi_type_set_attr = pmpi_type_set_attr_
#else
#pragma weak MPI_TYPE_SET_ATTR = pmpi_type_set_attr
#pragma weak mpi_type_set_attr__ = pmpi_type_set_attr
#pragma weak mpi_type_set_attr_ = pmpi_type_set_attr
#pragma weak mpi_type_set_attr = pmpi_type_set_attr
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#pragma weak MPI_TYPE_SET_ATTR = PMPI_TYPE_SET_ATTR
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#pragma weak mpi_type_set_attr__ = pmpi_type_set_attr__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#pragma weak mpi_type_set_attr = pmpi_type_set_attr
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#pragma weak mpi_type_set_attr_ = pmpi_type_set_attr_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_TYPE_SET_ATTR  MPI_TYPE_SET_ATTR
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_set_attr__  mpi_type_set_attr__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_set_attr  mpi_type_set_attr
#else
#pragma _HP_SECONDARY_DEF pmpi_type_set_attr_  mpi_type_set_attr_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_TYPE_SET_ATTR as PMPI_TYPE_SET_ATTR
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_type_set_attr__ as pmpi_type_set_attr__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_type_set_attr as pmpi_type_set_attr
#else
#pragma _CRI duplicate mpi_type_set_attr_ as pmpi_type_set_attr_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_SET_ATTR")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_SET_ATTR")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_SET_ATTR")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_SET_ATTR")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_type_set_attr__ = MPI_TYPE_SET_ATTR
#pragma weak mpi_type_set_attr_ = MPI_TYPE_SET_ATTR
#pragma weak mpi_type_set_attr = MPI_TYPE_SET_ATTR
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_SET_ATTR = mpi_type_set_attr__
#pragma weak mpi_type_set_attr_ = mpi_type_set_attr__
#pragma weak mpi_type_set_attr = mpi_type_set_attr__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_SET_ATTR = mpi_type_set_attr_
#pragma weak mpi_type_set_attr__ = mpi_type_set_attr_
#pragma weak mpi_type_set_attr = mpi_type_set_attr_
#else
#pragma weak MPI_TYPE_SET_ATTR = mpi_type_set_attr
#pragma weak mpi_type_set_attr__ = mpi_type_set_attr
#pragma weak mpi_type_set_attr_ = mpi_type_set_attr
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_SET_ATTR")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_SET_ATTR")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_SET_ATTR")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_type_set_attr__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_type_set_attr__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_type_set_attr__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_type_set_attr_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_type_set_attr_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_type_set_attr_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_type_set_attr")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_type_set_attr")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_type_set_attr")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_type_set_attr__ = PMPI_TYPE_SET_ATTR
#pragma weak pmpi_type_set_attr_ = PMPI_TYPE_SET_ATTR
#pragma weak pmpi_type_set_attr = PMPI_TYPE_SET_ATTR
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_TYPE_SET_ATTR = pmpi_type_set_attr__
#pragma weak pmpi_type_set_attr_ = pmpi_type_set_attr__
#pragma weak pmpi_type_set_attr = pmpi_type_set_attr__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_TYPE_SET_ATTR = pmpi_type_set_attr_
#pragma weak pmpi_type_set_attr__ = pmpi_type_set_attr_
#pragma weak pmpi_type_set_attr = pmpi_type_set_attr_
#else
#pragma weak PMPI_TYPE_SET_ATTR = pmpi_type_set_attr
#pragma weak pmpi_type_set_attr__ = pmpi_type_set_attr
#pragma weak pmpi_type_set_attr_ = pmpi_type_set_attr
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_SET_ATTR")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_SET_ATTR")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_SET_ATTR")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_SET_ATTR( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_set_attr_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_set_attr")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_type_set_attr_ PMPI_TYPE_SET_ATTR
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_set_attr_ pmpi_type_set_attr__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_set_attr_ pmpi_type_set_attr
#else
#define mpi_type_set_attr_ pmpi_type_set_attr_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Type_set_attr
#define MPI_Type_set_attr PMPI_Type_set_attr 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_type_set_attr_ MPI_TYPE_SET_ATTR
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_set_attr_ mpi_type_set_attr__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_set_attr_ mpi_type_set_attr
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_type_set_attr_ ( MPI_Fint *v1, MPI_Fint *v2, void*v3, MPI_Fint *ierr ){
   *ierr = MPIR_TypeSetAttr( (MPI_Datatype)(*v1), (int)*v2, (void *)(*(MPI_Aint *)v3), MPIR_ATTR_AINT );
}
