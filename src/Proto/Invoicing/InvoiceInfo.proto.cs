//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: Invoicing/InvoiceInfo.proto
// Note: requires additional types generated from: Invoicing/Signer.proto
// Note: requires additional types generated from: Invoicing/OrganizationInfo.proto
namespace Diadoc.Api.Proto.Invoicing
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"InvoiceInfo")]
  public partial class InvoiceInfo : global::ProtoBuf.IExtensible
  {
    public InvoiceInfo() {}
    
    private string _InvoiceDate;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"InvoiceDate", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string InvoiceDate
    {
      get { return _InvoiceDate; }
      set { _InvoiceDate = value; }
    }
    private string _InvoiceNumber;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"InvoiceNumber", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string InvoiceNumber
    {
      get { return _InvoiceNumber; }
      set { _InvoiceNumber = value; }
    }
    private Diadoc.Api.Proto.Invoicing.DiadocOrganizationInfo _Seller;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"Seller", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Diadoc.Api.Proto.Invoicing.DiadocOrganizationInfo Seller
    {
      get { return _Seller; }
      set { _Seller = value; }
    }
    private Diadoc.Api.Proto.Invoicing.DiadocOrganizationInfo _Buyer;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"Buyer", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Diadoc.Api.Proto.Invoicing.DiadocOrganizationInfo Buyer
    {
      get { return _Buyer; }
      set { _Buyer = value; }
    }

    private Diadoc.Api.Proto.Invoicing.ShipperOrConsignee _Shipper = null;
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"Shipper", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Diadoc.Api.Proto.Invoicing.ShipperOrConsignee Shipper
    {
      get { return _Shipper; }
      set { _Shipper = value; }
    }

    private Diadoc.Api.Proto.Invoicing.ShipperOrConsignee _Consignee = null;
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"Consignee", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Diadoc.Api.Proto.Invoicing.ShipperOrConsignee Consignee
    {
      get { return _Consignee; }
      set { _Consignee = value; }
    }
    private Diadoc.Api.Proto.Invoicing.Signer _Signer;
    [global::ProtoBuf.ProtoMember(7, IsRequired = true, Name=@"Signer", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Diadoc.Api.Proto.Invoicing.Signer Signer
    {
      get { return _Signer; }
      set { _Signer = value; }
    }
    private readonly global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.PaymentDocumentInfo> _PaymentDocuments = new global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.PaymentDocumentInfo>();
    [global::ProtoBuf.ProtoMember(8, Name=@"PaymentDocuments", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.PaymentDocumentInfo> PaymentDocuments
    {
      get { return _PaymentDocuments; }
    }
  
    private readonly global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.InvoiceItem> _Items = new global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.InvoiceItem>();
    [global::ProtoBuf.ProtoMember(9, Name=@"Items", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.InvoiceItem> Items
    {
      get { return _Items; }
    }
  

    private string _Currency = "";
    [global::ProtoBuf.ProtoMember(10, IsRequired = false, Name=@"Currency", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Currency
    {
      get { return _Currency; }
      set { _Currency = value; }
    }

    private string _TotalWithVatExcluded = "";
    [global::ProtoBuf.ProtoMember(11, IsRequired = false, Name=@"TotalWithVatExcluded", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string TotalWithVatExcluded
    {
      get { return _TotalWithVatExcluded; }
      set { _TotalWithVatExcluded = value; }
    }

    private string _Vat = "";
    [global::ProtoBuf.ProtoMember(12, IsRequired = false, Name=@"Vat", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Vat
    {
      get { return _Vat; }
      set { _Vat = value; }
    }
    private string _Total;
    [global::ProtoBuf.ProtoMember(13, IsRequired = true, Name=@"Total", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string Total
    {
      get { return _Total; }
      set { _Total = value; }
    }

    private string _AdditionalInfo = "";
    [global::ProtoBuf.ProtoMember(14, IsRequired = false, Name=@"AdditionalInfo", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string AdditionalInfo
    {
      get { return _AdditionalInfo; }
      set { _AdditionalInfo = value; }
    }

    private string _InvoiceRevisionDate = "";
    [global::ProtoBuf.ProtoMember(15, IsRequired = false, Name=@"InvoiceRevisionDate", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string InvoiceRevisionDate
    {
      get { return _InvoiceRevisionDate; }
      set { _InvoiceRevisionDate = value; }
    }

    private string _InvoiceRevisionNumber = "";
    [global::ProtoBuf.ProtoMember(16, IsRequired = false, Name=@"InvoiceRevisionNumber", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string InvoiceRevisionNumber
    {
      get { return _InvoiceRevisionNumber; }
      set { _InvoiceRevisionNumber = value; }
    }
    private readonly global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo> _AdditionalInfos = new global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo>();
    [global::ProtoBuf.ProtoMember(17, Name=@"AdditionalInfos", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo> AdditionalInfos
    {
      get { return _AdditionalInfos; }
    }
  

    private Diadoc.Api.Proto.Invoicing.InvoiceFormatVersion _Version = Diadoc.Api.Proto.Invoicing.InvoiceFormatVersion.DefaultInvoiceFormatVersion;
    [global::ProtoBuf.ProtoMember(18, IsRequired = false, Name=@"Version", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(Diadoc.Api.Proto.Invoicing.InvoiceFormatVersion.DefaultInvoiceFormatVersion)]
    public Diadoc.Api.Proto.Invoicing.InvoiceFormatVersion Version
    {
      get { return _Version; }
      set { _Version = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"AdditionalInfo")]
  public partial class AdditionalInfo : global::ProtoBuf.IExtensible
  {
    public AdditionalInfo() {}
    
    private string _Id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"Id", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string Id
    {
      get { return _Id; }
      set { _Id = value; }
    }
    private string _Value;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"Value", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string Value
    {
      get { return _Value; }
      set { _Value = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"InvoiceItem")]
  public partial class InvoiceItem : global::ProtoBuf.IExtensible
  {
    public InvoiceItem() {}
    
    private string _Product;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"Product", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string Product
    {
      get { return _Product; }
      set { _Product = value; }
    }

    private string _Unit = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"Unit", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Unit
    {
      get { return _Unit; }
      set { _Unit = value; }
    }

    private string _Quantity = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"Quantity", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Quantity
    {
      get { return _Quantity; }
      set { _Quantity = value; }
    }

    private string _Price = "";
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"Price", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Price
    {
      get { return _Price; }
      set { _Price = value; }
    }
    private readonly global::System.Collections.Generic.List<string> _CountriesOfOrigin = new global::System.Collections.Generic.List<string>();
    [global::ProtoBuf.ProtoMember(5, Name=@"CountriesOfOrigin", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<string> CountriesOfOrigin
    {
      get { return _CountriesOfOrigin; }
    }
  
    private readonly global::System.Collections.Generic.List<string> _CustomsDeclarationNumbers = new global::System.Collections.Generic.List<string>();
    [global::ProtoBuf.ProtoMember(6, Name=@"CustomsDeclarationNumbers", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<string> CustomsDeclarationNumbers
    {
      get { return _CustomsDeclarationNumbers; }
    }
  

    private string _Excise = "";
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"Excise", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Excise
    {
      get { return _Excise; }
      set { _Excise = value; }
    }
    private Diadoc.Api.Proto.Invoicing.TaxRate _TaxRate;
    [global::ProtoBuf.ProtoMember(8, IsRequired = true, Name=@"TaxRate", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public Diadoc.Api.Proto.Invoicing.TaxRate TaxRate
    {
      get { return _TaxRate; }
      set { _TaxRate = value; }
    }

    private string _SubtotalWithVatExcluded = "";
    [global::ProtoBuf.ProtoMember(9, IsRequired = false, Name=@"SubtotalWithVatExcluded", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string SubtotalWithVatExcluded
    {
      get { return _SubtotalWithVatExcluded; }
      set { _SubtotalWithVatExcluded = value; }
    }

    private string _Vat = "";
    [global::ProtoBuf.ProtoMember(10, IsRequired = false, Name=@"Vat", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Vat
    {
      get { return _Vat; }
      set { _Vat = value; }
    }
    private string _Subtotal;
    [global::ProtoBuf.ProtoMember(11, IsRequired = true, Name=@"Subtotal", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string Subtotal
    {
      get { return _Subtotal; }
      set { _Subtotal = value; }
    }

    private string _AdditionalInfo = "";
    [global::ProtoBuf.ProtoMember(12, IsRequired = false, Name=@"AdditionalInfo", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string AdditionalInfo
    {
      get { return _AdditionalInfo; }
      set { _AdditionalInfo = value; }
    }
    private readonly global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.CustomsDeclaration> _CustomsDeclarations = new global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.CustomsDeclaration>();
    [global::ProtoBuf.ProtoMember(13, Name=@"CustomsDeclarations", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.CustomsDeclaration> CustomsDeclarations
    {
      get { return _CustomsDeclarations; }
    }
  
    private readonly global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo> _AdditionalInfos = new global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo>();
    [global::ProtoBuf.ProtoMember(14, Name=@"AdditionalInfos", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo> AdditionalInfos
    {
      get { return _AdditionalInfos; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"CustomsDeclaration")]
  public partial class CustomsDeclaration : global::ProtoBuf.IExtensible
  {
    public CustomsDeclaration() {}
    
    private string _CountryCode;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"CountryCode", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string CountryCode
    {
      get { return _CountryCode; }
      set { _CountryCode = value; }
    }
    private string _DeclarationNumber;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"DeclarationNumber", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string DeclarationNumber
    {
      get { return _DeclarationNumber; }
      set { _DeclarationNumber = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PaymentDocumentInfo")]
  public partial class PaymentDocumentInfo : global::ProtoBuf.IExtensible
  {
    public PaymentDocumentInfo() {}
    
    private string _DocumentDate;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"DocumentDate", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string DocumentDate
    {
      get { return _DocumentDate; }
      set { _DocumentDate = value; }
    }
    private string _DocumentNumber;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"DocumentNumber", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string DocumentNumber
    {
      get { return _DocumentNumber; }
      set { _DocumentNumber = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ShipperOrConsignee")]
  public partial class ShipperOrConsignee : global::ProtoBuf.IExtensible
  {
    public ShipperOrConsignee() {}
    

    private bool _SameAsSellerOrBuyer = default(bool);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"SameAsSellerOrBuyer", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(default(bool))]
    public bool SameAsSellerOrBuyer
    {
      get { return _SameAsSellerOrBuyer; }
      set { _SameAsSellerOrBuyer = value; }
    }

    private Diadoc.Api.Proto.Invoicing.OrganizationInfo _OrgInfo = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"OrgInfo", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Diadoc.Api.Proto.Invoicing.OrganizationInfo OrgInfo
    {
      get { return _OrgInfo; }
      set { _OrgInfo = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"InvoiceCorrectionInfo")]
  public partial class InvoiceCorrectionInfo : global::ProtoBuf.IExtensible
  {
    public InvoiceCorrectionInfo() {}
    
    private string _InvoiceDate;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"InvoiceDate", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string InvoiceDate
    {
      get { return _InvoiceDate; }
      set { _InvoiceDate = value; }
    }
    private string _InvoiceNumber;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"InvoiceNumber", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string InvoiceNumber
    {
      get { return _InvoiceNumber; }
      set { _InvoiceNumber = value; }
    }

    private string _InvoiceRevisionDate = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"InvoiceRevisionDate", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string InvoiceRevisionDate
    {
      get { return _InvoiceRevisionDate; }
      set { _InvoiceRevisionDate = value; }
    }

    private string _InvoiceRevisionNumber = "";
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"InvoiceRevisionNumber", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string InvoiceRevisionNumber
    {
      get { return _InvoiceRevisionNumber; }
      set { _InvoiceRevisionNumber = value; }
    }
    private string _InvoiceCorrectionDate;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"InvoiceCorrectionDate", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string InvoiceCorrectionDate
    {
      get { return _InvoiceCorrectionDate; }
      set { _InvoiceCorrectionDate = value; }
    }
    private string _InvoiceCorrectionNumber;
    [global::ProtoBuf.ProtoMember(6, IsRequired = true, Name=@"InvoiceCorrectionNumber", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string InvoiceCorrectionNumber
    {
      get { return _InvoiceCorrectionNumber; }
      set { _InvoiceCorrectionNumber = value; }
    }

    private string _InvoiceCorrectionRevisionDate = "";
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"InvoiceCorrectionRevisionDate", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string InvoiceCorrectionRevisionDate
    {
      get { return _InvoiceCorrectionRevisionDate; }
      set { _InvoiceCorrectionRevisionDate = value; }
    }

    private string _InvoiceCorrectionRevisionNumber = "";
    [global::ProtoBuf.ProtoMember(8, IsRequired = false, Name=@"InvoiceCorrectionRevisionNumber", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string InvoiceCorrectionRevisionNumber
    {
      get { return _InvoiceCorrectionRevisionNumber; }
      set { _InvoiceCorrectionRevisionNumber = value; }
    }
    private Diadoc.Api.Proto.Invoicing.DiadocOrganizationInfo _Seller;
    [global::ProtoBuf.ProtoMember(9, IsRequired = true, Name=@"Seller", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Diadoc.Api.Proto.Invoicing.DiadocOrganizationInfo Seller
    {
      get { return _Seller; }
      set { _Seller = value; }
    }
    private Diadoc.Api.Proto.Invoicing.DiadocOrganizationInfo _Buyer;
    [global::ProtoBuf.ProtoMember(10, IsRequired = true, Name=@"Buyer", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Diadoc.Api.Proto.Invoicing.DiadocOrganizationInfo Buyer
    {
      get { return _Buyer; }
      set { _Buyer = value; }
    }
    private Diadoc.Api.Proto.Invoicing.Signer _Signer;
    [global::ProtoBuf.ProtoMember(11, IsRequired = true, Name=@"Signer", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Diadoc.Api.Proto.Invoicing.Signer Signer
    {
      get { return _Signer; }
      set { _Signer = value; }
    }
    private readonly global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.InvoiceCorrectionItem> _Items = new global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.InvoiceCorrectionItem>();
    [global::ProtoBuf.ProtoMember(12, Name=@"Items", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.InvoiceCorrectionItem> Items
    {
      get { return _Items; }
    }
  

    private string _Currency = "";
    [global::ProtoBuf.ProtoMember(13, IsRequired = false, Name=@"Currency", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Currency
    {
      get { return _Currency; }
      set { _Currency = value; }
    }

    private Diadoc.Api.Proto.Invoicing.InvoiceTotalsDiff _TotalsInc = null;
    [global::ProtoBuf.ProtoMember(14, IsRequired = false, Name=@"TotalsInc", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Diadoc.Api.Proto.Invoicing.InvoiceTotalsDiff TotalsInc
    {
      get { return _TotalsInc; }
      set { _TotalsInc = value; }
    }

    private Diadoc.Api.Proto.Invoicing.InvoiceTotalsDiff _TotalsDec = null;
    [global::ProtoBuf.ProtoMember(15, IsRequired = false, Name=@"TotalsDec", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Diadoc.Api.Proto.Invoicing.InvoiceTotalsDiff TotalsDec
    {
      get { return _TotalsDec; }
      set { _TotalsDec = value; }
    }

    private string _AdditionalInfo = "";
    [global::ProtoBuf.ProtoMember(16, IsRequired = false, Name=@"AdditionalInfo", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string AdditionalInfo
    {
      get { return _AdditionalInfo; }
      set { _AdditionalInfo = value; }
    }
    private readonly global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo> _AdditionalInfos = new global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo>();
    [global::ProtoBuf.ProtoMember(17, Name=@"AdditionalInfos", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo> AdditionalInfos
    {
      get { return _AdditionalInfos; }
    }
  

    private Diadoc.Api.Proto.Invoicing.InvoiceFormatVersion _Version = Diadoc.Api.Proto.Invoicing.InvoiceFormatVersion.DefaultInvoiceFormatVersion;
    [global::ProtoBuf.ProtoMember(18, IsRequired = false, Name=@"Version", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(Diadoc.Api.Proto.Invoicing.InvoiceFormatVersion.DefaultInvoiceFormatVersion)]
    public Diadoc.Api.Proto.Invoicing.InvoiceFormatVersion Version
    {
      get { return _Version; }
      set { _Version = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"InvoiceTotalsDiff")]
  public partial class InvoiceTotalsDiff : global::ProtoBuf.IExtensible
  {
    public InvoiceTotalsDiff() {}
    

    private string _TotalWithVatExcluded = "";
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"TotalWithVatExcluded", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string TotalWithVatExcluded
    {
      get { return _TotalWithVatExcluded; }
      set { _TotalWithVatExcluded = value; }
    }

    private string _Vat = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"Vat", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Vat
    {
      get { return _Vat; }
      set { _Vat = value; }
    }
    private string _Total;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"Total", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string Total
    {
      get { return _Total; }
      set { _Total = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"InvoiceCorrectionItem")]
  public partial class InvoiceCorrectionItem : global::ProtoBuf.IExtensible
  {
    public InvoiceCorrectionItem() {}
    
    private string _Product;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"Product", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string Product
    {
      get { return _Product; }
      set { _Product = value; }
    }
    private Diadoc.Api.Proto.Invoicing.CorrectableInvoiceItemFields _OriginalValues;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"OriginalValues", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Diadoc.Api.Proto.Invoicing.CorrectableInvoiceItemFields OriginalValues
    {
      get { return _OriginalValues; }
      set { _OriginalValues = value; }
    }
    private Diadoc.Api.Proto.Invoicing.CorrectableInvoiceItemFields _CorrectedValues;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"CorrectedValues", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public Diadoc.Api.Proto.Invoicing.CorrectableInvoiceItemFields CorrectedValues
    {
      get { return _CorrectedValues; }
      set { _CorrectedValues = value; }
    }

    private Diadoc.Api.Proto.Invoicing.InvoiceItemAmountsDiff _AmountsInc = null;
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"AmountsInc", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Diadoc.Api.Proto.Invoicing.InvoiceItemAmountsDiff AmountsInc
    {
      get { return _AmountsInc; }
      set { _AmountsInc = value; }
    }

    private Diadoc.Api.Proto.Invoicing.InvoiceItemAmountsDiff _AmountsDec = null;
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"AmountsDec", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Diadoc.Api.Proto.Invoicing.InvoiceItemAmountsDiff AmountsDec
    {
      get { return _AmountsDec; }
      set { _AmountsDec = value; }
    }

    private string _AdditionalInfo = "";
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"AdditionalInfo", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string AdditionalInfo
    {
      get { return _AdditionalInfo; }
      set { _AdditionalInfo = value; }
    }
    private readonly global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo> _AdditionalInfos = new global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo>();
    [global::ProtoBuf.ProtoMember(7, Name=@"AdditionalInfos", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<Diadoc.Api.Proto.Invoicing.AdditionalInfo> AdditionalInfos
    {
      get { return _AdditionalInfos; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"CorrectableInvoiceItemFields")]
  public partial class CorrectableInvoiceItemFields : global::ProtoBuf.IExtensible
  {
    public CorrectableInvoiceItemFields() {}
    

    private string _Unit = "";
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"Unit", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Unit
    {
      get { return _Unit; }
      set { _Unit = value; }
    }

    private string _Quantity = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"Quantity", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Quantity
    {
      get { return _Quantity; }
      set { _Quantity = value; }
    }

    private string _Price = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"Price", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Price
    {
      get { return _Price; }
      set { _Price = value; }
    }

    private string _Excise = "";
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"Excise", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Excise
    {
      get { return _Excise; }
      set { _Excise = value; }
    }
    private Diadoc.Api.Proto.Invoicing.TaxRate _TaxRate;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"TaxRate", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public Diadoc.Api.Proto.Invoicing.TaxRate TaxRate
    {
      get { return _TaxRate; }
      set { _TaxRate = value; }
    }

    private string _SubtotalWithVatExcluded = "";
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"SubtotalWithVatExcluded", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string SubtotalWithVatExcluded
    {
      get { return _SubtotalWithVatExcluded; }
      set { _SubtotalWithVatExcluded = value; }
    }

    private string _Vat = "";
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"Vat", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Vat
    {
      get { return _Vat; }
      set { _Vat = value; }
    }
    private string _Subtotal;
    [global::ProtoBuf.ProtoMember(8, IsRequired = true, Name=@"Subtotal", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string Subtotal
    {
      get { return _Subtotal; }
      set { _Subtotal = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"InvoiceItemAmountsDiff")]
  public partial class InvoiceItemAmountsDiff : global::ProtoBuf.IExtensible
  {
    public InvoiceItemAmountsDiff() {}
    

    private string _Excise = "";
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"Excise", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Excise
    {
      get { return _Excise; }
      set { _Excise = value; }
    }

    private string _SubtotalWithVatExcluded = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"SubtotalWithVatExcluded", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string SubtotalWithVatExcluded
    {
      get { return _SubtotalWithVatExcluded; }
      set { _SubtotalWithVatExcluded = value; }
    }

    private string _Vat = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"Vat", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Vat
    {
      get { return _Vat; }
      set { _Vat = value; }
    }

    private string _Subtotal = "";
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"Subtotal", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Subtotal
    {
      get { return _Subtotal; }
      set { _Subtotal = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
    [global::ProtoBuf.ProtoContract(Name=@"InvoiceFormatVersion")]
    public enum InvoiceFormatVersion
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"DefaultInvoiceFormatVersion", Value=0)]
      DefaultInvoiceFormatVersion = 0,
            
      [global::ProtoBuf.ProtoEnum(Name=@"v5_01", Value=1)]
      v5_01 = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"v5_02", Value=2)]
      v5_02 = 2
    }
  
    [global::ProtoBuf.ProtoContract(Name=@"TaxRate")]
    public enum TaxRate
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"NoVat", Value=0)]
      NoVat = 0,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Percent_0", Value=1)]
      Percent_0 = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Percent_10", Value=2)]
      Percent_10 = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Percent_18", Value=3)]
      Percent_18 = 3,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Percent_20", Value=4)]
      Percent_20 = 4,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Fraction_10_110", Value=5)]
      Fraction_10_110 = 5,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Fraction_18_118", Value=6)]
      Fraction_18_118 = 6
    }
  
}