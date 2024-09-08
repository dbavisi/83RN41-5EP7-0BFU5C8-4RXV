#!/usr/bin/env bash

SRC=S1HAY2-ED23-58EG9YK-DLK7
NATIVE=TJRALQ_F231_ZVDUD6L_44BZ
OUT=tmp

GCC=gcc
C_FLAGS="-Wall -Wextra -Werror -std=c99 -pedantic -O3 -g"

mkdir -p $OUT

for MODULE in $(ls $SRC); do
  for VERSION in $(ls $SRC/$MODULE); do
    O_FLAGS="-c -fPIC -o $OUT/lib${MODULE}_${VERSION}.o"
    $GCC $C_FLAGS $O_FLAGS $SRC/$MODULE/$VERSION/*.c
  done
done

for MODULE in $(ls $SRC); do
  for VERSION in $(ls $SRC/$MODULE); do
    MODULE_=$(echo $MODULE | tr - _)
    VERSION_=$(echo $VERSION | tr - _)
    SONAME="lib${MODULE_}_${VERSION_}pyBindings"
    SO_FLAGS="-shared -Wl,-soname,$SONAME -o $SONAME.so -fPIC -o $OUT/$SONAME.so"
    $GCC $C_FLAGS $SO_FLAGS $OUT/lib*.o
  done
done
