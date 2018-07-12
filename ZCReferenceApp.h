// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef SILABS_APP_ZCREFERENCEAPP_H
#define SILABS_APP_ZCREFERENCEAPP_H


/**** Included Header Section ****/

/**** ZCL Section ****/
#define ZA_PROMPT "ZCReferenceApp"
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define ZCL_USING_IDENTIFY_CLUSTER_CLIENT
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER
#define ZCL_USING_SCENES_CLUSTER_CLIENT
#define ZCL_USING_ON_OFF_CLUSTER_CLIENT
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_CLIENT
#define ZCL_USING_COLOR_CONTROL_CLUSTER_CLIENT
#define ZCL_USING_ZLL_COMMISSIONING_CLUSTER_CLIENT
#define ZCL_USING_ZLL_COMMISSIONING_CLUSTER_SERVER
/**** Optional Attributes ****/
#define ZCL_USING_BASIC_CLUSTER_APPLICATION_VERSION_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_STACK_VERSION_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_HW_VERSION_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_MANUFACTURER_NAME_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_MODEL_IDENTIFIER_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_DATE_CODE_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_GENERIC_DEVICE_CLASS_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_GENERIC_DEVICE_TYPE_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_PRODUCT_CODE_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_PRODUCT_URL_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_SW_BUILD_ID_ATTRIBUTE 
#define EMBER_AF_MANUFACTURER_CODE 0x121C
#define EMBER_AF_DEFAULT_RESPONSE_POLICY_ALWAYS

/**** Cluster endpoint counts ****/
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_IDENTIFY_CLUSTER_CLIENT_ENDPOINT_COUNT (2)
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_SCENES_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_ON_OFF_CLUSTER_CLIENT_ENDPOINT_COUNT (2)
#define EMBER_AF_LEVEL_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (2)
#define EMBER_AF_COLOR_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_ZLL_COMMISSIONING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_ZLL_COMMISSIONING_CLUSTER_SERVER_ENDPOINT_COUNT (1)

/**** CLI Section ****/
#define EMBER_AF_GENERATE_CLI
#define EMBER_AF_ENABLE_CUSTOM_COMMANDS

/**** Security Section ****/
#define EMBER_AF_HAS_SECURITY_PROFILE_HA

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)
#define EMBER_AF_NETWORK_INDEX_PRIMARY (0)
#define EMBER_AF_DEFAULT_NETWORK_INDEX EMBER_AF_NETWORK_INDEX_PRIMARY
#define EMBER_AF_HAS_COORDINATOR_NETWORK
#define EMBER_AF_HAS_ROUTER_NETWORK
#define EMBER_AF_HAS_RX_ON_WHEN_IDLE_NETWORK
#define EMBER_AF_TX_POWER_MODE EMBER_TX_POWER_MODE_USE_TOKEN

/**** HAL Section ****/
#define ZA_CLI_FULL

/**** Callback Section ****/
#define EMBER_CALLBACK_HAL_BUTTON_ISR
#define EMBER_CALLBACK_STACK_STATUS
#define EMBER_CALLBACK_BASIC_CLUSTER_RESET_TO_FACTORY_DEFAULTS
#define EMBER_CALLBACK_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_APPLICATION_HAS_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_CALLBACK_EZSP_INCOMING_ROUTE_ERROR_HANDLER
#define EZSP_APPLICATION_HAS_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_CALLBACK_GET_SOURCE_ROUTE_OVERHEAD
#define EMBER_CALLBACK_SET_SOURCE_ROUTE_OVERHEAD
#define EMBER_CALLBACK_COUNTER_HANDLER
#define EMBER_APPLICATION_HAS_COUNTER_HANDLER
#define EMBER_CALLBACK_EZSP_COUNTER_ROLLOVER_HANDLER
#define EZSP_APPLICATION_HAS_COUNTER_ROLLOVER_HANDLER
#define EMBER_CALLBACK_EEPROM_INIT
#define EMBER_CALLBACK_EEPROM_NOTE_INITIALIZED_STATE
#define EMBER_CALLBACK_EEPROM_SHUTDOWN
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY_RESPONSE
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY
#define EMBER_CALLBACK_GET_CURRENT_SLEEP_CONTROL
#define EMBER_CALLBACK_GET_DEFAULT_SLEEP_CONTROL
#define EMBER_CALLBACK_SET_DEFAULT_SLEEP_CONTROL
#define EMBER_CALLBACK_MAC_FILTER_MATCH_MESSAGE
#define EMBER_APPLICATION_HAS_MAC_FILTER_MATCH_MESSAGE_HANDLER
#define EMBER_CALLBACK_EZSP_MAC_FILTER_MATCH_MESSAGE
#define EZSP_APPLICATION_HAS_MAC_FILTER_MATCH_HANDLER
#define EMBER_CALLBACK_INTERPAN_SEND_MESSAGE
#define EMBER_CALLBACK_ENERGY_SCAN_RESULT
#define EMBER_CALLBACK_SCAN_COMPLETE
#define EMBER_CALLBACK_NETWORK_FOUND
#define EMBER_CALLBACK_SCENES_CLUSTER_ADD_SCENE_RESPONSE
#define EMBER_CALLBACK_SCENES_CLUSTER_VIEW_SCENE_RESPONSE
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_SCENE_RESPONSE
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_ALL_SCENES_RESPONSE
#define EMBER_CALLBACK_SCENES_CLUSTER_STORE_SCENE_RESPONSE
#define EMBER_CALLBACK_SCENES_CLUSTER_GET_SCENE_MEMBERSHIP_RESPONSE
#define EMBER_CALLBACK_START_SEARCH_FOR_JOINABLE_NETWORK
#define EMBER_CALLBACK_FIND_UNUSED_PAN_ID_AND_FORM
#define EMBER_CALLBACK_UNUSED_PAN_ID_FOUND
#define EMBER_CALLBACK_SCAN_ERROR
#define EMBER_CALLBACK_GET_FORM_AND_JOIN_EXTENDED_PAN_ID
#define EMBER_CALLBACK_SET_FORM_AND_JOIN_EXTENDED_PAN_ID
#define EMBER_CALLBACK_ZLL_ADDRESS_ASSIGNMENT_HANDLER
#define EMBER_APPLICATION_HAS_ZLL_ADDRESS_ASSIGNMENT_HANDLER
#define EMBER_CALLBACK_ZLL_NETWORK_FOUND_HANDLER
#define EMBER_APPLICATION_HAS_ZLL_NETWORK_FOUND_HANDLER
#define EMBER_CALLBACK_ZLL_SCAN_COMPLETE_HANDLER
#define EMBER_APPLICATION_HAS_ZLL_SCAN_COMPLETE_HANDLER
#define EMBER_CALLBACK_ZLL_TOUCH_LINK_TARGET_HANDLER
#define EMBER_APPLICATION_HAS_ZLL_TOUCH_LINK_TARGET_HANDLER
#define EMBER_CALLBACK_EZSP_ZLL_ADDRESS_ASSIGNMENT_HANDLER
#define EZSP_APPLICATION_HAS_ZLL_ADDRESS_ASSIGNMENT_HANDLER
#define EMBER_CALLBACK_EZSP_ZLL_NETWORK_FOUND_HANDLER
#define EZSP_APPLICATION_HAS_ZLL_NETWORK_FOUND_HANDLER
#define EMBER_CALLBACK_EZSP_ZLL_SCAN_COMPLETE_HANDLER
#define EZSP_APPLICATION_HAS_ZLL_SCAN_COMPLETE_HANDLER
#define EMBER_CALLBACK_EZSP_ZLL_TOUCH_LINK_TARGET_HANDLER
#define EZSP_APPLICATION_HAS_ZLL_TOUCH_LINK_TARGET_HANDLER
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_TRIGGER_EFFECT
#define EMBER_CALLBACK_SCENES_CLUSTER_ENHANCED_ADD_SCENE_RESPONSE
#define EMBER_CALLBACK_SCENES_CLUSTER_ENHANCED_VIEW_SCENE_RESPONSE
#define EMBER_CALLBACK_SCENES_CLUSTER_COPY_SCENE_RESPONSE
#define EMBER_CALLBACK_ZLL_COMMISSIONING_CLUSTER_ENDPOINT_INFORMATION
#define EMBER_CALLBACK_ZLL_COMMISSIONING_CLUSTER_GET_GROUP_IDENTIFIERS_RESPONSE
#define EMBER_CALLBACK_ZLL_COMMISSIONING_CLUSTER_GET_ENDPOINT_LIST_RESPONSE
/**** Debug printing section ****/

// Global switch
#define EMBER_AF_PRINT_ENABLE
// Individual areas
#define EMBER_AF_PRINT_CORE 0x0001
#define EMBER_AF_PRINT_DEBUG 0x0002
#define EMBER_AF_PRINT_APP 0x0004
#define EMBER_AF_PRINT_ATTRIBUTES 0x0008
#define EMBER_AF_PRINT_ZDO 0x0010
#define EMBER_AF_PRINT_BASIC_CLUSTER 0x0020
#define EMBER_AF_PRINT_LEVEL_CONTROL_CLUSTER 0x0040
#define EMBER_AF_PRINT_BITS { 0x1F }
#define EMBER_AF_PRINT_NAMES { \
  "Core",\
  "Debug",\
  "Application",\
  "Attributes",\
  "ZDO (ZigBee Device Object)",\
  "Basic",\
  "Level Control",\
  NULL\
}
#define EMBER_AF_PRINT_NAME_NUMBER 7


#define EMBER_AF_SUPPORT_COMMAND_DISCOVERY


// Generated plugin macros

// Use this macro to check if ADC plugin is included
#define EMBER_AF_PLUGIN_ADC

// Use this macro to check if Antenna Stub plugin is included
#define EMBER_AF_PLUGIN_ANTENNA_STUB

// Use this macro to check if Basic Server Cluster plugin is included
#define EMBER_AF_PLUGIN_BASIC

// Use this macro to check if Binding Table Library plugin is included
#define EMBER_AF_PLUGIN_BINDING_TABLE_LIBRARY
// User options for plugin Binding Table Library
#define EMBER_BINDING_TABLE_SIZE 10

// Use this macro to check if Radio Coexistence plugin is included
#define EMBER_AF_PLUGIN_COEXISTENCE

// Use this macro to check if Concentrator Support plugin is included
#define EMBER_AF_PLUGIN_CONCENTRATOR
#define EMBER_APPLICATION_HAS_SOURCE_ROUTING
#define EZSP_APPLICATION_HAS_ROUTE_RECORD_HANDLER
// User options for plugin Concentrator Support
#define EMBER_AF_PLUGIN_CONCENTRATOR_CONCENTRATOR_TYPE LOW_RAM_CONCENTRATOR
#define EMBER_SOURCE_ROUTE_TABLE_SIZE 7
#define EZSP_HOST_SOURCE_ROUTE_TABLE_SIZE 32
#define EMBER_AF_PLUGIN_CONCENTRATOR_MIN_TIME_BETWEEN_BROADCASTS_SECONDS 10
#define EMBER_AF_PLUGIN_CONCENTRATOR_MAX_TIME_BETWEEN_BROADCASTS_SECONDS 60
#define EMBER_AF_PLUGIN_CONCENTRATOR_ROUTE_ERROR_THRESHOLD 3
#define EMBER_AF_PLUGIN_CONCENTRATOR_DELIVERY_FAILURE_THRESHOLD 1
#define EMBER_AF_PLUGIN_CONCENTRATOR_MAX_HOPS 0
#define EMBER_AF_PLUGIN_CONCENTRATOR_NCP_SUPPORT
#define EMBER_AF_PLUGIN_CONCENTRATOR_DEFAULT_ROUTER_BEHAVIOR FULL

// Use this macro to check if Counters plugin is included
#define EMBER_AF_PLUGIN_COUNTERS
// User options for plugin Counters

// Use this macro to check if Debug Basic Library plugin is included
#define EMBER_AF_PLUGIN_DEBUG_BASIC_LIBRARY

// Use this macro to check if Debug JTAG plugin is included
#define EMBER_AF_PLUGIN_DEBUG_JTAG

// Use this macro to check if EEPROM plugin is included
#define EMBER_AF_PLUGIN_EEPROM
// User options for plugin EEPROM
#define EMBER_AF_PLUGIN_EEPROM_PARTIAL_WORD_STORAGE_COUNT 2

// Use this macro to check if Ember Minimal Printf plugin is included
#define EMBER_AF_PLUGIN_EMBER_MINIMAL_PRINTF

// Use this macro to check if Find and Bind Initiator plugin is included
#define EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR
// User options for plugin Find and Bind Initiator
#define EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_TARGET_RESPONSES_COUNT 5
#define EMBER_AF_PLUGIN_FIND_AND_BIND_INITIATOR_TARGET_RESPONSES_DELAY_MS MILLISECOND_TICKS_PER_SECOND*3

// Use this macro to check if Form and Join Library plugin is included
#define EMBER_AF_PLUGIN_FORM_AND_JOIN

// Use this macro to check if HAL Library plugin is included
#define EMBER_AF_PLUGIN_HAL_LIBRARY

// Use this macro to check if Heartbeat plugin is included
#define EMBER_AF_PLUGIN_HEARTBEAT
// User options for plugin Heartbeat
#define EMBER_AF_PLUGIN_HEARTBEAT_PERIOD_QS 1

// Use this macro to check if Identify Cluster plugin is included
#define EMBER_AF_PLUGIN_IDENTIFY

// Use this macro to check if Idle/Sleep plugin is included
#define EMBER_AF_PLUGIN_IDLE_SLEEP
// User options for plugin Idle/Sleep
#define EMBER_AF_PLUGIN_IDLE_SLEEP_MINIMUM_SLEEP_DURATION_MS 5
#define EMBER_AF_PLUGIN_IDLE_SLEEP_BACKOFF_SLEEP_MS 0

// Use this macro to check if Install Code Library plugin is included
#define EMBER_AF_PLUGIN_INSTALL_CODE_LIBRARY

// Use this macro to check if Interpan plugin is included
#define EMBER_AF_PLUGIN_INTERPAN
// User options for plugin Interpan
#define EMBER_AF_PLUGIN_INTERPAN_ALLOW_REQUIRED_SMART_ENERGY_MESSAGES
#define EMBER_AF_PLUGIN_INTERPAN_DELIVER_TO PRIMARY_ENDPOINT
#define EMBER_AF_PLUGIN_INTERPAN_DELIVER_TO_SPECIFIED_ENDPOINT_VALUE 1

// Use this macro to check if Network Steering plugin is included
#define EMBER_AF_PLUGIN_NETWORK_STEERING
// User options for plugin Network Steering
#define EMBER_AF_PLUGIN_NETWORK_STEERING_CHANNEL_MASK 0x0318C800
#define EMBER_AF_PLUGIN_NETWORK_STEERING_RADIO_TX_POWER 3
#define EMBER_AF_PLUGIN_NETWORK_STEERING_SCAN_DURATION 5
#define EMBER_AF_PLUGIN_NETWORK_STEERING_COMMISSIONING_TIME_S 180

// Use this macro to check if Packet Validate Library plugin is included
#define EMBER_AF_PLUGIN_PACKET_VALIDATE_LIBRARY

// Use this macro to check if RAIL Library plugin is included
#define EMBER_AF_PLUGIN_RAIL_LIBRARY
// User options for plugin RAIL Library
#define EMBER_AF_PLUGIN_RAIL_LIBRARY_RAILPHYDEF 1

// Use this macro to check if Scan Dispatch plugin is included
#define EMBER_AF_PLUGIN_SCAN_DISPATCH
// User options for plugin Scan Dispatch
#define EMBER_AF_PLUGIN_SCAN_DISPATCH_SCAN_QUEUE_SIZE 10

// Use this macro to check if Scenes Client Cluster plugin is included
#define EMBER_AF_PLUGIN_SCENES_CLIENT

// Use this macro to check if Security Core Library plugin is included
#define EMBER_AF_PLUGIN_SECURITY_LIBRARY_CORE
// User options for plugin Security Core Library
#define EMBER_TRANSIENT_KEY_TIMEOUT_S 300

// Use this macro to check if Serial plugin is included
#define EMBER_AF_PLUGIN_SERIAL

// Use this macro to check if Simulated EEPROM version 1 Library plugin is included
#define EMBER_AF_PLUGIN_SIM_EEPROM1
// User options for plugin Simulated EEPROM version 1 Library

// Use this macro to check if Simple Main plugin is included
#define EMBER_AF_PLUGIN_SIMPLE_MAIN

// Use this macro to check if Update TC Link Key plugin is included
#define EMBER_AF_PLUGIN_UPDATE_TC_LINK_KEY

// Use this macro to check if ZigBee PRO Stack Library plugin is included
#define EMBER_AF_PLUGIN_ZIGBEE_PRO_LIBRARY
// User options for plugin ZigBee PRO Stack Library
#define EMBER_MAX_END_DEVICE_CHILDREN 6
#define EMBER_PACKET_BUFFER_COUNT 75
#define EMBER_END_DEVICE_POLL_TIMEOUT 5
#define EMBER_END_DEVICE_POLL_TIMEOUT_SHIFT 6
#define EMBER_LINK_POWER_DELTA_INTERVAL 300
#define EMBER_APS_UNICAST_MESSAGE_COUNT 10
#define EMBER_BROADCAST_TABLE_SIZE 15
#define EMBER_NEIGHBOR_TABLE_SIZE 16

// Use this macro to check if ZLL Commissioning plugin is included
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING
#define EMBER_AF_DISABLE_FORM_AND_JOIN_TICK
// User options for plugin ZLL Commissioning
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_LINK_INITIATOR
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_TOUCH_LINK_SECONDS_DELAY 1
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_RX_ON_AT_STARTUP_PERIOD 300
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_DEFAULT_RADIO_CHANNEL 11
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_SUB_DEVICE_TABLE_SIZE 1
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_SCAN_POWER_LEVEL 0
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_RADIO_TX_POWER 3
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_EXTENDED_PAN_ID { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_PRIMARY_CHANNEL_MASK 0x02108800
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_SCAN_SECONDARY_CHANNELS
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_SECONDARY_CHANNEL_MASK 0x05EF7000
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_JOINABLE_SCAN_TIMEOUT_MINUTES 1
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_IDENTIFY_DURATION 65535
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_STEALING_ALLOWED

// Use this macro to check if ZLL Identify Server plugin is included
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER
// User options for plugin ZLL Identify Server
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER_EVENT_DELAY 1024
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER_BLINK_EVENTS 2
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER_BREATHE_EVENTS 4
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER_OKAY_EVENTS 6
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER_CHANNEL_CHANGE_EVENTS 8

// Use this macro to check if ZigBee Light Link Library plugin is included
#define EMBER_AF_PLUGIN_ZLL_LIBRARY
// User options for plugin ZigBee Light Link Library
#define EMBER_ZLL_GROUP_ADDRESSES 0
#define EMBER_ZLL_RSSI_THRESHOLD -128
#define EMBER_ZLL_ALWAYS_WRITE_CHANNEL_TO_SCAN_RESPONSE

// Use this macro to check if ZLL Scenes Client Cluster Enhancements plugin is included
#define EMBER_AF_PLUGIN_ZLL_SCENES_CLIENT

// Use this macro to check if ZLL Utility Client Cluster plugin is included
#define EMBER_AF_PLUGIN_ZLL_UTILITY_CLIENT


// Generated API headers

// API adc-cortexm3 from ADC plugin
#define EMBER_AF_API_ADC_CORTEXM3 "platform/base/hal/plugin/adc/adc-cortexm3.h"

// API adc from ADC plugin
#define EMBER_AF_API_ADC "platform/base/hal/plugin/adc/adc.h"

// API antenna from Antenna Stub plugin
#define EMBER_AF_API_ANTENNA "platform/base/hal/plugin/antenna/antenna.h"

// API coexistence from Radio Coexistence plugin
#define EMBER_AF_API_COEXISTENCE "platform/radio/rail_lib/plugin/coexistence/protocol/ieee802154/coexistence-802154.h"

// API eeprom from EEPROM plugin
#define EMBER_AF_API_EEPROM "util/plugin/plugin-common/eeprom/eeprom.h"

// API find-and-bind-initiator from Find and Bind Initiator plugin
#define EMBER_AF_API_FIND_AND_BIND_INITIATOR "protocol/zigbee/app/framework/plugin/find-and-bind-initiator/find-and-bind-initiator.h"

// API network-steering from Network Steering plugin
#define EMBER_AF_API_NETWORK_STEERING "protocol/zigbee/app/framework/plugin/network-steering/network-steering.h"

// API rail-library from RAIL Library plugin
#define EMBER_AF_API_RAIL_LIBRARY "platform/radio/rail_lib/common/rail.h"

// API scan-dispatch from Scan Dispatch plugin
#define EMBER_AF_API_SCAN_DISPATCH "protocol/zigbee/app/framework/plugin/scan-dispatch/scan-dispatch.h"

// API serial from Serial plugin
#define EMBER_AF_API_SERIAL "platform/base/hal/plugin/serial/serial.h"

// API update-tc-link-key from Update TC Link Key plugin
#define EMBER_AF_API_UPDATE_TC_LINK_KEY "protocol/zigbee/app/framework/plugin/update-tc-link-key/update-tc-link-key.h"

// API zll-profile from ZLL Commissioning plugin
#define EMBER_AF_API_ZLL_PROFILE "protocol/zigbee/app/framework/plugin/zll-commissioning/zll-commissioning.h"


// Custom macros
#ifdef COMMISSIONING_STATUS_LED
#undef COMMISSIONING_STATUS_LED
#endif
#define COMMISSIONING_STATUS_LED BOARDLED2

#ifdef LED_BLINK_PERIOD_MS
#undef LED_BLINK_PERIOD_MS
#endif
#define LED_BLINK_PERIOD_MS 2000

#ifdef TRANSITION_TIME_DS
#undef TRANSITION_TIME_DS
#endif
#define TRANSITION_TIME_DS 20

#ifdef FINDING_AND_BINDING_DELAY_MS
#undef FINDING_AND_BINDING_DELAY_MS
#endif
#define FINDING_AND_BINDING_DELAY_MS 3000



#endif // SILABS_APP_ZCREFERENCEAPP_H
