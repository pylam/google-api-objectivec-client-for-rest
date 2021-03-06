// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Safe Browsing APIs (safebrowsing/v4)
// Description:
//   Enables client applications to check web resources (most commonly URLs)
//   against Google-generated lists of unsafe web resources.
// Documentation:
//   https://developers.google.com/safe-browsing/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRSafeBrowsing_Checksum;
@class GTLRSafeBrowsing_ClientInfo;
@class GTLRSafeBrowsing_Constraints;
@class GTLRSafeBrowsing_ListUpdateRequest;
@class GTLRSafeBrowsing_ListUpdateResponse;
@class GTLRSafeBrowsing_MetadataEntry;
@class GTLRSafeBrowsing_RawHashes;
@class GTLRSafeBrowsing_RawIndices;
@class GTLRSafeBrowsing_RiceDeltaEncoding;
@class GTLRSafeBrowsing_ThreatEntry;
@class GTLRSafeBrowsing_ThreatEntryMetadata;
@class GTLRSafeBrowsing_ThreatEntrySet;
@class GTLRSafeBrowsing_ThreatInfo;
@class GTLRSafeBrowsing_ThreatListDescriptor;
@class GTLRSafeBrowsing_ThreatMatch;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_Constraints.supportedCompressions

/** Value: "COMPRESSION_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_Constraints_SupportedCompressions_CompressionTypeUnspecified;
/** Value: "RAW" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_Constraints_SupportedCompressions_Raw;
/** Value: "RICE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_Constraints_SupportedCompressions_Rice;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ListUpdateRequest.platformType

/** Value: "ALL_PLATFORMS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_AllPlatforms;
/** Value: "ANDROID" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Android;
/** Value: "ANY_PLATFORM" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_AnyPlatform;
/** Value: "CHROME" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Chrome;
/** Value: "IOS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Ios;
/** Value: "LINUX" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Linux;
/** Value: "OSX" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Osx;
/** Value: "PLATFORM_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_PlatformTypeUnspecified;
/** Value: "WINDOWS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Windows;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ListUpdateRequest.threatEntryType

/** Value: "EXECUTABLE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_ThreatEntryType_Executable;
/** Value: "IP_RANGE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_ThreatEntryType_IpRange;
/** Value: "THREAT_ENTRY_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_ThreatEntryType_ThreatEntryTypeUnspecified;
/** Value: "URL" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_ThreatEntryType_Url;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ListUpdateRequest.threatType

/** Value: "MALWARE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_ThreatType_Malware;
/** Value: "POTENTIALLY_HARMFUL_APPLICATION" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_ThreatType_PotentiallyHarmfulApplication;
/** Value: "SOCIAL_ENGINEERING" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_ThreatType_SocialEngineering;
/** Value: "THREAT_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_ThreatType_ThreatTypeUnspecified;
/** Value: "UNWANTED_SOFTWARE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateRequest_ThreatType_UnwantedSoftware;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ListUpdateResponse.platformType

/** Value: "ALL_PLATFORMS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_AllPlatforms;
/** Value: "ANDROID" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Android;
/** Value: "ANY_PLATFORM" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_AnyPlatform;
/** Value: "CHROME" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Chrome;
/** Value: "IOS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Ios;
/** Value: "LINUX" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Linux;
/** Value: "OSX" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Osx;
/** Value: "PLATFORM_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_PlatformTypeUnspecified;
/** Value: "WINDOWS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Windows;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ListUpdateResponse.responseType

/** Value: "FULL_UPDATE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ResponseType_FullUpdate;
/** Value: "PARTIAL_UPDATE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ResponseType_PartialUpdate;
/** Value: "RESPONSE_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ResponseType_ResponseTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ListUpdateResponse.threatEntryType

/** Value: "EXECUTABLE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ThreatEntryType_Executable;
/** Value: "IP_RANGE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ThreatEntryType_IpRange;
/** Value: "THREAT_ENTRY_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ThreatEntryType_ThreatEntryTypeUnspecified;
/** Value: "URL" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ThreatEntryType_Url;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ListUpdateResponse.threatType

/** Value: "MALWARE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ThreatType_Malware;
/** Value: "POTENTIALLY_HARMFUL_APPLICATION" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ThreatType_PotentiallyHarmfulApplication;
/** Value: "SOCIAL_ENGINEERING" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ThreatType_SocialEngineering;
/** Value: "THREAT_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ThreatType_ThreatTypeUnspecified;
/** Value: "UNWANTED_SOFTWARE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ListUpdateResponse_ThreatType_UnwantedSoftware;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ThreatEntrySet.compressionType

/** Value: "COMPRESSION_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatEntrySet_CompressionType_CompressionTypeUnspecified;
/** Value: "RAW" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatEntrySet_CompressionType_Raw;
/** Value: "RICE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatEntrySet_CompressionType_Rice;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ThreatInfo.platformTypes

/** Value: "ALL_PLATFORMS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_PlatformTypes_AllPlatforms;
/** Value: "ANDROID" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_PlatformTypes_Android;
/** Value: "ANY_PLATFORM" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_PlatformTypes_AnyPlatform;
/** Value: "CHROME" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_PlatformTypes_Chrome;
/** Value: "IOS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_PlatformTypes_Ios;
/** Value: "LINUX" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_PlatformTypes_Linux;
/** Value: "OSX" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_PlatformTypes_Osx;
/** Value: "PLATFORM_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_PlatformTypes_PlatformTypeUnspecified;
/** Value: "WINDOWS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_PlatformTypes_Windows;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ThreatInfo.threatEntryTypes

/** Value: "EXECUTABLE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_ThreatEntryTypes_Executable;
/** Value: "IP_RANGE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_ThreatEntryTypes_IpRange;
/** Value: "THREAT_ENTRY_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_ThreatEntryTypes_ThreatEntryTypeUnspecified;
/** Value: "URL" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_ThreatEntryTypes_Url;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ThreatInfo.threatTypes

/** Value: "MALWARE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_ThreatTypes_Malware;
/** Value: "POTENTIALLY_HARMFUL_APPLICATION" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_ThreatTypes_PotentiallyHarmfulApplication;
/** Value: "SOCIAL_ENGINEERING" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_ThreatTypes_SocialEngineering;
/** Value: "THREAT_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_ThreatTypes_ThreatTypeUnspecified;
/** Value: "UNWANTED_SOFTWARE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatInfo_ThreatTypes_UnwantedSoftware;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ThreatListDescriptor.platformType

/** Value: "ALL_PLATFORMS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_AllPlatforms;
/** Value: "ANDROID" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Android;
/** Value: "ANY_PLATFORM" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_AnyPlatform;
/** Value: "CHROME" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Chrome;
/** Value: "IOS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Ios;
/** Value: "LINUX" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Linux;
/** Value: "OSX" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Osx;
/** Value: "PLATFORM_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_PlatformTypeUnspecified;
/** Value: "WINDOWS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Windows;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ThreatListDescriptor.threatEntryType

/** Value: "EXECUTABLE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_ThreatEntryType_Executable;
/** Value: "IP_RANGE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_ThreatEntryType_IpRange;
/** Value: "THREAT_ENTRY_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_ThreatEntryType_ThreatEntryTypeUnspecified;
/** Value: "URL" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_ThreatEntryType_Url;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ThreatListDescriptor.threatType

/** Value: "MALWARE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_ThreatType_Malware;
/** Value: "POTENTIALLY_HARMFUL_APPLICATION" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_ThreatType_PotentiallyHarmfulApplication;
/** Value: "SOCIAL_ENGINEERING" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_ThreatType_SocialEngineering;
/** Value: "THREAT_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_ThreatType_ThreatTypeUnspecified;
/** Value: "UNWANTED_SOFTWARE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatListDescriptor_ThreatType_UnwantedSoftware;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ThreatMatch.platformType

/** Value: "ALL_PLATFORMS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_PlatformType_AllPlatforms;
/** Value: "ANDROID" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_PlatformType_Android;
/** Value: "ANY_PLATFORM" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_PlatformType_AnyPlatform;
/** Value: "CHROME" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_PlatformType_Chrome;
/** Value: "IOS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_PlatformType_Ios;
/** Value: "LINUX" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_PlatformType_Linux;
/** Value: "OSX" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_PlatformType_Osx;
/** Value: "PLATFORM_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_PlatformType_PlatformTypeUnspecified;
/** Value: "WINDOWS" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_PlatformType_Windows;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ThreatMatch.threatEntryType

/** Value: "EXECUTABLE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_ThreatEntryType_Executable;
/** Value: "IP_RANGE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_ThreatEntryType_IpRange;
/** Value: "THREAT_ENTRY_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_ThreatEntryType_ThreatEntryTypeUnspecified;
/** Value: "URL" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_ThreatEntryType_Url;

// ----------------------------------------------------------------------------
// GTLRSafeBrowsing_ThreatMatch.threatType

/** Value: "MALWARE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_ThreatType_Malware;
/** Value: "POTENTIALLY_HARMFUL_APPLICATION" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_ThreatType_PotentiallyHarmfulApplication;
/** Value: "SOCIAL_ENGINEERING" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_ThreatType_SocialEngineering;
/** Value: "THREAT_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_ThreatType_ThreatTypeUnspecified;
/** Value: "UNWANTED_SOFTWARE" */
GTLR_EXTERN NSString * const kGTLRSafeBrowsing_ThreatMatch_ThreatType_UnwantedSoftware;

/**
 *  The expected state of a client's local database.
 */
@interface GTLRSafeBrowsing_Checksum : GTLRObject

/**
 *  The SHA256 hash of the client state; that is, of the sorted list of all
 *  hashes present in the database.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *sha256;

@end


/**
 *  The client metadata associated with Safe Browsing API requests.
 */
@interface GTLRSafeBrowsing_ClientInfo : GTLRObject

/**
 *  A client ID that (hopefully) uniquely identifies the client implementation
 *  of the Safe Browsing API.
 */
@property(nonatomic, copy, nullable) NSString *clientId;

/** The version of the client implementation. */
@property(nonatomic, copy, nullable) NSString *clientVersion;

@end


/**
 *  The constraints for this update.
 */
@interface GTLRSafeBrowsing_Constraints : GTLRObject

/**
 *  Sets the maximum number of entries that the client is willing to have in the
 *  local database. This should be a power of 2 between 2**10 and 2**20. If
 *  zero, no database size limit is set.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxDatabaseEntries;

/**
 *  The maximum size in number of entries. The update will not contain more
 *  entries than this value. This should be a power of 2 between 2**10 and
 *  2**20. If zero, no update size limit is set.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxUpdateEntries;

/**
 *  Requests the list for a specific geographic location. If not set the server
 *  may pick that value based on the user's IP address. Expects ISO 3166-1
 *  alpha-2 format.
 */
@property(nonatomic, copy, nullable) NSString *region;

/** The compression types supported by the client. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *supportedCompressions;

@end


/**
 *  Describes a Safe Browsing API update request. Clients can request updates
 *  for multiple lists in a single request. NOTE: Field index 2 is unused. NEXT:
 *  4
 */
@interface GTLRSafeBrowsing_FetchThreatListUpdatesRequest : GTLRObject

/** The client metadata. */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_ClientInfo *client;

/** The requested threat list updates. */
@property(nonatomic, strong, nullable) NSArray<GTLRSafeBrowsing_ListUpdateRequest *> *listUpdateRequests;

@end


/**
 *  GTLRSafeBrowsing_FetchThreatListUpdatesResponse
 */
@interface GTLRSafeBrowsing_FetchThreatListUpdatesResponse : GTLRObject

/** The list updates requested by the clients. */
@property(nonatomic, strong, nullable) NSArray<GTLRSafeBrowsing_ListUpdateResponse *> *listUpdateResponses;

/**
 *  The minimum duration the client must wait before issuing any update request.
 *  If this field is not set clients may update as soon as they want.
 */
@property(nonatomic, copy, nullable) NSString *minimumWaitDuration;

@end


/**
 *  Request to return full hashes matched by the provided hash prefixes.
 */
@interface GTLRSafeBrowsing_FindFullHashesRequest : GTLRObject

/** The client metadata. */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_ClientInfo *client;

/**
 *  The current client states for each of the client's local threat lists.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *clientStates;

/** The lists and hashes to be checked. */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_ThreatInfo *threatInfo;

@end


/**
 *  GTLRSafeBrowsing_FindFullHashesResponse
 */
@interface GTLRSafeBrowsing_FindFullHashesResponse : GTLRObject

/** The full hashes that matched the requested prefixes. */
@property(nonatomic, strong, nullable) NSArray<GTLRSafeBrowsing_ThreatMatch *> *matches;

/**
 *  The minimum duration the client must wait before issuing any find hashes
 *  request. If this field is not set, clients can issue a request as soon as
 *  they want.
 */
@property(nonatomic, copy, nullable) NSString *minimumWaitDuration;

/**
 *  For requested entities that did not match the threat list, how long to cache
 *  the response.
 */
@property(nonatomic, copy, nullable) NSString *negativeCacheDuration;

@end


/**
 *  Request to check entries against lists.
 */
@interface GTLRSafeBrowsing_FindThreatMatchesRequest : GTLRObject

/** The client metadata. */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_ClientInfo *client;

/** The lists and entries to be checked for matches. */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_ThreatInfo *threatInfo;

@end


/**
 *  GTLRSafeBrowsing_FindThreatMatchesResponse
 */
@interface GTLRSafeBrowsing_FindThreatMatchesResponse : GTLRObject

/** The threat list matches. */
@property(nonatomic, strong, nullable) NSArray<GTLRSafeBrowsing_ThreatMatch *> *matches;

@end


/**
 *  GTLRSafeBrowsing_ListThreatListsResponse
 */
@interface GTLRSafeBrowsing_ListThreatListsResponse : GTLRObject

/** The lists available for download by the client. */
@property(nonatomic, strong, nullable) NSArray<GTLRSafeBrowsing_ThreatListDescriptor *> *threatLists;

@end


/**
 *  A single list update request.
 */
@interface GTLRSafeBrowsing_ListUpdateRequest : GTLRObject

/** The constraints associated with this request. */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_Constraints *constraints;

/**
 *  The type of platform at risk by entries present in the list.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_AllPlatforms
 *        Value "ALL_PLATFORMS"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Android Value
 *        "ANDROID"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_AnyPlatform Value
 *        "ANY_PLATFORM"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Chrome Value
 *        "CHROME"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Ios Value "IOS"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Linux Value
 *        "LINUX"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Osx Value "OSX"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_PlatformTypeUnspecified
 *        Value "PLATFORM_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_PlatformType_Windows Value
 *        "WINDOWS"
 */
@property(nonatomic, copy, nullable) NSString *platformType;

/**
 *  The current state of the client for the requested list (the encrypted client
 *  state that was received from the last successful list update).
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *state;

/**
 *  The types of entries present in the list.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_ThreatEntryType_Executable
 *        Value "EXECUTABLE"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_ThreatEntryType_IpRange Value
 *        "IP_RANGE"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_ThreatEntryType_ThreatEntryTypeUnspecified
 *        Value "THREAT_ENTRY_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_ThreatEntryType_Url Value
 *        "URL"
 */
@property(nonatomic, copy, nullable) NSString *threatEntryType;

/**
 *  The type of threat posed by entries present in the list.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_ThreatType_Malware Value
 *        "MALWARE"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_ThreatType_PotentiallyHarmfulApplication
 *        Value "POTENTIALLY_HARMFUL_APPLICATION"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_ThreatType_SocialEngineering
 *        Value "SOCIAL_ENGINEERING"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_ThreatType_ThreatTypeUnspecified
 *        Value "THREAT_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateRequest_ThreatType_UnwantedSoftware
 *        Value "UNWANTED_SOFTWARE"
 */
@property(nonatomic, copy, nullable) NSString *threatType;

@end


/**
 *  An update to an individual list.
 */
@interface GTLRSafeBrowsing_ListUpdateResponse : GTLRObject

/**
 *  A set of entries to add to a local threat type's list. Repeated to allow for
 *  a combination of compressed and raw data to be sent in a single response.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSafeBrowsing_ThreatEntrySet *> *additions;

/**
 *  The expected SHA256 hash of the client state; that is, of the sorted list of
 *  all hashes present in the database after applying the provided update. If
 *  the client state doesn't match the expected state, the client must disregard
 *  this update and retry later.
 */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_Checksum *checksum;

/**
 *  The new client state, in encrypted format. Opaque to clients.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *newClientState NS_RETURNS_NOT_RETAINED;

/**
 *  The platform type for which data is returned.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_AllPlatforms
 *        Value "ALL_PLATFORMS"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Android Value
 *        "ANDROID"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_AnyPlatform
 *        Value "ANY_PLATFORM"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Chrome Value
 *        "CHROME"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Ios Value "IOS"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Linux Value
 *        "LINUX"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Osx Value "OSX"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_PlatformTypeUnspecified
 *        Value "PLATFORM_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_PlatformType_Windows Value
 *        "WINDOWS"
 */
@property(nonatomic, copy, nullable) NSString *platformType;

/**
 *  A set of entries to remove from a local threat type's list. Repeated for the
 *  same reason as above.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSafeBrowsing_ThreatEntrySet *> *removals;

/**
 *  The type of response. This may indicate that an action is required by the
 *  client when the response is received.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ResponseType_FullUpdate Value
 *        "FULL_UPDATE"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ResponseType_PartialUpdate
 *        Value "PARTIAL_UPDATE"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ResponseType_ResponseTypeUnspecified
 *        Value "RESPONSE_TYPE_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *responseType;

/**
 *  The format of the threats.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ThreatEntryType_Executable
 *        Value "EXECUTABLE"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ThreatEntryType_IpRange Value
 *        "IP_RANGE"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ThreatEntryType_ThreatEntryTypeUnspecified
 *        Value "THREAT_ENTRY_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ThreatEntryType_Url Value
 *        "URL"
 */
@property(nonatomic, copy, nullable) NSString *threatEntryType;

/**
 *  The threat type for which data is returned.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ThreatType_Malware Value
 *        "MALWARE"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ThreatType_PotentiallyHarmfulApplication
 *        Value "POTENTIALLY_HARMFUL_APPLICATION"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ThreatType_SocialEngineering
 *        Value "SOCIAL_ENGINEERING"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ThreatType_ThreatTypeUnspecified
 *        Value "THREAT_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ListUpdateResponse_ThreatType_UnwantedSoftware
 *        Value "UNWANTED_SOFTWARE"
 */
@property(nonatomic, copy, nullable) NSString *threatType;

@end


/**
 *  A single metadata entry.
 */
@interface GTLRSafeBrowsing_MetadataEntry : GTLRObject

/**
 *  The metadata entry key.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *key;

/**
 *  The metadata entry value.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  The uncompressed threat entries in hash format of a particular prefix
 *  length. Hashes can be anywhere from 4 to 32 bytes in size. A large majority
 *  are 4 bytes, but some hashes are lengthened if they collide with the hash of
 *  a popular URL. Used for sending ThreatEntrySet to clients that do not
 *  support compression, or when sending non-4-byte hashes to clients that do
 *  support compression.
 */
@interface GTLRSafeBrowsing_RawHashes : GTLRObject

/**
 *  The number of bytes for each prefix encoded below. This field can be
 *  anywhere from 4 (shortest prefix) to 32 (full SHA256 hash).
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *prefixSize;

/**
 *  The hashes, all concatenated into one long string. Each hash has a prefix
 *  size of |prefix_size| above. Hashes are sorted in lexicographic order.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *rawHashes;

@end


/**
 *  A set of raw indices to remove from a local list.
 */
@interface GTLRSafeBrowsing_RawIndices : GTLRObject

/**
 *  The indices to remove from a lexicographically-sorted local list.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *indices;

@end


/**
 *  The Rice-Golomb encoded data. Used for sending compressed 4-byte hashes or
 *  compressed removal indices.
 */
@interface GTLRSafeBrowsing_RiceDeltaEncoding : GTLRObject

/**
 *  The encoded deltas that are encoded using the Golomb-Rice coder.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *encodedData;

/**
 *  The offset of the first entry in the encoded data, or, if only a single
 *  integer was encoded, that single integer's value.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *firstValue;

/**
 *  The number of entries that are delta encoded in the encoded data. If only a
 *  single integer was encoded, this will be zero and the single value will be
 *  stored in `first_value`.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numEntries;

/**
 *  The Golomb-Rice parameter, which is a number between 2 and 28. This field is
 *  missing (that is, zero) if `num_entries` is zero.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *riceParameter;

@end


/**
 *  An individual threat; for example, a malicious URL or its hash
 *  representation. Only one of these fields should be set.
 */
@interface GTLRSafeBrowsing_ThreatEntry : GTLRObject

/**
 *  The digest of an executable in SHA256 format. The API supports both binary
 *  and hex digests.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *digest;

/**
 *  A hash prefix, consisting of the most significant 4-32 bytes of a SHA256
 *  hash. This field is in binary format.
 *
 *  Remapped to 'hashProperty' to avoid NSObject's 'hash'.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *hashProperty;

/** A URL. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  The metadata associated with a specific threat entry. The client is expected
 *  to know the metadata key/value pairs associated with each threat type.
 */
@interface GTLRSafeBrowsing_ThreatEntryMetadata : GTLRObject

/** The metadata entries. */
@property(nonatomic, strong, nullable) NSArray<GTLRSafeBrowsing_MetadataEntry *> *entries;

@end


/**
 *  A set of threats that should be added or removed from a client's local
 *  database.
 */
@interface GTLRSafeBrowsing_ThreatEntrySet : GTLRObject

/**
 *  The compression type for the entries in this set.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ThreatEntrySet_CompressionType_CompressionTypeUnspecified
 *        Value "COMPRESSION_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ThreatEntrySet_CompressionType_Raw Value "RAW"
 *    @arg @c kGTLRSafeBrowsing_ThreatEntrySet_CompressionType_Rice Value "RICE"
 */
@property(nonatomic, copy, nullable) NSString *compressionType;

/** The raw SHA256-formatted entries. */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_RawHashes *rawHashes;

/** The raw removal indices for a local list. */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_RawIndices *rawIndices;

/**
 *  The encoded 4-byte prefixes of SHA256-formatted entries, using a Golomb-Rice
 *  encoding.
 */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_RiceDeltaEncoding *riceHashes;

/**
 *  The encoded local, lexicographically-sorted list indices, using a
 *  Golomb-Rice encoding. Used for sending compressed removal indices.
 */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_RiceDeltaEncoding *riceIndices;

@end


/**
 *  The information regarding one or more threats that a client submits when
 *  checking for matches in threat lists.
 */
@interface GTLRSafeBrowsing_ThreatInfo : GTLRObject

/** The platform types to be checked. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *platformTypes;

/** The threat entries to be checked. */
@property(nonatomic, strong, nullable) NSArray<GTLRSafeBrowsing_ThreatEntry *> *threatEntries;

/** The entry types to be checked. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *threatEntryTypes;

/** The threat types to be checked. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *threatTypes;

@end


/**
 *  Describes an individual threat list. A list is defined by three parameters:
 *  the type of threat posed, the type of platform targeted by the threat, and
 *  the type of entries in the list.
 */
@interface GTLRSafeBrowsing_ThreatListDescriptor : GTLRObject

/**
 *  The platform type targeted by the list's entries.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_AllPlatforms
 *        Value "ALL_PLATFORMS"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Android Value
 *        "ANDROID"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_AnyPlatform
 *        Value "ANY_PLATFORM"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Chrome Value
 *        "CHROME"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Ios Value
 *        "IOS"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Linux Value
 *        "LINUX"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Osx Value
 *        "OSX"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_PlatformTypeUnspecified
 *        Value "PLATFORM_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_PlatformType_Windows Value
 *        "WINDOWS"
 */
@property(nonatomic, copy, nullable) NSString *platformType;

/**
 *  The entry types contained in the list.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_ThreatEntryType_Executable
 *        Value "EXECUTABLE"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_ThreatEntryType_IpRange
 *        Value "IP_RANGE"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_ThreatEntryType_ThreatEntryTypeUnspecified
 *        Value "THREAT_ENTRY_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_ThreatEntryType_Url Value
 *        "URL"
 */
@property(nonatomic, copy, nullable) NSString *threatEntryType;

/**
 *  The threat type posed by the list's entries.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_ThreatType_Malware Value
 *        "MALWARE"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_ThreatType_PotentiallyHarmfulApplication
 *        Value "POTENTIALLY_HARMFUL_APPLICATION"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_ThreatType_SocialEngineering
 *        Value "SOCIAL_ENGINEERING"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_ThreatType_ThreatTypeUnspecified
 *        Value "THREAT_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ThreatListDescriptor_ThreatType_UnwantedSoftware
 *        Value "UNWANTED_SOFTWARE"
 */
@property(nonatomic, copy, nullable) NSString *threatType;

@end


/**
 *  A match when checking a threat entry in the Safe Browsing threat lists.
 */
@interface GTLRSafeBrowsing_ThreatMatch : GTLRObject

/**
 *  The cache lifetime for the returned match. Clients must not cache this
 *  response for more than this duration to avoid false positives.
 */
@property(nonatomic, copy, nullable) NSString *cacheDuration;

/**
 *  The platform type matching this threat.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_PlatformType_AllPlatforms Value
 *        "ALL_PLATFORMS"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_PlatformType_Android Value "ANDROID"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_PlatformType_AnyPlatform Value
 *        "ANY_PLATFORM"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_PlatformType_Chrome Value "CHROME"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_PlatformType_Ios Value "IOS"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_PlatformType_Linux Value "LINUX"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_PlatformType_Osx Value "OSX"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_PlatformType_PlatformTypeUnspecified
 *        Value "PLATFORM_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_PlatformType_Windows Value "WINDOWS"
 */
@property(nonatomic, copy, nullable) NSString *platformType;

/** The threat matching this threat. */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_ThreatEntry *threat;

/** Optional metadata associated with this threat. */
@property(nonatomic, strong, nullable) GTLRSafeBrowsing_ThreatEntryMetadata *threatEntryMetadata;

/**
 *  The threat entry type matching this threat.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_ThreatEntryType_Executable Value
 *        "EXECUTABLE"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_ThreatEntryType_IpRange Value
 *        "IP_RANGE"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_ThreatEntryType_ThreatEntryTypeUnspecified
 *        Value "THREAT_ENTRY_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_ThreatEntryType_Url Value "URL"
 */
@property(nonatomic, copy, nullable) NSString *threatEntryType;

/**
 *  The threat type matching this threat.
 *
 *  Likely values:
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_ThreatType_Malware Value "MALWARE"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_ThreatType_PotentiallyHarmfulApplication
 *        Value "POTENTIALLY_HARMFUL_APPLICATION"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_ThreatType_SocialEngineering Value
 *        "SOCIAL_ENGINEERING"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_ThreatType_ThreatTypeUnspecified
 *        Value "THREAT_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRSafeBrowsing_ThreatMatch_ThreatType_UnwantedSoftware Value
 *        "UNWANTED_SOFTWARE"
 */
@property(nonatomic, copy, nullable) NSString *threatType;

@end

NS_ASSUME_NONNULL_END
