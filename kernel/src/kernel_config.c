#include "../include/kernel_config.h"

t_config *kernel_config_create()
{
    t_config *kernel_config = config_create(KERNEL_CONFIG_PATH);

    config_save(kernel_config);

    return kernel_config;
}
