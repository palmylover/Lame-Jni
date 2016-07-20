LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := lame_pcm2mp3

LOCAL_SRC_FILES := bitstream.c \
  encoder.c  \
  fft.c \
  gain_analysis.c \
  id3tag.c \
  lame.c  \
  mpglib_interface.c \
  newmdct.c   \
  presets.c  \
  psymodel.c \
  quantize.c   \
  quantize_pvt.c \
  reservoir.c \
  set_get.c  \
  tables.c  \
  takehiro.c \
  util.c  \
  vbrquantize.c \
  VbrTag.c \
  version.c \
  com_winbaoxian_wybx_lamejni_SimpleLame.c

LOCAL_LDLIBS += -llog

include $(BUILD_SHARED_LIBRARY)