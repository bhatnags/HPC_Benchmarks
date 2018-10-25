#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_18 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     SLURMDB_CLASS_BASE SLURMDB_PURGE_BASE SLURMDB_PURGE_DAYS */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case 'B':
    if (memEQ(name, "SLURMDB_CLASS_BASE", 18)) {
    /*                             ^          */
#ifdef SLURMDB_CLASS_BASE
      *iv_return = SLURMDB_CLASS_BASE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "SLURMDB_PURGE_BASE", 18)) {
    /*                             ^          */
#ifdef SLURMDB_PURGE_BASE
      *iv_return = SLURMDB_PURGE_BASE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "SLURMDB_PURGE_DAYS", 18)) {
    /*                             ^          */
#ifdef SLURMDB_PURGE_DAYS
      *iv_return = SLURMDB_PURGE_DAYS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/usr/bin/perl -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(SLURMDB_CLASSIFIED_FLAG SLURMDB_CLASS_BASE
	       SLURMDB_PURGE_ARCHIVE SLURMDB_PURGE_BASE SLURMDB_PURGE_DAYS
	       SLURMDB_PURGE_FLAGS SLURMDB_PURGE_HOURS SLURMDB_PURGE_MONTHS));

print constant_types(), "\n"; # macro defs
foreach (C_constant ("Slurmdb", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("Slurmdb", $types);
__END__
   */

  switch (len) {
  case 18:
    return constant_18 (aTHX_ name, iv_return);
    break;
  case 19:
    /* Names all of length 19.  */
    /* SLURMDB_PURGE_FLAGS SLURMDB_PURGE_HOURS */
    /* Offset 14 gives the best switch position.  */
    switch (name[14]) {
    case 'F':
      if (memEQ(name, "SLURMDB_PURGE_FLAGS", 19)) {
      /*                             ^           */
#ifdef SLURMDB_PURGE_FLAGS
        *iv_return = SLURMDB_PURGE_FLAGS;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'H':
      if (memEQ(name, "SLURMDB_PURGE_HOURS", 19)) {
      /*                             ^           */
#ifdef SLURMDB_PURGE_HOURS
        *iv_return = SLURMDB_PURGE_HOURS;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 20:
    if (memEQ(name, "SLURMDB_PURGE_MONTHS", 20)) {
#ifdef SLURMDB_PURGE_MONTHS
      *iv_return = SLURMDB_PURGE_MONTHS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 21:
    if (memEQ(name, "SLURMDB_PURGE_ARCHIVE", 21)) {
#ifdef SLURMDB_PURGE_ARCHIVE
      *iv_return = SLURMDB_PURGE_ARCHIVE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 23:
    if (memEQ(name, "SLURMDB_CLASSIFIED_FLAG", 23)) {
#ifdef SLURMDB_CLASSIFIED_FLAG
      *iv_return = SLURMDB_CLASSIFIED_FLAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

