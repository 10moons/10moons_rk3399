//
// Copyright (C) 2014 The Android Open Source Project
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

#ifndef SHILL_MOBILE_OPERATOR_DB_TEST_PROTOS_DATA_TEST_H_
#define SHILL_MOBILE_OPERATOR_DB_TEST_PROTOS_DATA_TEST_H_

#ifndef IN_MOBILE_OPERATOR_INFO_UNITTEST_CC
  #error "Must be included only from mobile_operator_info_unittest.cc."
#endif

// Following is the binary protobuf for the following (text representation)
// protobuf:
// # Test[200] MobileOperatorInfoDataTest.*
// # Test[200] MobileOperatorInfoObserverTest.*
// mno {
//   data {
//     uuid: "uuid200001"
//     country: "us"
//     localized_name {
//       name: "name200001"
//       language: "en"
//     }
//     localized_name {
//       name: "name200002"
//     }
//     requires_roaming: true
//     olp {
//       method: POST
//       url: "some@random.com"
//       post_data: "random_data"
//     }
//     olp {
//       olp_filter {
//         type: MCCMNC
//         regex: "200003"
//       }
//       method: POST
//       url: "olp@mccmnc"
//       post_data: "post_data"
//     }
//     olp {
//       olp_filter {
//         type: SID
//         regex: "200345"
//       }
//       method: POST
//       url: "olp@sid"
//       post_data: "post_data"
//     }
//     mccmnc: "200001"
//     mccmnc: "200002"
//     mccmnc: "200003"  # Used in FilteredOLP
//     mobile_apn {
//       apn: "test@test.com"
//       localized_name {
//         name: "name200003"
//         language: "hi"
//       }
//       username: "testuser"
//       password: "is_public_boohoohoo"
//     }
//     sid: "200123"
//     sid: "200234"
//     sid: "200345"  # Used in FilteredOLP
//     activation_code: "open sesame"
//   }
//   mvno {
//     mvno_filter {
//       type: OPERATOR_NAME
//       regex: "name200101"
//     }
//     data {
//       uuid: "uuid200101"
//       country: "ca"
//       localized_name {
//         name: "name200101"
//         language: "en"
//       }
//       localized_name {
//         name: "name200102"
//       }
//       requires_roaming: false
//       olp {
//         method: GET
//         url: "someother@random.com"
//       }
//       # Keep a common MCCMNC, so that it can be used to search for the MNO.
//       mccmnc: "200001"
//       mccmnc: "200102"
//       mobile_apn {
//         apn: "test2@test.com"
//         username: "testuser2"
//         password: "is_public_boohoohoo_too"
//       }
//       sid: "200345"
//       activation_code: "khul ja sim sim"
//     }
//   }
//   mvno {
//     mvno_filter {
//       type: OPERATOR_NAME
//       regex: "name200201"
//     }
//     data {
//       uuid: "uuid200201"
//       # Inherit all other information from the MNO.
//     }
//   }
// }
//
// The binary data for the protobuf in this file was generated by writing the
// prototxt file data_test.prototxt and then:
//   protoc --proto_path .. --encode "shill.mobile_operator_db.MobileOperatorDB"
//     ../mobile_operator_db.proto < data_test.prototxt
//     > data_test.h.pbf
//   cat data_test.h.pbf | xxd -i

namespace shill {
namespace mobile_operator_db {
static const unsigned char data_test[] {
  0x0a, 0x8f, 0x04, 0x0a, 0xa6, 0x02, 0x0a, 0x0a, 0x75, 0x75, 0x69, 0x64,
  0x32, 0x30, 0x30, 0x30, 0x30, 0x31, 0x1a, 0x02, 0x75, 0x73, 0x22, 0x10,
  0x0a, 0x0a, 0x6e, 0x61, 0x6d, 0x65, 0x32, 0x30, 0x30, 0x30, 0x30, 0x31,
  0x12, 0x02, 0x65, 0x6e, 0x22, 0x0c, 0x0a, 0x0a, 0x6e, 0x61, 0x6d, 0x65,
  0x32, 0x30, 0x30, 0x30, 0x30, 0x32, 0x28, 0x01, 0x32, 0x20, 0x10, 0x02,
  0x1a, 0x0f, 0x73, 0x6f, 0x6d, 0x65, 0x40, 0x72, 0x61, 0x6e, 0x64, 0x6f,
  0x6d, 0x2e, 0x63, 0x6f, 0x6d, 0x22, 0x0b, 0x72, 0x61, 0x6e, 0x64, 0x6f,
  0x6d, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x32, 0x25, 0x0a, 0x0a, 0x08, 0x05,
  0x12, 0x06, 0x32, 0x30, 0x30, 0x30, 0x30, 0x33, 0x10, 0x02, 0x1a, 0x0a,
  0x6f, 0x6c, 0x70, 0x40, 0x6d, 0x63, 0x63, 0x6d, 0x6e, 0x63, 0x22, 0x09,
  0x70, 0x6f, 0x73, 0x74, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x32, 0x22, 0x0a,
  0x0a, 0x08, 0x03, 0x12, 0x06, 0x32, 0x30, 0x30, 0x33, 0x34, 0x35, 0x10,
  0x02, 0x1a, 0x07, 0x6f, 0x6c, 0x70, 0x40, 0x73, 0x69, 0x64, 0x22, 0x09,
  0x70, 0x6f, 0x73, 0x74, 0x5f, 0x64, 0x61, 0x74, 0x61, 0xaa, 0x01, 0x06,
  0x32, 0x30, 0x30, 0x30, 0x30, 0x31, 0xaa, 0x01, 0x06, 0x32, 0x30, 0x30,
  0x30, 0x30, 0x32, 0xaa, 0x01, 0x06, 0x32, 0x30, 0x30, 0x30, 0x30, 0x33,
  0xb2, 0x01, 0x40, 0x0a, 0x0d, 0x74, 0x65, 0x73, 0x74, 0x40, 0x74, 0x65,
  0x73, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x1a, 0x10, 0x0a, 0x0a, 0x6e, 0x61,
  0x6d, 0x65, 0x32, 0x30, 0x30, 0x30, 0x30, 0x33, 0x12, 0x02, 0x68, 0x69,
  0x2a, 0x08, 0x74, 0x65, 0x73, 0x74, 0x75, 0x73, 0x65, 0x72, 0x32, 0x13,
  0x69, 0x73, 0x5f, 0x70, 0x75, 0x62, 0x6c, 0x69, 0x63, 0x5f, 0x62, 0x6f,
  0x6f, 0x68, 0x6f, 0x6f, 0x68, 0x6f, 0x6f, 0xca, 0x02, 0x06, 0x32, 0x30,
  0x30, 0x31, 0x32, 0x33, 0xca, 0x02, 0x06, 0x32, 0x30, 0x30, 0x32, 0x33,
  0x34, 0xca, 0x02, 0x06, 0x32, 0x30, 0x30, 0x33, 0x34, 0x35, 0xda, 0x02,
  0x0b, 0x6f, 0x70, 0x65, 0x6e, 0x20, 0x73, 0x65, 0x73, 0x61, 0x6d, 0x65,
  0x12, 0xc3, 0x01, 0x0a, 0x0e, 0x08, 0x04, 0x12, 0x0a, 0x6e, 0x61, 0x6d,
  0x65, 0x32, 0x30, 0x30, 0x31, 0x30, 0x31, 0x12, 0xb0, 0x01, 0x0a, 0x0a,
  0x75, 0x75, 0x69, 0x64, 0x32, 0x30, 0x30, 0x31, 0x30, 0x31, 0x1a, 0x02,
  0x63, 0x61, 0x22, 0x10, 0x0a, 0x0a, 0x6e, 0x61, 0x6d, 0x65, 0x32, 0x30,
  0x30, 0x31, 0x30, 0x31, 0x12, 0x02, 0x65, 0x6e, 0x22, 0x0c, 0x0a, 0x0a,
  0x6e, 0x61, 0x6d, 0x65, 0x32, 0x30, 0x30, 0x31, 0x30, 0x32, 0x28, 0x00,
  0x32, 0x18, 0x10, 0x01, 0x1a, 0x14, 0x73, 0x6f, 0x6d, 0x65, 0x6f, 0x74,
  0x68, 0x65, 0x72, 0x40, 0x72, 0x61, 0x6e, 0x64, 0x6f, 0x6d, 0x2e, 0x63,
  0x6f, 0x6d, 0xaa, 0x01, 0x06, 0x32, 0x30, 0x30, 0x30, 0x30, 0x31, 0xaa,
  0x01, 0x06, 0x32, 0x30, 0x30, 0x31, 0x30, 0x32, 0xb2, 0x01, 0x34, 0x0a,
  0x0e, 0x74, 0x65, 0x73, 0x74, 0x32, 0x40, 0x74, 0x65, 0x73, 0x74, 0x2e,
  0x63, 0x6f, 0x6d, 0x2a, 0x09, 0x74, 0x65, 0x73, 0x74, 0x75, 0x73, 0x65,
  0x72, 0x32, 0x32, 0x17, 0x69, 0x73, 0x5f, 0x70, 0x75, 0x62, 0x6c, 0x69,
  0x63, 0x5f, 0x62, 0x6f, 0x6f, 0x68, 0x6f, 0x6f, 0x68, 0x6f, 0x6f, 0x5f,
  0x74, 0x6f, 0x6f, 0xca, 0x02, 0x06, 0x32, 0x30, 0x30, 0x33, 0x34, 0x35,
  0xda, 0x02, 0x0f, 0x6b, 0x68, 0x75, 0x6c, 0x20, 0x6a, 0x61, 0x20, 0x73,
  0x69, 0x6d, 0x20, 0x73, 0x69, 0x6d, 0x12, 0x1e, 0x0a, 0x0e, 0x08, 0x04,
  0x12, 0x0a, 0x6e, 0x61, 0x6d, 0x65, 0x32, 0x30, 0x30, 0x32, 0x30, 0x31,
  0x12, 0x0c, 0x0a, 0x0a, 0x75, 0x75, 0x69, 0x64, 0x32, 0x30, 0x30, 0x32,
  0x30, 0x31
};
}  // namespace mobile_operator_db
}  // namespace shill

#endif  // SHILL_MOBILE_OPERATOR_DB_TEST_PROTOS_DATA_TEST_H_
