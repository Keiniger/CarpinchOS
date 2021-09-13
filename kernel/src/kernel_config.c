#include "../include/kernel_config.h"

char* KERNEL_CONFIG_PATH = "kernel.config";

t_config *kernel_config_create()
{
    t_config *kernel_config = config_create(KERNEL_CONFIG_PATH);

    config_save(kernel_config);

    return kernel_config;
}
