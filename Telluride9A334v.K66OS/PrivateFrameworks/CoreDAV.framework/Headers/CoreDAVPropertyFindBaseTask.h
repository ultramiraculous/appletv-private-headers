/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class CoreDAVMultiStatusItem, NSSet;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {
	CoreDAVMultiStatusItem *_multiStatus;	// 120 = 0x78
	NSSet *_propertiesToFind;	// 124 = 0x7c
}
@property(retain) CoreDAVMultiStatusItem *multiStatus;	// G=0x347c5a59; S=0x347c5a6d; @synthesize=_multiStatus
@property(retain) NSSet *propertiesToFind;	// G=0x347c5a21; S=0x347c5a35; @synthesize=_propertiesToFind
- (id)initWithPropertiesToFind:(id)find atURL:(id)url;	// 0x347c5325
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x347c5585
- (void)dealloc;	// 0x347c5441
- (id)description;	// 0x347c54a1
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x347c596d
- (id)getTotalFailureError;	// 0x347c57d1
// declared property getter: - (id)multiStatus;	// 0x347c5a59
- (id)parseHints;	// 0x347c5575
// declared property getter: - (id)propertiesToFind;	// 0x347c5a21
// declared property setter: - (void)setMultiStatus:(id)status;	// 0x347c5a6d
// declared property setter: - (void)setPropertiesToFind:(id)find;	// 0x347c5a35
- (id)successfulValueForNameSpace:(id)nameSpace elementName:(id)name;	// 0x347c565d
- (void)updateMultiStatusFromResponse;	// 0x347c573d
@end

