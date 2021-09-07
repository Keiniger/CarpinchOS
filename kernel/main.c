#include "include/main.h"

int main() {
	int a=3, b=14;
	t_log* logger;

	logger = log_create("kernel.log", "kernel", true, LOG_LEVEL_INFO);

	log_info(logger, "Soy un log de kerneeel :O");

	printf("%d\n", sumar(a,b));
	printf("3+%d = %d\n", b, sumar_tres(b));

	print_hola("Aurora");
	print_chau("Peter");
	print_chau("Peter");

	return 0;
}
