// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Invoicing/RevocationRequestInfo.proto

#ifndef PROTOBUF_Invoicing_2fRevocationRequestInfo_2eproto__INCLUDED
#define PROTOBUF_Invoicing_2fRevocationRequestInfo_2eproto__INCLUDED

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
#include "Invoicing/Signer.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Invoicing {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Invoicing_2fRevocationRequestInfo_2eproto();
void protobuf_AssignDesc_Invoicing_2fRevocationRequestInfo_2eproto();
void protobuf_ShutdownFile_Invoicing_2fRevocationRequestInfo_2eproto();

class RevocationRequestInfo;

// ===================================================================

class RevocationRequestInfo : public ::google::protobuf::Message {
 public:
  RevocationRequestInfo();
  virtual ~RevocationRequestInfo();

  RevocationRequestInfo(const RevocationRequestInfo& from);

  inline RevocationRequestInfo& operator=(const RevocationRequestInfo& from) {
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
  static const RevocationRequestInfo& default_instance();

  void Swap(RevocationRequestInfo* other);

  // implements Message ----------------------------------------------

  RevocationRequestInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RevocationRequestInfo& from);
  void MergeFrom(const RevocationRequestInfo& from);
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

  // optional string Comment = 1;
  inline bool has_comment() const;
  inline void clear_comment();
  static const int kCommentFieldNumber = 1;
  inline const ::std::string& comment() const;
  inline void set_comment(const ::std::string& value);
  inline void set_comment(const char* value);
  inline void set_comment(const char* value, size_t size);
  inline ::std::string* mutable_comment();
  inline ::std::string* release_comment();
  inline void set_allocated_comment(::std::string* comment);

  // optional .Diadoc.Api.Proto.Invoicing.Signer Signer = 2;
  inline bool has_signer() const;
  inline void clear_signer();
  static const int kSignerFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::Invoicing::Signer& signer() const;
  inline ::Diadoc::Api::Proto::Invoicing::Signer* mutable_signer();
  inline ::Diadoc::Api::Proto::Invoicing::Signer* release_signer();
  inline void set_allocated_signer(::Diadoc::Api::Proto::Invoicing::Signer* signer);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Invoicing.RevocationRequestInfo)
 private:
  inline void set_has_comment();
  inline void clear_has_comment();
  inline void set_has_signer();
  inline void clear_has_signer();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* comment_;
  ::Diadoc::Api::Proto::Invoicing::Signer* signer_;
  friend void  protobuf_AddDesc_Invoicing_2fRevocationRequestInfo_2eproto();
  friend void protobuf_AssignDesc_Invoicing_2fRevocationRequestInfo_2eproto();
  friend void protobuf_ShutdownFile_Invoicing_2fRevocationRequestInfo_2eproto();

  void InitAsDefaultInstance();
  static RevocationRequestInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// RevocationRequestInfo

// optional string Comment = 1;
inline bool RevocationRequestInfo::has_comment() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RevocationRequestInfo::set_has_comment() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RevocationRequestInfo::clear_has_comment() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RevocationRequestInfo::clear_comment() {
  if (comment_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    comment_->clear();
  }
  clear_has_comment();
}
inline const ::std::string& RevocationRequestInfo::comment() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Invoicing.RevocationRequestInfo.Comment)
  return *comment_;
}
inline void RevocationRequestInfo::set_comment(const ::std::string& value) {
  set_has_comment();
  if (comment_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    comment_ = new ::std::string;
  }
  comment_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Invoicing.RevocationRequestInfo.Comment)
}
inline void RevocationRequestInfo::set_comment(const char* value) {
  set_has_comment();
  if (comment_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    comment_ = new ::std::string;
  }
  comment_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Invoicing.RevocationRequestInfo.Comment)
}
inline void RevocationRequestInfo::set_comment(const char* value, size_t size) {
  set_has_comment();
  if (comment_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    comment_ = new ::std::string;
  }
  comment_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Invoicing.RevocationRequestInfo.Comment)
}
inline ::std::string* RevocationRequestInfo::mutable_comment() {
  set_has_comment();
  if (comment_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    comment_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Invoicing.RevocationRequestInfo.Comment)
  return comment_;
}
inline ::std::string* RevocationRequestInfo::release_comment() {
  clear_has_comment();
  if (comment_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = comment_;
    comment_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RevocationRequestInfo::set_allocated_comment(::std::string* comment) {
  if (comment_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete comment_;
  }
  if (comment) {
    set_has_comment();
    comment_ = comment;
  } else {
    clear_has_comment();
    comment_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Invoicing.RevocationRequestInfo.Comment)
}

// optional .Diadoc.Api.Proto.Invoicing.Signer Signer = 2;
inline bool RevocationRequestInfo::has_signer() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RevocationRequestInfo::set_has_signer() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RevocationRequestInfo::clear_has_signer() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RevocationRequestInfo::clear_signer() {
  if (signer_ != NULL) signer_->::Diadoc::Api::Proto::Invoicing::Signer::Clear();
  clear_has_signer();
}
inline const ::Diadoc::Api::Proto::Invoicing::Signer& RevocationRequestInfo::signer() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Invoicing.RevocationRequestInfo.Signer)
  return signer_ != NULL ? *signer_ : *default_instance_->signer_;
}
inline ::Diadoc::Api::Proto::Invoicing::Signer* RevocationRequestInfo::mutable_signer() {
  set_has_signer();
  if (signer_ == NULL) signer_ = new ::Diadoc::Api::Proto::Invoicing::Signer;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Invoicing.RevocationRequestInfo.Signer)
  return signer_;
}
inline ::Diadoc::Api::Proto::Invoicing::Signer* RevocationRequestInfo::release_signer() {
  clear_has_signer();
  ::Diadoc::Api::Proto::Invoicing::Signer* temp = signer_;
  signer_ = NULL;
  return temp;
}
inline void RevocationRequestInfo::set_allocated_signer(::Diadoc::Api::Proto::Invoicing::Signer* signer) {
  delete signer_;
  signer_ = signer;
  if (signer) {
    set_has_signer();
  } else {
    clear_has_signer();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Invoicing.RevocationRequestInfo.Signer)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Invoicing
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

#endif  // PROTOBUF_Invoicing_2fRevocationRequestInfo_2eproto__INCLUDED