
include $(THEOS)/makefiles/common.mk

TWEAK_NAME = GeniusHelper
GeniusHelper_FILES = Tweak.xmi $(wildcard ./SVProgressHUD/*.m)
GeniusHelper_LIBRARIES = objcipc

$(TWEAK_NAME)_CFLAGS += -D THEOSBUILD=1 -D HBLogError=NSLog -w
$(TWEAK_NAME)_CFLAGS += -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/Application\ Support/GeniusHelper/$(ECHO_END)
	$(ECHO_NOTHING)cp -r ./SVProgressHUD/SVProgressHUD.bundle $(THEOS_STAGING_DIR)/Library/Application\ Support/GeniusHelper/$(ECHO_END)

after-install::
	install.exec "killall -9 SpringBoard"
