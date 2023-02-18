#include "lib/my_basic.c"

int main() {
	struct mb_interpreter_t* bas = NULL;

	mb_init();
	mb_open(&bas);
	mb_load_string(bas, "print 22 / 7;", true);
	mb_run(bas, true);
	mb_close(&bas);
	mb_dispose();

	return 0;
}
