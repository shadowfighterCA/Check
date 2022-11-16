#ifndef _MY_CONFIG_H
#define _MY_CONFIG_H

#define EXAMPLE_ESP_MAXIMUM_RETRY  5
#define WIFI_LIST_NUM   10

int s_retry_num =0;

static wifi_config_t sta_config;
static wifi_config_t ap_config;


uint8_t var[] = "Wrong Password";
/* FreeRTOS event group to signal when we are connected & ready to make a request */
static EventGroupHandle_t wifi_event_group;

/* The event group allows multiple bits for each event,
   but we only care about one event - are we connected
   to the AP with an IP? */
const int CONNECTED_BIT = BIT0;

static bool gl_sta_connected = false;
static bool ble_is_connected = false;
static uint8_t gl_sta_bssid[6];
static uint8_t gl_sta_ssid[32];
static int gl_sta_ssid_len;
static wifi_sta_list_t gl_sta_list;

#endif