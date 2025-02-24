# Generated by devtools/yamaker (pypi).

PY3_LIBRARY()

PROVIDES(ujson)

VERSION(5.9.0)

LICENSE(BSD-3-Clause)

PEERDIR(
    contrib/libs/double-conversion
)

ADDINCL(
    contrib/libs/double-conversion/double-conversion
    contrib/python/ujson/lib
    contrib/python/ujson/python
)

NO_COMPILER_WARNINGS()

NO_LINT()

NO_UTIL()

SRCS(
    lib/dconv_wrapper.cc
    lib/ultrajsondec.c
    lib/ultrajsonenc.c
    python/JSONtoObj.c
    python/objToJSON.c
    python/ujson.c
)

PY_REGISTER(
    ujson
)

PY_SRCS(
    TOP_LEVEL
    ujson.pyi
)

RESOURCE_FILES(
    PREFIX contrib/python/ujson/
    .dist-info/METADATA
    .dist-info/top_level.txt
)

END()
