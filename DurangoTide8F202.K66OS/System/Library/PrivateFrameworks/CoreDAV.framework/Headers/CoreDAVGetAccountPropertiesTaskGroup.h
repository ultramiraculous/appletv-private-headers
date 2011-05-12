/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPrincipalSearchPropertySetTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSURL, NSSet, NSString;
@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate> {
@private
	NSURL *_principalURL;	// 44 = 0x2c
	NSString *_displayName;	// 48 = 0x30
	NSURL *_resourceID;	// 52 = 0x34
	NSSet *_emailAddresses;	// 56 = 0x38
	NSSet *_collections;	// 60 = 0x3c
	NSSet *_principalSearchProperties;	// 64 = 0x40
	BOOL _isExpandPropertyReportSupported;	// 68 = 0x44
	BOOL _fetchPrincipalSearchProperties;	// 69 = 0x45
	NSURL *_newServerURL;	// 72 = 0x48
}
@property(readonly, assign) NSSet *collections;	// G=0x317a5b65; @synthesize=_collections
@property(assign, nonatomic) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate;	// @dynamic
@property(readonly, assign) NSString *displayName;	// G=0x317a5b95; @synthesize=_displayName
@property(readonly, assign) NSSet *emailAddresses;	// G=0x317a5b75; @synthesize=_emailAddresses
@property(assign) BOOL fetchPrincipalSearchProperties;	// G=0x317a5b35; S=0x317a5b45; @synthesize=_fetchPrincipalSearchProperties
@property(readonly, assign) BOOL isExpandPropertyReportSupported;	// G=0x317a5b55; @synthesize=_isExpandPropertyReportSupported
@property(retain) NSURL *newServerURL;	// G=0x317a6b91; S=0x317a6ba9; @synthesize=_newServerURL
@property(readonly, assign) NSSet *principalSearchProperties;	// G=0x317a5b25; @synthesize=_principalSearchProperties
@property(readonly, assign) NSURL *principalURL;	// G=0x317a5ba5; @synthesize=_principalURL
@property(readonly, assign) NSURL *resourceID;	// G=0x317a5b85; @synthesize=_resourceID
- (id)_copyAccountPropertiesPropFindElements;	// 0x317a5f6d
- (void)_parseDAVHeader:(id)header;	// 0x317a5c9d
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x317a62d5
- (void)_taskCompleted:(id)completed withError:(id)error;	// 0x317a5c51
// declared property getter: - (id)collections;	// 0x317a5b65
- (void)dealloc;	// 0x317a6221
- (id)description;	// 0x317a6129
// declared property getter: - (id)displayName;	// 0x317a5b95
// declared property getter: - (id)emailAddresses;	// 0x317a5b75
// declared property getter: - (BOOL)fetchPrincipalSearchProperties;	// 0x317a5b35
- (id)homeSet;	// 0x317a5ed1
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x317a5b55
// declared property getter: - (id)newServerURL;	// 0x317a6b91
- (void)optionsTask:(id)task error:(id)error;	// 0x317a5bb5
// declared property getter: - (id)principalSearchProperties;	// 0x317a5b25
// declared property getter: - (id)principalURL;	// 0x317a5ba5
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x317a6895
// declared property getter: - (id)resourceID;	// 0x317a5b85
- (void)searchPropertySetTask:(id)task completetWithPropertySearchSet:(id)propertySearchSet error:(id)error;	// 0x317a67f9
// declared property setter: - (void)setFetchPrincipalSearchProperties:(BOOL)properties;	// 0x317a5b45
// declared property setter: - (void)setNewServerURL:(id)url;	// 0x317a6ba9
- (void)startTaskGroup;	// 0x317a5db5
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x317a60c9
@end
