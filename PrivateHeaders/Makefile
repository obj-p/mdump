ARCH ?= ARM64

define class_dump
	@FRAMEWORK="$(1)/Versions/Current/$(basename $(notdir $(1)))"; \
		ipsw class-dump $${FRAMEWORK} --arch $(ARCH) --headers
endef

# /Applications/Xcode.app/Contents/Developer/Library/PrivateFrameworks/
# /Applications/Xcode.app/Contents/SharedFrameworks
.PHONY: clean
clean:
	@rm -R -- */

.PHONY: CoreDevice
CoreDevice:
	@$(call class_dump, /Library/Developer/PrivateFrameworks/CoreDevice.framework)

.PHONY: CoreDeviceAction
CoreDeviceAction:
	@$(call class_dump, /Library/Developer/PrivateFrameworks/CoreDeviceAction.framework)

.PHONY: CoreSimulator
CoreSimulator:
	@$(call class_dump, /Library/Developer/PrivateFrameworks/CoreSimulator.framework)
