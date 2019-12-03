/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "mcrouter/lib/carbon/gen-cpp2/carbon_types.h"
#include "mcrouter/lib/carbon/gen-cpp2/carbon_result_types.h"

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace facebook { namespace memcache { namespace thrift {
class McVersionRequest;
class McVersionReply;
class McStatsRequest;
class McStatsReply;
class McShutdownRequest;
class McShutdownReply;
class McQuitRequest;
class McQuitReply;
class McExecRequest;
class McExecReply;
class GoAwayAcknowledgement;
class GoAwayRequest;
}}} // facebook::memcache::thrift
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace facebook { namespace memcache { namespace thrift {
class McVersionRequest final : private apache::thrift::detail::st::ComparisonOperators<McVersionRequest> {
 public:

  McVersionRequest() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  McVersionRequest(apache::thrift::FragileConstructor,  ::carbon::thrift::IOBufKey key__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    key = arg.extract();
    __isset.key = true;
  }

  McVersionRequest(McVersionRequest&&) = default;

  McVersionRequest(const McVersionRequest&) = default;

  McVersionRequest& operator=(McVersionRequest&&) = default;

  McVersionRequest& operator=(const McVersionRequest&) = default;
  void __clear();
   ::carbon::thrift::IOBufKey key;

  struct __isset {
    bool key;
  } __isset = {};
  bool operator==(const McVersionRequest& rhs) const;
  bool operator<(const McVersionRequest& rhs) const;

  const  ::carbon::thrift::IOBufKey& get_key() const& {
    return key;
  }

   ::carbon::thrift::IOBufKey get_key() && {
    return std::move(key);
  }

  template <typename T_McVersionRequest_key_struct_setter =  ::carbon::thrift::IOBufKey>
   ::carbon::thrift::IOBufKey& set_key(T_McVersionRequest_key_struct_setter&& key_) {
    key = std::forward<T_McVersionRequest_key_struct_setter>(key_);
    __isset.key = true;
    return key;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< McVersionRequest >;
};

void swap(McVersionRequest& a, McVersionRequest& b);

template <class Protocol_>
uint32_t McVersionRequest::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class McVersionReply final : private apache::thrift::detail::st::ComparisonOperators<McVersionReply> {
 public:

  McVersionReply() :
      result( ::carbon::Result::UNKNOWN),
      appSpecificErrorCode(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  McVersionReply(apache::thrift::FragileConstructor,  ::carbon::Result result__arg, folly::IOBuf value__arg, ::std::string message__arg, int16_t appSpecificErrorCode__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    result = arg.extract();
    __isset.result = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    value = arg.extract();
    __isset.value = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    message = arg.extract();
    __isset.message = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<4, _T> arg) {
    appSpecificErrorCode = arg.extract();
    __isset.appSpecificErrorCode = true;
  }

  McVersionReply(McVersionReply&&) = default;

  McVersionReply(const McVersionReply&) = default;

  McVersionReply& operator=(McVersionReply&&) = default;

  McVersionReply& operator=(const McVersionReply&) = default;
  void __clear();
   ::carbon::Result result;
  folly::IOBuf value;
  ::std::string message;
  int16_t appSpecificErrorCode;

  struct __isset {
    bool result;
    bool value;
    bool message;
    bool appSpecificErrorCode;
  } __isset = {};
  bool operator==(const McVersionReply& rhs) const;
  bool operator<(const McVersionReply& rhs) const;

   ::carbon::Result get_result() const {
    return result;
  }

   ::carbon::Result& set_result( ::carbon::Result result_) {
    result = result_;
    __isset.result = true;
    return result;
  }

  const folly::IOBuf& get_value() const& {
    return value;
  }

  folly::IOBuf get_value() && {
    return std::move(value);
  }

  template <typename T_McVersionReply_value_struct_setter = folly::IOBuf>
  folly::IOBuf& set_value(T_McVersionReply_value_struct_setter&& value_) {
    value = std::forward<T_McVersionReply_value_struct_setter>(value_);
    __isset.value = true;
    return value;
  }

  const ::std::string& get_message() const& {
    return message;
  }

  ::std::string get_message() && {
    return std::move(message);
  }

  template <typename T_McVersionReply_message_struct_setter = ::std::string>
  ::std::string& set_message(T_McVersionReply_message_struct_setter&& message_) {
    message = std::forward<T_McVersionReply_message_struct_setter>(message_);
    __isset.message = true;
    return message;
  }

  int16_t get_appSpecificErrorCode() const {
    return appSpecificErrorCode;
  }

  int16_t& set_appSpecificErrorCode(int16_t appSpecificErrorCode_) {
    appSpecificErrorCode = appSpecificErrorCode_;
    __isset.appSpecificErrorCode = true;
    return appSpecificErrorCode;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< McVersionReply >;
};

void swap(McVersionReply& a, McVersionReply& b);

template <class Protocol_>
uint32_t McVersionReply::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class McStatsRequest final : private apache::thrift::detail::st::ComparisonOperators<McStatsRequest> {
 public:

  McStatsRequest() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  McStatsRequest(apache::thrift::FragileConstructor,  ::carbon::thrift::IOBufKey key__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    key = arg.extract();
    __isset.key = true;
  }

  McStatsRequest(McStatsRequest&&) = default;

  McStatsRequest(const McStatsRequest&) = default;

  McStatsRequest& operator=(McStatsRequest&&) = default;

  McStatsRequest& operator=(const McStatsRequest&) = default;
  void __clear();
   ::carbon::thrift::IOBufKey key;

  struct __isset {
    bool key;
  } __isset = {};
  bool operator==(const McStatsRequest& rhs) const;
  bool operator<(const McStatsRequest& rhs) const;

  const  ::carbon::thrift::IOBufKey& get_key() const& {
    return key;
  }

   ::carbon::thrift::IOBufKey get_key() && {
    return std::move(key);
  }

  template <typename T_McStatsRequest_key_struct_setter =  ::carbon::thrift::IOBufKey>
   ::carbon::thrift::IOBufKey& set_key(T_McStatsRequest_key_struct_setter&& key_) {
    key = std::forward<T_McStatsRequest_key_struct_setter>(key_);
    __isset.key = true;
    return key;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< McStatsRequest >;
};

void swap(McStatsRequest& a, McStatsRequest& b);

template <class Protocol_>
uint32_t McStatsRequest::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class McStatsReply final : private apache::thrift::detail::st::ComparisonOperators<McStatsReply> {
 public:

  McStatsReply() :
      result( ::carbon::Result::UNKNOWN),
      appSpecificErrorCode(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  McStatsReply(apache::thrift::FragileConstructor,  ::carbon::Result result__arg, ::std::string message__arg, ::std::vector<::std::string> stats__arg, int16_t appSpecificErrorCode__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    result = arg.extract();
    __isset.result = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    message = arg.extract();
    __isset.message = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    stats = arg.extract();
    __isset.stats = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<4, _T> arg) {
    appSpecificErrorCode = arg.extract();
    __isset.appSpecificErrorCode = true;
  }

  McStatsReply(McStatsReply&&) = default;

  McStatsReply(const McStatsReply&) = default;

  McStatsReply& operator=(McStatsReply&&) = default;

  McStatsReply& operator=(const McStatsReply&) = default;
  void __clear();
   ::carbon::Result result;
  ::std::string message;
  ::std::vector<::std::string> stats;
  int16_t appSpecificErrorCode;

  struct __isset {
    bool result;
    bool message;
    bool stats;
    bool appSpecificErrorCode;
  } __isset = {};
  bool operator==(const McStatsReply& rhs) const;
  bool operator<(const McStatsReply& rhs) const;

   ::carbon::Result get_result() const {
    return result;
  }

   ::carbon::Result& set_result( ::carbon::Result result_) {
    result = result_;
    __isset.result = true;
    return result;
  }

  const ::std::string& get_message() const& {
    return message;
  }

  ::std::string get_message() && {
    return std::move(message);
  }

  template <typename T_McStatsReply_message_struct_setter = ::std::string>
  ::std::string& set_message(T_McStatsReply_message_struct_setter&& message_) {
    message = std::forward<T_McStatsReply_message_struct_setter>(message_);
    __isset.message = true;
    return message;
  }
  const ::std::vector<::std::string>& get_stats() const&;
  ::std::vector<::std::string> get_stats() &&;

  template <typename T_McStatsReply_stats_struct_setter = ::std::vector<::std::string>>
  ::std::vector<::std::string>& set_stats(T_McStatsReply_stats_struct_setter&& stats_) {
    stats = std::forward<T_McStatsReply_stats_struct_setter>(stats_);
    __isset.stats = true;
    return stats;
  }

  int16_t get_appSpecificErrorCode() const {
    return appSpecificErrorCode;
  }

  int16_t& set_appSpecificErrorCode(int16_t appSpecificErrorCode_) {
    appSpecificErrorCode = appSpecificErrorCode_;
    __isset.appSpecificErrorCode = true;
    return appSpecificErrorCode;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< McStatsReply >;
};

void swap(McStatsReply& a, McStatsReply& b);

template <class Protocol_>
uint32_t McStatsReply::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class McShutdownRequest final : private apache::thrift::detail::st::ComparisonOperators<McShutdownRequest> {
 public:

  McShutdownRequest() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  McShutdownRequest(apache::thrift::FragileConstructor,  ::carbon::thrift::IOBufKey key__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    key = arg.extract();
    __isset.key = true;
  }

  McShutdownRequest(McShutdownRequest&&) = default;

  McShutdownRequest(const McShutdownRequest&) = default;

  McShutdownRequest& operator=(McShutdownRequest&&) = default;

  McShutdownRequest& operator=(const McShutdownRequest&) = default;
  void __clear();
   ::carbon::thrift::IOBufKey key;

  struct __isset {
    bool key;
  } __isset = {};
  bool operator==(const McShutdownRequest& rhs) const;
  bool operator<(const McShutdownRequest& rhs) const;

  const  ::carbon::thrift::IOBufKey& get_key() const& {
    return key;
  }

   ::carbon::thrift::IOBufKey get_key() && {
    return std::move(key);
  }

  template <typename T_McShutdownRequest_key_struct_setter =  ::carbon::thrift::IOBufKey>
   ::carbon::thrift::IOBufKey& set_key(T_McShutdownRequest_key_struct_setter&& key_) {
    key = std::forward<T_McShutdownRequest_key_struct_setter>(key_);
    __isset.key = true;
    return key;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< McShutdownRequest >;
};

void swap(McShutdownRequest& a, McShutdownRequest& b);

template <class Protocol_>
uint32_t McShutdownRequest::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class McShutdownReply final : private apache::thrift::detail::st::ComparisonOperators<McShutdownReply> {
 public:

  McShutdownReply() :
      result( ::carbon::Result::UNKNOWN),
      appSpecificErrorCode(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  McShutdownReply(apache::thrift::FragileConstructor,  ::carbon::Result result__arg, ::std::string message__arg, int16_t appSpecificErrorCode__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    result = arg.extract();
    __isset.result = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    message = arg.extract();
    __isset.message = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    appSpecificErrorCode = arg.extract();
    __isset.appSpecificErrorCode = true;
  }

  McShutdownReply(McShutdownReply&&) = default;

  McShutdownReply(const McShutdownReply&) = default;

  McShutdownReply& operator=(McShutdownReply&&) = default;

  McShutdownReply& operator=(const McShutdownReply&) = default;
  void __clear();
   ::carbon::Result result;
  ::std::string message;
  int16_t appSpecificErrorCode;

  struct __isset {
    bool result;
    bool message;
    bool appSpecificErrorCode;
  } __isset = {};
  bool operator==(const McShutdownReply& rhs) const;
  bool operator<(const McShutdownReply& rhs) const;

   ::carbon::Result get_result() const {
    return result;
  }

   ::carbon::Result& set_result( ::carbon::Result result_) {
    result = result_;
    __isset.result = true;
    return result;
  }

  const ::std::string& get_message() const& {
    return message;
  }

  ::std::string get_message() && {
    return std::move(message);
  }

  template <typename T_McShutdownReply_message_struct_setter = ::std::string>
  ::std::string& set_message(T_McShutdownReply_message_struct_setter&& message_) {
    message = std::forward<T_McShutdownReply_message_struct_setter>(message_);
    __isset.message = true;
    return message;
  }

  int16_t get_appSpecificErrorCode() const {
    return appSpecificErrorCode;
  }

  int16_t& set_appSpecificErrorCode(int16_t appSpecificErrorCode_) {
    appSpecificErrorCode = appSpecificErrorCode_;
    __isset.appSpecificErrorCode = true;
    return appSpecificErrorCode;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< McShutdownReply >;
};

void swap(McShutdownReply& a, McShutdownReply& b);

template <class Protocol_>
uint32_t McShutdownReply::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class McQuitRequest final : private apache::thrift::detail::st::ComparisonOperators<McQuitRequest> {
 public:

  McQuitRequest() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  McQuitRequest(apache::thrift::FragileConstructor,  ::carbon::thrift::IOBufKey key__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    key = arg.extract();
    __isset.key = true;
  }

  McQuitRequest(McQuitRequest&&) = default;

  McQuitRequest(const McQuitRequest&) = default;

  McQuitRequest& operator=(McQuitRequest&&) = default;

  McQuitRequest& operator=(const McQuitRequest&) = default;
  void __clear();
   ::carbon::thrift::IOBufKey key;

  struct __isset {
    bool key;
  } __isset = {};
  bool operator==(const McQuitRequest& rhs) const;
  bool operator<(const McQuitRequest& rhs) const;

  const  ::carbon::thrift::IOBufKey& get_key() const& {
    return key;
  }

   ::carbon::thrift::IOBufKey get_key() && {
    return std::move(key);
  }

  template <typename T_McQuitRequest_key_struct_setter =  ::carbon::thrift::IOBufKey>
   ::carbon::thrift::IOBufKey& set_key(T_McQuitRequest_key_struct_setter&& key_) {
    key = std::forward<T_McQuitRequest_key_struct_setter>(key_);
    __isset.key = true;
    return key;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< McQuitRequest >;
};

void swap(McQuitRequest& a, McQuitRequest& b);

template <class Protocol_>
uint32_t McQuitRequest::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class McQuitReply final : private apache::thrift::detail::st::ComparisonOperators<McQuitReply> {
 public:

  McQuitReply() :
      result( ::carbon::Result::UNKNOWN),
      appSpecificErrorCode(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  McQuitReply(apache::thrift::FragileConstructor,  ::carbon::Result result__arg, ::std::string message__arg, int16_t appSpecificErrorCode__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    result = arg.extract();
    __isset.result = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    message = arg.extract();
    __isset.message = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    appSpecificErrorCode = arg.extract();
    __isset.appSpecificErrorCode = true;
  }

  McQuitReply(McQuitReply&&) = default;

  McQuitReply(const McQuitReply&) = default;

  McQuitReply& operator=(McQuitReply&&) = default;

  McQuitReply& operator=(const McQuitReply&) = default;
  void __clear();
   ::carbon::Result result;
  ::std::string message;
  int16_t appSpecificErrorCode;

  struct __isset {
    bool result;
    bool message;
    bool appSpecificErrorCode;
  } __isset = {};
  bool operator==(const McQuitReply& rhs) const;
  bool operator<(const McQuitReply& rhs) const;

   ::carbon::Result get_result() const {
    return result;
  }

   ::carbon::Result& set_result( ::carbon::Result result_) {
    result = result_;
    __isset.result = true;
    return result;
  }

  const ::std::string& get_message() const& {
    return message;
  }

  ::std::string get_message() && {
    return std::move(message);
  }

  template <typename T_McQuitReply_message_struct_setter = ::std::string>
  ::std::string& set_message(T_McQuitReply_message_struct_setter&& message_) {
    message = std::forward<T_McQuitReply_message_struct_setter>(message_);
    __isset.message = true;
    return message;
  }

  int16_t get_appSpecificErrorCode() const {
    return appSpecificErrorCode;
  }

  int16_t& set_appSpecificErrorCode(int16_t appSpecificErrorCode_) {
    appSpecificErrorCode = appSpecificErrorCode_;
    __isset.appSpecificErrorCode = true;
    return appSpecificErrorCode;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< McQuitReply >;
};

void swap(McQuitReply& a, McQuitReply& b);

template <class Protocol_>
uint32_t McQuitReply::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class McExecRequest final : private apache::thrift::detail::st::ComparisonOperators<McExecRequest> {
 public:

  McExecRequest() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  McExecRequest(apache::thrift::FragileConstructor,  ::carbon::thrift::IOBufKey key__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    key = arg.extract();
    __isset.key = true;
  }

  McExecRequest(McExecRequest&&) = default;

  McExecRequest(const McExecRequest&) = default;

  McExecRequest& operator=(McExecRequest&&) = default;

  McExecRequest& operator=(const McExecRequest&) = default;
  void __clear();
   ::carbon::thrift::IOBufKey key;

  struct __isset {
    bool key;
  } __isset = {};
  bool operator==(const McExecRequest& rhs) const;
  bool operator<(const McExecRequest& rhs) const;

  const  ::carbon::thrift::IOBufKey& get_key() const& {
    return key;
  }

   ::carbon::thrift::IOBufKey get_key() && {
    return std::move(key);
  }

  template <typename T_McExecRequest_key_struct_setter =  ::carbon::thrift::IOBufKey>
   ::carbon::thrift::IOBufKey& set_key(T_McExecRequest_key_struct_setter&& key_) {
    key = std::forward<T_McExecRequest_key_struct_setter>(key_);
    __isset.key = true;
    return key;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< McExecRequest >;
};

void swap(McExecRequest& a, McExecRequest& b);

template <class Protocol_>
uint32_t McExecRequest::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class McExecReply final : private apache::thrift::detail::st::ComparisonOperators<McExecReply> {
 public:

  McExecReply() :
      result( ::carbon::Result::UNKNOWN),
      appSpecificErrorCode(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  McExecReply(apache::thrift::FragileConstructor,  ::carbon::Result result__arg, ::std::string response__arg, ::std::string message__arg, int16_t appSpecificErrorCode__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    result = arg.extract();
    __isset.result = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    response = arg.extract();
    __isset.response = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    message = arg.extract();
    __isset.message = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<4, _T> arg) {
    appSpecificErrorCode = arg.extract();
    __isset.appSpecificErrorCode = true;
  }

  McExecReply(McExecReply&&) = default;

  McExecReply(const McExecReply&) = default;

  McExecReply& operator=(McExecReply&&) = default;

  McExecReply& operator=(const McExecReply&) = default;
  void __clear();
   ::carbon::Result result;
  ::std::string response;
  ::std::string message;
  int16_t appSpecificErrorCode;

  struct __isset {
    bool result;
    bool response;
    bool message;
    bool appSpecificErrorCode;
  } __isset = {};
  bool operator==(const McExecReply& rhs) const;
  bool operator<(const McExecReply& rhs) const;

   ::carbon::Result get_result() const {
    return result;
  }

   ::carbon::Result& set_result( ::carbon::Result result_) {
    result = result_;
    __isset.result = true;
    return result;
  }

  const ::std::string& get_response() const& {
    return response;
  }

  ::std::string get_response() && {
    return std::move(response);
  }

  template <typename T_McExecReply_response_struct_setter = ::std::string>
  ::std::string& set_response(T_McExecReply_response_struct_setter&& response_) {
    response = std::forward<T_McExecReply_response_struct_setter>(response_);
    __isset.response = true;
    return response;
  }

  const ::std::string& get_message() const& {
    return message;
  }

  ::std::string get_message() && {
    return std::move(message);
  }

  template <typename T_McExecReply_message_struct_setter = ::std::string>
  ::std::string& set_message(T_McExecReply_message_struct_setter&& message_) {
    message = std::forward<T_McExecReply_message_struct_setter>(message_);
    __isset.message = true;
    return message;
  }

  int16_t get_appSpecificErrorCode() const {
    return appSpecificErrorCode;
  }

  int16_t& set_appSpecificErrorCode(int16_t appSpecificErrorCode_) {
    appSpecificErrorCode = appSpecificErrorCode_;
    __isset.appSpecificErrorCode = true;
    return appSpecificErrorCode;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< McExecReply >;
};

void swap(McExecReply& a, McExecReply& b);

template <class Protocol_>
uint32_t McExecReply::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class GoAwayAcknowledgement final : private apache::thrift::detail::st::ComparisonOperators<GoAwayAcknowledgement> {
 public:

  GoAwayAcknowledgement() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  GoAwayAcknowledgement(apache::thrift::FragileConstructor);

  GoAwayAcknowledgement(GoAwayAcknowledgement&&) = default;

  GoAwayAcknowledgement(const GoAwayAcknowledgement&) = default;

  GoAwayAcknowledgement& operator=(GoAwayAcknowledgement&&) = default;

  GoAwayAcknowledgement& operator=(const GoAwayAcknowledgement&) = default;
  void __clear();
  bool operator==(const GoAwayAcknowledgement& rhs) const;
  bool operator<(const GoAwayAcknowledgement& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< GoAwayAcknowledgement >;
};

void swap(GoAwayAcknowledgement& a, GoAwayAcknowledgement& b);

template <class Protocol_>
uint32_t GoAwayAcknowledgement::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift
namespace facebook { namespace memcache { namespace thrift {
class GoAwayRequest final : private apache::thrift::detail::st::ComparisonOperators<GoAwayRequest> {
 public:

  GoAwayRequest() :
      result( ::carbon::Result::UNKNOWN) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  GoAwayRequest(apache::thrift::FragileConstructor,  ::carbon::Result result__arg, ::std::string reason__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    result = arg.extract();
    __isset.result = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    reason = arg.extract();
    __isset.reason = true;
  }

  GoAwayRequest(GoAwayRequest&&) = default;

  GoAwayRequest(const GoAwayRequest&) = default;

  GoAwayRequest& operator=(GoAwayRequest&&) = default;

  GoAwayRequest& operator=(const GoAwayRequest&) = default;
  void __clear();
   ::carbon::Result result;
  ::std::string reason;

  struct __isset {
    bool result;
    bool reason;
  } __isset = {};
  bool operator==(const GoAwayRequest& rhs) const;
  bool operator<(const GoAwayRequest& rhs) const;

   ::carbon::Result get_result() const {
    return result;
  }

   ::carbon::Result& set_result( ::carbon::Result result_) {
    result = result_;
    __isset.result = true;
    return result;
  }

  const ::std::string& get_reason() const& {
    return reason;
  }

  ::std::string get_reason() && {
    return std::move(reason);
  }

  template <typename T_GoAwayRequest_reason_struct_setter = ::std::string>
  ::std::string& set_reason(T_GoAwayRequest_reason_struct_setter&& reason_) {
    reason = std::forward<T_GoAwayRequest_reason_struct_setter>(reason_);
    __isset.reason = true;
    return reason;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< GoAwayRequest >;
};

void swap(GoAwayRequest& a, GoAwayRequest& b);

template <class Protocol_>
uint32_t GoAwayRequest::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // facebook::memcache::thrift