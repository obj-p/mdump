ARCH           ?= arm64

framework_dirs := /Applications/Xcode.app/Contents/Developer/Library/PrivateFrameworks/ \
	/Applications/Xcode.app/Contents/SharedFrameworks \
	/Library/Developer/PrivateFrameworks
frameworks     := $(foreach dir,$(framework_dirs),$(shell find $(dir) -name "*.framework" -maxdepth 1))
targets        := $(foreach framework,$(frameworks),$(basename $(notdir $(framework))))

# ex. $(call class_dump_framework,/Library/Developer/PrivateFrameworks/CoreDevice.framework/Versions/Current/CoreDevice)
define class_dump_framework
	@ipsw class-dump "$(1)" --arch $(ARCH) --headers || true
endef

# ex. $(call swift_dump_framework,/Library/Developer/PrivateFrameworks/CoreDevice.framework/Versions/Current/CoreDevice)
define swift_dump_framework
	@ipsw swift-dump "$(1)" --arch $(ARCH) > "$(2).swift" || true
endef

# ex. $(call dump_rule,CoreDevice,/Library/Developer/PrivateFrameworks/CoreDevice.framework)
define dump_rule
$(1):
	@$(call class_dump_framework,$(2)/Versions/Current/$(1))
	@$(call swift_dump_framework,$(2)/Versions/Current/$(1),$(1))
endef

all: clean
	@$(MAKE) $(targets)

.PHONY: clean
clean:
	@rm -R -- */

.PHONY: list-frameworks
list-frameworks:
	@printf '%s\n' $(frameworks) | sort -n

.PHONY: list-targets
list-targets:
	@printf '%s\n' $(targets) | sort -n

$(foreach framework, $(frameworks), $(eval $(call dump_rule,$(basename $(notdir $(framework))),$(framework))))
