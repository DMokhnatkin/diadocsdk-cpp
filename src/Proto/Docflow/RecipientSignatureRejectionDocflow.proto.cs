//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: Docflow/RecipientSignatureRejectionDocflow.proto
// Note: requires additional types generated from: Timestamp.proto
// Note: requires additional types generated from: Docflow/Attachment.proto
namespace Diadoc.Api.Proto.Docflow
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"RecipientSignatureRejectionDocflow")]
  public partial class RecipientSignatureRejectionDocflow : global::ProtoBuf.IExtensible
  {
    public RecipientSignatureRejectionDocflow() {}
    

    private bool _IsFinished = default(bool);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"IsFinished", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(default(bool))]
    public bool IsFinished
    {
      get { return _IsFinished; }
      set { _IsFinished = value; }
    }

    private Diadoc.Api.Proto.Docflow.SignedAttachment _RecipientSignatureRejectionAttachment = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"RecipientSignatureRejectionAttachment", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Diadoc.Api.Proto.Docflow.SignedAttachment RecipientSignatureRejectionAttachment
    {
      get { return _RecipientSignatureRejectionAttachment; }
      set { _RecipientSignatureRejectionAttachment = value; }
    }

    private Diadoc.Api.Proto.Timestamp _DeliveryTimestamp = null;
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"DeliveryTimestamp", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Diadoc.Api.Proto.Timestamp DeliveryTimestamp
    {
      get { return _DeliveryTimestamp; }
      set { _DeliveryTimestamp = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}