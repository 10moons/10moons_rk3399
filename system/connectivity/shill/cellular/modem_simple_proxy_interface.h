//
// Copyright (C) 2012 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef SHILL_CELLULAR_MODEM_SIMPLE_PROXY_INTERFACE_H_
#define SHILL_CELLULAR_MODEM_SIMPLE_PROXY_INTERFACE_H_

#include "shill/callbacks.h"

namespace shill {

class Error;

// These are the methods that a ModemManager.Modem.Simple proxy must
// support. The interface is provided so that it can be mocked in tests.
// All calls are made asynchronously.
class ModemSimpleProxyInterface {
 public:
  virtual ~ModemSimpleProxyInterface() {}

  virtual void GetModemStatus(Error* error,
                              const KeyValueStoreCallback& callback,
                              int timeout) = 0;
  virtual void Connect(const KeyValueStore& properties,
                       Error* error, const ResultCallback& callback,
                       int timeout) = 0;
};

}  // namespace shill

#endif  // SHILL_CELLULAR_MODEM_SIMPLE_PROXY_INTERFACE_H_
