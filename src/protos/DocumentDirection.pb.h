// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DocumentDirection.proto

#ifndef PROTOBUF_DocumentDirection_2eproto__INCLUDED
#define PROTOBUF_DocumentDirection_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DocumentDirection_2eproto();
void protobuf_AssignDesc_DocumentDirection_2eproto();
void protobuf_ShutdownFile_DocumentDirection_2eproto();


enum DocumentDirection {
  UnknownDocumentDirection = 0,
  Inbound = 1,
  Outbound = 2,
  Internal = 3
};
bool DocumentDirection_IsValid(int value);
const DocumentDirection DocumentDirection_MIN = UnknownDocumentDirection;
const DocumentDirection DocumentDirection_MAX = Internal;
const int DocumentDirection_ARRAYSIZE = DocumentDirection_MAX + 1;

const ::google::protobuf::EnumDescriptor* DocumentDirection_descriptor();
inline const ::std::string& DocumentDirection_Name(DocumentDirection value) {
  return ::google::protobuf::internal::NameOfEnum(
    DocumentDirection_descriptor(), value);
}
inline bool DocumentDirection_Parse(
    const ::std::string& name, DocumentDirection* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DocumentDirection>(
    DocumentDirection_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Diadoc::Api::Proto::DocumentDirection> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Diadoc::Api::Proto::DocumentDirection>() {
  return ::Diadoc::Api::Proto::DocumentDirection_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DocumentDirection_2eproto__INCLUDED
