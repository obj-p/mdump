ARCH ?= ARM64

define class_dump
	@ipsw class-dump $(1) --arch $(ARCH) --headers
endef

.PHONY: CoreDevice
CoreDevice:
	@$(call class_dump,/Library/Developer/PrivateFrameworks/CoreDevice.framework/Versions/Current/CoreDevice)

.PHONY: CoreSimulator
CoreSimulator:
	@$(call class_dump,/Library/Developer/PrivateFrameworks/CoreSimulator.framework/Versions/Current/CoreSimulator)
