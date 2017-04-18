project(arpack_util C)

set(source

cmout.c
cvout.c
dmout.c
dvout.c
icnteq.c
icopy.c
iset.c
iswap.c
ivout.c
second.c
smout.c
svout.c
zmout.c
zvout.c
)

add_library(arpack_util ${source})
