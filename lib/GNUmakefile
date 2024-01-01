all:
.PHONY: all

.PHONY: clean
clean:

TARGET_ARCH_TYPES := NONE SSE SSE2 SSE3 SSSE3 SSE4_1 SSE4_2 AVX AVX2 AVX512 ARMV7A ARMV8A ARMV8_1A ARMV8_2A ARMV8_3A ARMV8_4A ARMV8_5A ARMV8_6A ARMV9_0A ARMV9_2A
TARGET_ARCHS_TRANSFORMED := $(shell echo $(TARGET_ARCHS) | tr '.' '_' | tr -d -- '-' | tr '[:lower:]' '[:upper:]')

ifneq ($(filter-out $(TARGET_ARCH_TYPES),$(TARGET_ARCHS_TRANSFORMED)),)
$(error Error: invalid TARGET_ARCHS: $(filter-out $(TARGET_ARCH_TYPES),$(TARGET_ARCHS_TRANSFORMED)))
endif

ifeq ($(if $(and $(filter-out all,$(MAKECMDGOALS)),$(filter all,$(MAKECMDGOALS))),1,),1)
$(error Error: 'all' cannot be combined with other targets)
endif

all: pre_all
.PHONY: pre_all
pre_all:
ifeq ($(TARGET_ARCHS_TRANSFORMED),)
	TARGET_ARCHS="$(TARGET_ARCH_TYPES)" $(MAKE) all -k
endif
	@:

all: $(addsuffix /libft_matrix.a,$(addprefix release/,$(TARGET_ARCHS_TRANSFORMED)))

clean: clean_all
.PHONY: clean_all
clean_all:
ifeq ($(TARGET_ARCHS_TRANSFORMED),)
	rm -rf $(addprefix release/,$(TARGET_ARCH_TYPES))
else
	rm -rf $(addprefix release/,$(TARGET_ARCHS_TRANSFORMED))
endif

SRCS := test.c

$(addprefix release/,$(TARGET_ARCHS_TRANSFORMED)):
	mkdir -p $@

release/%/libft_matrix.a: $(addprefix tmp/%/,$(SRCS:.c=.o)) | release/%
	rm -f $@
	ar cr $@ $^


CFLAGS := -Wall -Wextra -Werror -std=c11 -pedantic -O2
CPPFLAGS := -Iinclude
define COMPILE_TEMPLATE_PER_TARGET_ARCH
tmp/$1/%.o: src/%.c | tmp/$1
	$(CC) $(CFLAGS) $(CPPFLAGS) -DFT_MATRIX_TARGET_$1 -c -o $$@ $$<
endef
$(foreach TARGET_ARCH,$(TARGET_ARCHS_TRANSFORMED),$(eval $(call COMPILE_TEMPLATE_PER_TARGET_ARCH,$(TARGET_ARCH))))
$(addprefix tmp/,$(TARGET_ARCHS_TRANSFORMED)):
	mkdir -p $@
