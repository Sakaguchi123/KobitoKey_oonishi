#include <zephyr/toolchain.h>
#include <zephyr/sys/util.h>

#include <zmk/endpoints.h>

#if IS_ENABLED(CONFIG_ZMK_POINTING)
__weak int zmk_endpoint_send_mouse_report(void) {
    return zmk_endpoints_send_mouse_report();
}
#endif
