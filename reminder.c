
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// REMINDER CLI
// reminder add "stand up" --interval 20
// reminder add "stand up" --interval=20
// reminder list
// reminder delete
// reminder --help
// --------------------------------------
// reminder interactive shell

typedef struct {
	int interval; // interval in minutes to keep reminding the reminder
	int priority; // priority of the reminder
	int status;		// status of the reminder [todo, in-progress, done]
} flags_t;

typedef struct {
	char *command; // add, list, delete, mark
	char *title;	 // reminder title
	flags_t *flags;
} cmd_config_t;

#define HELP "This is help string"

void render_help() { printf("%s", HELP); }

void process_flags(__attribute__((unused)) cmd_config_t *config, char **args,
									 int args_count) {
	// Go through each element in the array string and retrieve flag values
	for (int i = 0; i < args_count; i++) {
		if (args[i]) {
			// see if it starts with "--" if not leave it
			printf("-> %s\n", args[i]);
		}
	}
}

void process_args(cmd_config_t *config, char **args, int args_count) {
	/* for (int i = 0; i < args_count; i++) */
	/* 	if (args[i]) */
	/* 		printf("-> %s\n", args[i]); */
	process_flags(config, ++args, --args_count);
}

int main(int argc, char **argv) {
	cmd_config_t config = {0};
	process_args(&config, ++argv, --argc);

	return 0;
}
