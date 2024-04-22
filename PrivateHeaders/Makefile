ARCH           ?= arm64

framework_dirs := /Applications/Xcode.app/Contents/Developer/Library/PrivateFrameworks/ \
	/Applications/Xcode.app/Contents/SharedFrameworks \
	/Library/Developer/PrivateFrameworks
frameworks     := $(foreach dir,$(framework_dirs),$(shell find $(dir) -name "*.framework" -maxdepth 1))
targets        := $(foreach framework,$(frameworks),$(basename $(notdir $(framework))))

# ex. $(call class_dump,/Library/Developer/PrivateFrameworks/CoreDevice.framework)
define class_dump
	@ipsw class-dump "$(2)/Versions/Current/$(basename $(notdir $(1)))" --arch $(ARCH) --headers || true
endef

# ex. $(call framework_dump_rule,CoreDevice,/Library/Developer/PrivateFrameworks/CoreDevice.framework)
define framework_dump_rule
$(1):
	@$(call class_dump,$(1),$(2))
endef

all: $(targets)

.PHONY: clean
clean:
	@rm -R -- */

.PHONY: list-targets
list-targets:
	@printf '%s\n' $(targets) | sort -n

$(foreach framework, $(frameworks), $(eval $(call framework_dump_rule,$(basename $(notdir $(framework))),$(framework))))
