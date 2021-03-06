/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {
	CoreDAVMultiStatusItem *_multiStatus;	// 104 = 0x68
	NSSet *_propertiesToFind;	// 108 = 0x6c
}
@property(retain) CoreDAVMultiStatusItem *multiStatus;	// G=0x3388fd39; S=0x3388fd7d; @synthesize=_multiStatus
@property(retain) NSSet *propertiesToFind;	// G=0x3388fd21; S=0x3388fd51; @synthesize=_propertiesToFind
- (id)initWithPropertiesToFind:(id)find atURL:(id)url;	// 0x3388f8e9
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x3388f705
- (void)dealloc;	// 0x3388f88d
- (id)description;	// 0x3388f7cd
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3388fac9
- (id)getTotalFailureError;	// 0x3388fb95
// declared property getter: - (id)multiStatus;	// 0x3388fd39
- (id)parseHints;	// 0x3388f7b9
// declared property getter: - (id)propertiesToFind;	// 0x3388fd21
// declared property setter: - (void)setMultiStatus:(id)status;	// 0x3388fd7d
// declared property setter: - (void)setPropertiesToFind:(id)find;	// 0x3388fd51
- (id)successfulValueForNameSpace:(id)nameSpace elementName:(id)name;	// 0x3388f9e5
- (void)updateMultiStatusFromResponse;	// 0x3388f671
@end

