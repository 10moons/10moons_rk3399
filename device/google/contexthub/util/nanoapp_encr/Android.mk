#
# Copyright (C) 2016 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)


LOCAL_SRC_FILES := \
    ../../lib/nanohub/aes.c \
    ../../lib/nanohub/sha2.c \
    ../../lib/nanohub/nanoapp.c \
    nanoapp_encr.c \


LOCAL_CFLAGS := \
        -Wall \
        -Werror \
        -Wextra \
        -DHOST_BUILD \
        -DBOOTLOADER= \
        -DBOOTLOADER_RO= \


LOCAL_C_INCLUDES := \
        device/google/contexthub/lib/include \

LOCAL_MODULE := nanoapp_encr

LOCAL_MODULE_TAGS := optional

include $(BUILD_HOST_EXECUTABLE)
