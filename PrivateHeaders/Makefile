ARCH ?= ARM64

define class_dump
	@ipsw class-dump $(1) --arch $(ARCH) --headers
endef

define class_dump_rule_template
.PHONY: $(1)
$(1):
	@$(call class_dump, $(2)/$(1).framework/Versions/Current/$(1))
endef

# /Library/Developer/PrivateFrameworks/
# /Applications/Xcode.app/Contents/Developer/Library/PrivateFrameworks/
# /Applications/Xcode.app/Contents/SharedFrameworks

.PHONY: CoreDevice
CoreDevice:
	@$(call class_dump, /Library/Developer/PrivateFrameworks/CoreDevice.framework/Versions/Current/CoreDevice)

.PHONY: CoreDeviceAction
CoreDeviceAction:
	@$(call class_dump, /Library/Developer/PrivateFrameworks/CoreDeviceAction.framework/Versions/Current/CoreDeviceAction)

.PHONY: CoreSimulator
CoreSimulator:
	@$(call class_dump, /Library/Developer/PrivateFrameworks/CoreSimulator.framework/Versions/Current/CoreSimulator)
