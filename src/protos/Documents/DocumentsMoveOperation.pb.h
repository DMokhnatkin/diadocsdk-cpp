// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Documents/DocumentsMoveOperation.proto

#ifndef PROTOBUF_Documents_2fDocumentsMoveOperation_2eproto__INCLUDED
#define PROTOBUF_Documents_2fDocumentsMoveOperation_2eproto__INCLUDED

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
#include "DocumentId.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Documents {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Documents_2fDocumentsMoveOperation_2eproto();
void protobuf_AssignDesc_Documents_2fDocumentsMoveOperation_2eproto();
void protobuf_ShutdownFile_Documents_2fDocumentsMoveOperation_2eproto();

class DocumentsMoveOperation;

// ===================================================================

class DocumentsMoveOperation : public ::google::protobuf::Message {
 public:
  DocumentsMoveOperation();
  virtual ~DocumentsMoveOperation();

  DocumentsMoveOperation(const DocumentsMoveOperation& from);

  inline DocumentsMoveOperation& operator=(const DocumentsMoveOperation& from) {
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
  static const DocumentsMoveOperation& default_instance();

  void Swap(DocumentsMoveOperation* other);

  // implements Message ----------------------------------------------

  DocumentsMoveOperation* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DocumentsMoveOperation& from);
  void MergeFrom(const DocumentsMoveOperation& from);
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

  // required string BoxId = 1;
  inline bool has_boxid() const;
  inline void clear_boxid();
  static const int kBoxIdFieldNumber = 1;
  inline const ::std::string& boxid() const;
  inline void set_boxid(const ::std::string& value);
  inline void set_boxid(const char* value);
  inline void set_boxid(const char* value, size_t size);
  inline ::std::string* mutable_boxid();
  inline ::std::string* release_boxid();
  inline void set_allocated_boxid(::std::string* boxid);

  // optional string ToDepartmentId = 2;
  inline bool has_todepartmentid() const;
  inline void clear_todepartmentid();
  static const int kToDepartmentIdFieldNumber = 2;
  inline const ::std::string& todepartmentid() const;
  inline void set_todepartmentid(const ::std::string& value);
  inline void set_todepartmentid(const char* value);
  inline void set_todepartmentid(const char* value, size_t size);
  inline ::std::string* mutable_todepartmentid();
  inline ::std::string* release_todepartmentid();
  inline void set_allocated_todepartmentid(::std::string* todepartmentid);

  // repeated .Diadoc.Api.Proto.DocumentId DocumentIds = 3;
  inline int documentids_size() const;
  inline void clear_documentids();
  static const int kDocumentIdsFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::DocumentId& documentids(int index) const;
  inline ::Diadoc::Api::Proto::DocumentId* mutable_documentids(int index);
  inline ::Diadoc::Api::Proto::DocumentId* add_documentids();
  inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::DocumentId >&
      documentids() const;
  inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::DocumentId >*
      mutable_documentids();

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Documents.DocumentsMoveOperation)
 private:
  inline void set_has_boxid();
  inline void clear_has_boxid();
  inline void set_has_todepartmentid();
  inline void clear_has_todepartmentid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* boxid_;
  ::std::string* todepartmentid_;
  ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::DocumentId > documentids_;
  friend void  protobuf_AddDesc_Documents_2fDocumentsMoveOperation_2eproto();
  friend void protobuf_AssignDesc_Documents_2fDocumentsMoveOperation_2eproto();
  friend void protobuf_ShutdownFile_Documents_2fDocumentsMoveOperation_2eproto();

  void InitAsDefaultInstance();
  static DocumentsMoveOperation* default_instance_;
};
// ===================================================================


// ===================================================================

// DocumentsMoveOperation

// required string BoxId = 1;
inline bool DocumentsMoveOperation::has_boxid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DocumentsMoveOperation::set_has_boxid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DocumentsMoveOperation::clear_has_boxid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DocumentsMoveOperation::clear_boxid() {
  if (boxid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    boxid_->clear();
  }
  clear_has_boxid();
}
inline const ::std::string& DocumentsMoveOperation::boxid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.BoxId)
  return *boxid_;
}
inline void DocumentsMoveOperation::set_boxid(const ::std::string& value) {
  set_has_boxid();
  if (boxid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    boxid_ = new ::std::string;
  }
  boxid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.BoxId)
}
inline void DocumentsMoveOperation::set_boxid(const char* value) {
  set_has_boxid();
  if (boxid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    boxid_ = new ::std::string;
  }
  boxid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.BoxId)
}
inline void DocumentsMoveOperation::set_boxid(const char* value, size_t size) {
  set_has_boxid();
  if (boxid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    boxid_ = new ::std::string;
  }
  boxid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.BoxId)
}
inline ::std::string* DocumentsMoveOperation::mutable_boxid() {
  set_has_boxid();
  if (boxid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    boxid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.BoxId)
  return boxid_;
}
inline ::std::string* DocumentsMoveOperation::release_boxid() {
  clear_has_boxid();
  if (boxid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = boxid_;
    boxid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DocumentsMoveOperation::set_allocated_boxid(::std::string* boxid) {
  if (boxid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete boxid_;
  }
  if (boxid) {
    set_has_boxid();
    boxid_ = boxid;
  } else {
    clear_has_boxid();
    boxid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.BoxId)
}

// optional string ToDepartmentId = 2;
inline bool DocumentsMoveOperation::has_todepartmentid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DocumentsMoveOperation::set_has_todepartmentid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DocumentsMoveOperation::clear_has_todepartmentid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DocumentsMoveOperation::clear_todepartmentid() {
  if (todepartmentid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    todepartmentid_->clear();
  }
  clear_has_todepartmentid();
}
inline const ::std::string& DocumentsMoveOperation::todepartmentid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.ToDepartmentId)
  return *todepartmentid_;
}
inline void DocumentsMoveOperation::set_todepartmentid(const ::std::string& value) {
  set_has_todepartmentid();
  if (todepartmentid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    todepartmentid_ = new ::std::string;
  }
  todepartmentid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.ToDepartmentId)
}
inline void DocumentsMoveOperation::set_todepartmentid(const char* value) {
  set_has_todepartmentid();
  if (todepartmentid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    todepartmentid_ = new ::std::string;
  }
  todepartmentid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.ToDepartmentId)
}
inline void DocumentsMoveOperation::set_todepartmentid(const char* value, size_t size) {
  set_has_todepartmentid();
  if (todepartmentid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    todepartmentid_ = new ::std::string;
  }
  todepartmentid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.ToDepartmentId)
}
inline ::std::string* DocumentsMoveOperation::mutable_todepartmentid() {
  set_has_todepartmentid();
  if (todepartmentid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    todepartmentid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.ToDepartmentId)
  return todepartmentid_;
}
inline ::std::string* DocumentsMoveOperation::release_todepartmentid() {
  clear_has_todepartmentid();
  if (todepartmentid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = todepartmentid_;
    todepartmentid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DocumentsMoveOperation::set_allocated_todepartmentid(::std::string* todepartmentid) {
  if (todepartmentid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete todepartmentid_;
  }
  if (todepartmentid) {
    set_has_todepartmentid();
    todepartmentid_ = todepartmentid;
  } else {
    clear_has_todepartmentid();
    todepartmentid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.ToDepartmentId)
}

// repeated .Diadoc.Api.Proto.DocumentId DocumentIds = 3;
inline int DocumentsMoveOperation::documentids_size() const {
  return documentids_.size();
}
inline void DocumentsMoveOperation::clear_documentids() {
  documentids_.Clear();
}
inline const ::Diadoc::Api::Proto::DocumentId& DocumentsMoveOperation::documentids(int index) const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.DocumentIds)
  return documentids_.Get(index);
}
inline ::Diadoc::Api::Proto::DocumentId* DocumentsMoveOperation::mutable_documentids(int index) {
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.DocumentIds)
  return documentids_.Mutable(index);
}
inline ::Diadoc::Api::Proto::DocumentId* DocumentsMoveOperation::add_documentids() {
  // @@protoc_insertion_point(field_add:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.DocumentIds)
  return documentids_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::DocumentId >&
DocumentsMoveOperation::documentids() const {
  // @@protoc_insertion_point(field_list:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.DocumentIds)
  return documentids_;
}
inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::DocumentId >*
DocumentsMoveOperation::mutable_documentids() {
  // @@protoc_insertion_point(field_mutable_list:Diadoc.Api.Proto.Documents.DocumentsMoveOperation.DocumentIds)
  return &documentids_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Documents
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

#endif  // PROTOBUF_Documents_2fDocumentsMoveOperation_2eproto__INCLUDED
