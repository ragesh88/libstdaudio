// libstdaudio
// Copyright (c) 2018 - Timur Doumler

#include "device_list.h"

LIBSTDAUDIO_NAMESPACE_BEGIN

device get_input_device() {
  return {};
}

device get_output_device() {
  return {};
}

device_list& get_input_device_list() {
  static device_list in_devices{device_list::_underlying_container{}};
  return in_devices;
}

device_list& get_output_device_list() {
  static device_list out_devices{device_list::_underlying_container{}};
  return out_devices;
}

LIBSTDAUDIO_NAMESPACE_END
