GO_LIBRARY()

LICENSE(BSD-3-Clause)

SRCS(
    rate.go
    sometimes.go
)

GO_TEST_SRCS(rate_test.go)

GO_XTEST_SRCS(sometimes_test.go)

END()

RECURSE(gotest)
