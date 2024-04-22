ARCH          ?= ARM64

framework_dirs = /Applications/Xcode.app/Contents/Developer/Library/PrivateFrameworks/ \
	/Applications/Xcode.app/Contents/SharedFrameworks \
	/Library/Developer/PrivateFrameworks
frameworks     = $(foreach dir, $(framework_dirs), $(shell find $(dir) -name "*.framework" -maxdepth 1))
targets        = $(foreach framework, $(frameworks), $(basename $(notdir $(1))))

# ex. $(call class_dump,/Library/Developer/PrivateFrameworks/CoreDevice.framework)
define class_dump
	@ipsw class-dump "$(2)/Versions/Current/$(basename $(notdir $(1)))" --arch $(ARCH) --headers
endef

# ex. $(call framework_dump_rule,CoreDevice,/Library/Developer/PrivateFrameworks/CoreDevice.framework)
define framework_dump_rule
$(1):
	@$(call class_dump,$(1),$(2))
endef

.PHONY: clean
clean:
	@rm -R -- */

.PHONY: $(targets)

$(foreach framework, $(frameworks), $(eval $(call framework_dump_rule,$(basename $(notdir $(framework))),$(framework))))

# .PHONY: CoreDevice
# CoreDevice:
# 	@$(call class_dump, /Library/Developer/PrivateFrameworks/CoreDevice.framework)

# .PHONY: CoreDeviceAction
# CoreDeviceAction:
# 	@$(call class_dump, /Library/Developer/PrivateFrameworks/CoreDeviceAction.framework)

# .PHONY: CoreSimulator
# CoreSimulator:
# 	@$(call class_dump, /Library/Developer/PrivateFrameworks/CoreSimulator.framework)
