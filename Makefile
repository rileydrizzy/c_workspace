.DEFAULT_GOAL := help

help:
	@echo "    setup                Set up the environment with the required dependencies and environment variables"
	@echo "    freeze_reqs          Save the dependencies onto the requirements text file"

	
save:
	@echo "Saving and Pushing to Github"
	. ./auto_save.sh