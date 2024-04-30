.PHONY: all
all: clean
	@$(MAKE) xcodeproj

.PHONY: clean
clean:
	@rm -rf mdump.xcodeproj

## Contributing

.PHONY: brew
brew:
	@brew bundle --no-lock

.PHONY: pre-commit-install
pre-commit-install:
	@pre-commit install

## Development

.PHONY: xcodeproj
xcodeproj:
	@xcodegen
