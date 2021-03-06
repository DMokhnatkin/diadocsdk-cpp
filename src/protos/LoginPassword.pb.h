// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LoginPassword.proto

#ifndef PROTOBUF_LoginPassword_2eproto__INCLUDED
#define PROTOBUF_LoginPassword_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_LoginPassword_2eproto();
void protobuf_AssignDesc_LoginPassword_2eproto();
void protobuf_ShutdownFile_LoginPassword_2eproto();

class LoginPassword;

// ===================================================================

class LoginPassword : public ::google::protobuf::Message {
 public:
  LoginPassword();
  virtual ~LoginPassword();

  LoginPassword(const LoginPassword& from);

  inline LoginPassword& operator=(const LoginPassword& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginPassword& default_instance();

  void Swap(LoginPassword* other);

  // implements Message ----------------------------------------------

  LoginPassword* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginPassword& from);
  void MergeFrom(const LoginPassword& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string Login = 1;
  inline bool has_login() const;
  inline void clear_login();
  static const int kLoginFieldNumber = 1;
  inline const ::std::string& login() const;
  inline void set_login(const ::std::string& value);
  inline void set_login(const char* value);
  inline void set_login(const char* value, size_t size);
  inline ::std::string* mutable_login();
  inline ::std::string* release_login();
  inline void set_allocated_login(::std::string* login);

  // required string Password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.LoginPassword)
 private:
  inline void set_has_login();
  inline void clear_has_login();
  inline void set_has_password();
  inline void clear_has_password();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* login_;
  ::std::string* password_;
  friend void  protobuf_AddDesc_LoginPassword_2eproto();
  friend void protobuf_AssignDesc_LoginPassword_2eproto();
  friend void protobuf_ShutdownFile_LoginPassword_2eproto();

  void InitAsDefaultInstance();
  static LoginPassword* default_instance_;
};
// ===================================================================


// ===================================================================

// LoginPassword

// required string Login = 1;
inline bool LoginPassword::has_login() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginPassword::set_has_login() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginPassword::clear_has_login() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginPassword::clear_login() {
  if (login_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    login_->clear();
  }
  clear_has_login();
}
inline const ::std::string& LoginPassword::login() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.LoginPassword.Login)
  return *login_;
}
inline void LoginPassword::set_login(const ::std::string& value) {
  set_has_login();
  if (login_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    login_ = new ::std::string;
  }
  login_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.LoginPassword.Login)
}
inline void LoginPassword::set_login(const char* value) {
  set_has_login();
  if (login_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    login_ = new ::std::string;
  }
  login_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.LoginPassword.Login)
}
inline void LoginPassword::set_login(const char* value, size_t size) {
  set_has_login();
  if (login_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    login_ = new ::std::string;
  }
  login_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.LoginPassword.Login)
}
inline ::std::string* LoginPassword::mutable_login() {
  set_has_login();
  if (login_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    login_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.LoginPassword.Login)
  return login_;
}
inline ::std::string* LoginPassword::release_login() {
  clear_has_login();
  if (login_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = login_;
    login_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void LoginPassword::set_allocated_login(::std::string* login) {
  if (login_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete login_;
  }
  if (login) {
    set_has_login();
    login_ = login;
  } else {
    clear_has_login();
    login_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.LoginPassword.Login)
}

// required string Password = 2;
inline bool LoginPassword::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginPassword::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginPassword::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginPassword::clear_password() {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& LoginPassword::password() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.LoginPassword.Password)
  return *password_;
}
inline void LoginPassword::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.LoginPassword.Password)
}
inline void LoginPassword::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.LoginPassword.Password)
}
inline void LoginPassword::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.LoginPassword.Password)
}
inline ::std::string* LoginPassword::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.LoginPassword.Password)
  return password_;
}
inline ::std::string* LoginPassword::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void LoginPassword::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.LoginPassword.Password)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LoginPassword_2eproto__INCLUDED
