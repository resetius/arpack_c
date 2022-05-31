project(arpack_src C)

set(source
cgetv0.c
cnaitr.c
cnapps.c
cnaup2.c
cnaupd.c
cneigh.c
cneupd.c
cngets.c
csortc.c
cstatn.c
dgetv0.c
dlaqrb.c
dnaitr.c
dnapps.c
dnaup2.c
dnaupd.c
#dnaupe.c
dnconv.c
dneigh.c
dneupd.c
dngets.c
dsaitr.c
dsapps.c
dsaup2.c
dsaupd.c
dsconv.c
dseigt.c
dsesrt.c
dseupd.c
dsgets.c
dsortc.c
dsortr.c
dstatn.c
dstats.c
dstqrb.c
sgetv0.c
slaqrb.c
snaitr.c
snapps.c
snaup2.c
snaupd.c
#snaupe.c
snconv.c
sneigh.c
sneupd.c
sngets.c
ssaitr.c
ssapps.c
ssaup2.c
ssaupd.c
ssconv.c
sseigt.c
ssesrt.c
sseupd.c
ssgets.c
ssortc.c
ssortr.c
sstatn.c
sstats.c
sstqrb.c
zgetv0.c
znaitr.c
znapps.c
znaup2.c
znaupd.c
zneigh.c
zneupd.c
zngets.c
zsortc.c
zstatn.c
)

add_library(arpack SHARED ${source} arpack.def)
set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin")

target_link_directories(arpack PRIVATE ${BLAS_LIBRARY_DIRS})
target_link_libraries(arpack PRIVATE arpack_util f2cembedded ${BLAS_LIBRARIES})
