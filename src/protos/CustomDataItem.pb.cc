// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CustomDataItem.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CustomDataItem.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

namespace {

const ::google::protobuf::Descriptor* CustomDataItem_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CustomDataItem_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CustomDataItem_2eproto() {
  protobuf_AddDesc_CustomDataItem_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CustomDataItem.proto");
  GOOGLE_CHECK(file != NULL);
  CustomDataItem_descriptor_ = file->message_type(0);
  static const int CustomDataItem_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CustomDataItem, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CustomDataItem, value_),
  };
  CustomDataItem_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CustomDataItem_descriptor_,
      CustomDataItem::default_instance_,
      CustomDataItem_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CustomDataItem, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CustomDataItem, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CustomDataItem));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CustomDataItem_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CustomDataItem_descriptor_, &CustomDataItem::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CustomDataItem_2eproto() {
  delete CustomDataItem::default_instance_;
  delete CustomDataItem_reflection_;
}

void protobuf_AddDesc_CustomDataItem_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024CustomDataItem.proto\022\020Diadoc.Api.Proto"
    "\",\n\016CustomDataItem\022\013\n\003Key\030\001 \002(\t\022\r\n\005Value"
    "\030\002 \001(\t", 86);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CustomDataItem.proto", &protobuf_RegisterTypes);
  CustomDataItem::default_instance_ = new CustomDataItem();
  CustomDataItem::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CustomDataItem_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CustomDataItem_2eproto {
  StaticDescriptorInitializer_CustomDataItem_2eproto() {
    protobuf_AddDesc_CustomDataItem_2eproto();
  }
} static_descriptor_initializer_CustomDataItem_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CustomDataItem::kKeyFieldNumber;
const int CustomDataItem::kValueFieldNumber;
#endif  // !_MSC_VER

CustomDataItem::CustomDataItem()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.CustomDataItem)
}

void CustomDataItem::InitAsDefaultInstance() {
}

CustomDataItem::CustomDataItem(const CustomDataItem& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.CustomDataItem)
}

void CustomDataItem::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CustomDataItem::~CustomDataItem() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.CustomDataItem)
  SharedDtor();
}

void CustomDataItem::SharedDtor() {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete key_;
  }
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete value_;
  }
  if (this != default_instance_) {
  }
}

void CustomDataItem::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CustomDataItem::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CustomDataItem_descriptor_;
}

const CustomDataItem& CustomDataItem::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CustomDataItem_2eproto();
  return *default_instance_;
}

CustomDataItem* CustomDataItem::default_instance_ = NULL;

CustomDataItem* CustomDataItem::New() const {
  return new CustomDataItem;
}

void CustomDataItem::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_key()) {
      if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        key_->clear();
      }
    }
    if (has_value()) {
      if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        value_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CustomDataItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.CustomDataItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string Key = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "key");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Value;
        break;
      }

      // optional string Value = 2;
      case 2: {
        if (tag == 18) {
         parse_Value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "value");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.CustomDataItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.CustomDataItem)
  return false;
#undef DO_
}

void CustomDataItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.CustomDataItem)
  // required string Key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->key(), output);
  }

  // optional string Value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.CustomDataItem)
}

::google::protobuf::uint8* CustomDataItem::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.CustomDataItem)
  // required string Key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // optional string Value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.CustomDataItem)
  return target;
}

int CustomDataItem::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string Key = 1;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }

    // optional string Value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CustomDataItem::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CustomDataItem* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CustomDataItem*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CustomDataItem::MergeFrom(const CustomDataItem& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_key()) {
      set_key(from.key());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CustomDataItem::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CustomDataItem::CopyFrom(const CustomDataItem& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CustomDataItem::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void CustomDataItem::Swap(CustomDataItem* other) {
  if (other != this) {
    std::swap(key_, other->key_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CustomDataItem::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CustomDataItem_descriptor_;
  metadata.reflection = CustomDataItem_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)