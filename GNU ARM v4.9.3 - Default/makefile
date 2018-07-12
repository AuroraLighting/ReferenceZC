################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include zll-utility-client/subdir.mk
-include zll-scenes-client/subdir.mk
-include zll-identify-server/subdir.mk
-include zll-commissioning/subdir.mk
-include update-tc-link-key/subdir.mk
-include test-harness-z3/subdir.mk
-include simple-main/subdir.mk
-include sim-eeprom1/EFR32/subdir.mk
-include serial/EFR32/subdir.mk
-include serial/subdir.mk
-include scenes-client/subdir.mk
-include scan-dispatch/subdir.mk
-include network-steering/subdir.mk
-include interpan/subdir.mk
-include idle-sleep/subdir.mk
-include identify/subdir.mk
-include heartbeat/subdir.mk
-include hal-library/EFR32/subdir.mk
-include form-and-join/subdir.mk
-include find-and-bind-initiator/subdir.mk
-include external-generated-files/subdir.mk
-include emlib/subdir.mk
-include emdrv/subdir.mk
-include ember-minimal-printf/subdir.mk
-include efr32/subdir.mk
-include eeprom/subdir.mk
-include debug-jtag/EFR32/subdir.mk
-include debug-basic-library/EFR32/subdir.mk
-include counters/subdir.mk
-include concentrator/subdir.mk
-include coexistence/EFR32/subdir.mk
-include basic/subdir.mk
-include antenna-stub/subdir.mk
-include adc/EFR32/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: pre-build main-build

# Main-build Target
main-build: ZCReferenceApp.axf

# Tool invocations
ZCReferenceApp.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m4 -mthumb -T "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//platform/base/hal/micro/cortexm3/efm32/gcc-cfg.ld" -L"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//platform/base/hal/micro/cortexm3/" -Xlinker --defsym=FLASH_SIZE=1048576 -Xlinker --defsym=RAM_SIZE=262144 -Xlinker --defsym=SIMEEPROM_SIZE=8192 -Xlinker --defsym=APP_GECKO_INFO_PAGE_BTL=1 -Xlinker --defsym=EMBER_MALLOC_HEAP_SIZE=0 -Xlinker --gc-sections -Xlinker -Map="ZCReferenceApp.map" -mfpu=fpv4-sp-d16 -mfloat-abi=softfp --specs=nano.specs -o ZCReferenceApp.axf -Wl,--start-group "./ZCReferenceApp_callbacks.o" "./af-event.o" "./af-main-common.o" "./af-main-soc.o" "./af-node.o" "./af-security-common.o" "./af-trust-center.o" "./afv2-bookkeeping.o" "./appCli.o" "./attribute-size.o" "./attribute-storage.o" "./attribute-table.o" "./call-command-handler.o" "./callback-stub.o" "./cli.o" "./client-api.o" "./command-interpreter2.o" "./core-cli.o" "./crc.o" "./crypto-state.o" "./ember-base-configuration.o" "./ember-configuration.o" "./endian.o" "./library.o" "./mem-util.o" "./message.o" "./multi-network.o" "./network-cli.o" "./option-cli.o" "./plugin-cli.o" "./print-formatter.o" "./print.o" "./process-cluster-message.o" "./process-global-message.o" "./random.o" "./security-address-cache.o" "./security-cli.o" "./service-discovery-common.o" "./service-discovery-soc.o" "./stack-handler-stub.o" "./time-util.o" "./token-def.o" "./util.o" "./zcl-cli.o" "./zdo-cli.o" "./zigbee-device-common.o" "./zigbee-device-library.o" "./adc/EFR32/adc-efr32.o" "./antenna-stub/antenna-stub.o" "./basic/basic.o" "./coexistence/EFR32/coexistence-802154.o" "./coexistence/EFR32/coexistence-hal.o" "./coexistence/EFR32/coexistence.o" "./concentrator/concentrator-support-cli.o" "./concentrator/concentrator-support.o" "./concentrator/source-route-common.o" "./concentrator/source-route.o" "./counters/counters-cli.o" "./counters/counters-ota.o" "./counters/counters-soc.o" "./debug-basic-library/EFR32/SEGGER_RTT.o" "./debug-jtag/EFR32/debug-jtag-efr32.o" "./eeprom/eeprom-afv2.o" "./eeprom/eeprom-cli.o" "./eeprom/eeprom.o" "./efr32/assert-crash-handlers.o" "./efr32/button.o" "./efr32/buzzer-efr32.o" "./efr32/cstartup-common.o" "./efr32/diagnostic.o" "./efr32/ext-device.o" "./efr32/led.o" "./efr32/mfg-token.o" "./efr32/micro-common.o" "./efr32/micro.o" "./efr32/mpu.o" "./efr32/sleep-efm32.o" "./efr32/token.o" "./ember-minimal-printf/ember-printf.o" "./emdrv/dmadrv.o" "./emdrv/gpiointerrupt.o" "./emdrv/rtcdriver.o" "./emdrv/sleep.o" "./emdrv/tempdrv.o" "./emdrv/uartdrv.o" "./emdrv/ustimer.o" "./emlib/em_adc.o" "./emlib/em_cmu.o" "./emlib/em_core.o" "./emlib/em_cryotimer.o" "./emlib/em_emu.o" "./emlib/em_gpio.o" "./emlib/em_i2c.o" "./emlib/em_ldma.o" "./emlib/em_leuart.o" "./emlib/em_mpu.o" "./emlib/em_msc.o" "./emlib/em_prs.o" "./emlib/em_rmu.o" "./emlib/em_rtcc.o" "./emlib/em_system.o" "./emlib/em_timer.o" "./emlib/em_usart.o" "./emlib/em_wdog.o" "./emlib/system_efr32mg12p.o" "./external-generated-files/bootloader-interface-app.o" "./external-generated-files/bootloader-interface.o" "./external-generated-files/btl_interface.o" "./external-generated-files/btl_interface_storage.o" "./find-and-bind-initiator/find-and-bind-initiator-cli.o" "./find-and-bind-initiator/find-and-bind-initiator.o" "./form-and-join/form-and-join-afv2.o" "./form-and-join/form-and-join-node-adapter.o" "./form-and-join/form-and-join.o" "./hal-library/EFR32/hal-config-gpio.o" "./hal-library/EFR32/hal-config.o" "./heartbeat/heartbeat.o" "./identify/identify-cli.o" "./identify/identify.o" "./idle-sleep/idle-sleep-cli.o" "./idle-sleep/idle-sleep-soc.o" "./idle-sleep/idle-sleep.o" "./interpan/interpan-cli.o" "./interpan/interpan-soc.o" "./interpan/interpan.o" "./network-steering/network-steering-cli.o" "./network-steering/network-steering-soc.o" "./network-steering/network-steering.o" "./scan-dispatch/scan-dispatch.o" "./scenes-client/scenes-client.o" "./serial/EFR32/serial.o" "./serial/com.o" "./sim-eeprom1/EFR32/sim-eeprom.o" "./simple-main/simple-main.o" "./test-harness-z3/test-harness-z3-aps.o" "./test-harness-z3/test-harness-z3-core.o" "./test-harness-z3/test-harness-z3-mac.o" "./test-harness-z3/test-harness-z3-nwk.o" "./test-harness-z3/test-harness-z3-ota-server.o" "./test-harness-z3/test-harness-z3-zcl.o" "./test-harness-z3/test-harness-z3-zdo.o" "./test-harness-z3/test-harness-z3-zll.o" "./update-tc-link-key/update-tc-link-key.o" "./zll-commissioning/zll-commissioning-cli.o" "./zll-commissioning/zll-commissioning-network.o" "./zll-commissioning/zll-commissioning.o" "./zll-identify-server/zll-identify-server.o" "./zll-scenes-client/zll-scenes-client.o" "./zll-utility-client/zll-utility-client.o" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/debug-basic-library-cortexm3-gcc-efr32mg12p-rail/debug-basic-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/debug-extended-stub-library-cortexm3-gcc-efr32mg12p-rail/debug-extended-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/zll-library-cortexm3-gcc-efr32mg12p-rail/zll-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/cbke-library-dsa-verify-283k1-stub-cortexm3-gcc-efr32mg12p-rail/cbke-library-dsa-verify-283k1-stub.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/sim-eeprom1-library-cortexm3-gcc-efr32mg12p-rail/sim-eeprom1-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/zigbee-r22-support-stub-library-cortexm3-gcc-efr32mg12p-rail/zigbee-r22-support-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/binding-table-library-cortexm3-gcc-efr32mg12p-rail/binding-table-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/gp-stub-library-cortexm3-gcc-efr32mg12p-rail/gp-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/hal-library-cortexm3-gcc-efr32mg12p-rail/hal-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/packet-validate-library-cortexm3-gcc-efr32mg12p-rail/packet-validate-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//platform/radio/rail_lib/autogen/librail_release/librail_efr32xg12_gcc_release.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/cbke-283k1-stub-library-cortexm3-gcc-efr32mg12p-rail/cbke-283k1-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/cbke-163k1-stub-library-cortexm3-gcc-efr32mg12p-rail/cbke-163k1-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/cbke-library-dsa-verify-stub-cortexm3-gcc-efr32mg12p-rail/cbke-library-dsa-verify-stub.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/security-library-core-cortexm3-gcc-efr32mg12p-rail/security-library-core.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/install-code-library-cortexm3-gcc-efr32mg12p-rail/install-code-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/multi-network-stub-library-cortexm3-gcc-efr32mg12p-rail/multi-network-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/security-library-link-keys-stub-cortexm3-gcc-efr32mg12p-rail/security-library-link-keys-stub.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/cbke-library-dsa-sign-stub-cortexm3-gcc-efr32mg12p-rail/cbke-library-dsa-sign-stub.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/zigbee-pro-stack-cortexm3-gcc-efr32mg12p-rail/zigbee-pro-stack.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/end-device-bind-stub-library-cortexm3-gcc-efr32mg12p-rail/end-device-bind-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3//protocol/zigbee/build/cbke-stub-library-cortexm3-gcc-efr32mg12p-rail/cbke-stub-library.a" -lm -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: ZCReferenceApp.hex'
	arm-none-eabi-objcopy -O ihex "ZCReferenceApp.axf" "ZCReferenceApp.hex"
	@echo ' '

	@echo 'Building bin file: ZCReferenceApp.bin'
	arm-none-eabi-objcopy -O binary "ZCReferenceApp.axf" "ZCReferenceApp.bin"
	@echo ' '

	@echo 'Building s37 file: ZCReferenceApp.s37'
	arm-none-eabi-objcopy -O srec "ZCReferenceApp.axf" "ZCReferenceApp.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "ZCReferenceApp.axf"
	@echo ' '

	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) ZCReferenceApp.axf
	-@echo ' '

pre-build:
	-cmd //c 'C:\SILICO~1\SIMPLI~1\v4\DEVELO~1\sdks\GECKO_~1\v2.3/app/builder/ZCReferenceApp/ZCReferenceApp-prebuild.bat' 'ZCReferenceApp' 'C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3/app/builder/ZCReferenceApp' '' 'C:\SiliconLabs\SimplicityStudio\v4'
	-@echo ' '

post-build:
	-cmd //c 'C:\SILICO~1\SIMPLI~1\v4\DEVELO~1\sdks\GECKO_~1\v2.3/app/builder/ZCReferenceApp/ZCReferenceApp-postbuild.bat' 'ZCReferenceApp' 'C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.3/app/builder/ZCReferenceApp' '' 'C:\SiliconLabs\SimplicityStudio\v4'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: main-build pre-build post-build

-include ../makefile.targets
