ROOT = $(abspath $(shell dirname "${MAKEFILE_LIST}"))

# CMake build artifacts.
BUILD_DIR = ${ROOT}/build
DEBUG_DIR = ${BUILD_DIR}/debug

debug:
	mkdir -p ${BUILD_DIR} \
	&& cd ${BUILD_DIR} \
	&& cmake ${ROOT} \
		-DCMAKE_BUILD_TYPE=Debug \
		-DCMAKE_RUNTIME_OUTPUT_DIRECTORY=${DEBUG_DIR} \
		-GNinja \
	&& ninja

distclean:
	rm -fr ${BUILD_DIR}

.PHONY: \
	debug \
	distclean
