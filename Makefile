build:
	@echo "Building..."
	@gcc -o remapper remapper.c
	@echo "Done"

run: build
	@./remapper

clean:
	@echo "Cleaning..."
	@rm -f remapper
	@echo "Done"
