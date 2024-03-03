/*
  user_config.h
*/
#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

// -- Setup your own Wifi settings  ---------------
#undef STA_SSID1
#define STA_SSID1 "" // [Ssid1] Wifi SSID
#undef STA_PASS1
#define STA_PASS1 "" // [Password1] Wifi password

// -- Setup your own MQTT settings  ---------------

#undef PROMETHEUS_PATH
#define PROMETHEUS_PATH "/metrics"

#undef WAITFORWIFI
#define WAITFORWIFI 1

#ifdef USE_CONFIG_OVERRIDE
  #include "user_config_override.h" // Configuration overrides for my_user_config.h
#endif

#endif
