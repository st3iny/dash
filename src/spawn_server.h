#include <spawn.h>

extern int spawn_server_init(void**);
extern int spawn_server_start(void**);
extern int spawn_server_request_spawn(
	void*,
	char*,
	posix_spawn_file_actions_t,
	posix_spawnattr_t,
	char**,
	char**,
	int,
	int,
	pid_t*
);
extern int spawn_server_destroy(void*);
