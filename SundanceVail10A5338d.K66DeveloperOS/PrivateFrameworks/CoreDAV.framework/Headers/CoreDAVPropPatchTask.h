/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSSet, CoreDAVResponseItem, NSURL;
@protocol CoreDAVPropPatchTaskDelegate;

@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask {
	NSSet *_propPatchRemoveElements;	// 140 = 0x8c
	NSSet *_propPatchSetElements;	// 144 = 0x90
	CoreDAVResponseItem *_responseItem;	// 148 = 0x94
	BOOL _sendOrder;	// 152 = 0x98
	int _absoluteOrder;	// 156 = 0x9c
	NSURL *_priorOrderedURL;	// 160 = 0xa0
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x34c13eb1; S=0x34c13dc9; @synthesize=_absoluteOrder
@property(assign, nonatomic) id<CoreDAVPropPatchTaskDelegate> delegate;	// @dynamic
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x34c13ec1; S=0x34c13ded; @synthesize=_priorOrderedURL
@property(retain) NSSet *propPatchRemoveElements;	// G=0x34c13e45; S=0x34c13e59; @synthesize=_propPatchRemoveElements
@property(retain) NSSet *propPatchSetElements;	// G=0x34c13e69; S=0x34c13e7d; @synthesize=_propPatchSetElements
@property(retain) CoreDAVResponseItem *responseItem;	// G=0x34c13e8d; S=0x34c13ea1; @synthesize=_responseItem
- (id)initWithPropertiesToSet:(id)set andRemove:(id)remove atURL:(id)url;	// 0x34c1322d
- (id)initWithURL:(id)url;	// 0x34c13229
// declared property getter: - (int)absoluteOrder;	// 0x34c13eb1
- (id)additionalHeaderValues;	// 0x34c1359d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x34c13a59
- (void)dealloc;	// 0x34c1331d
- (id)description;	// 0x34c133a9
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x34c13b41
- (id)httpMethod;	// 0x34c13591
// declared property getter: - (id)priorOrderedURL;	// 0x34c13ec1
// declared property getter: - (id)propPatchRemoveElements;	// 0x34c13e45
// declared property getter: - (id)propPatchSetElements;	// 0x34c13e69
- (id)requestBody;	// 0x34c136f9
// declared property getter: - (id)responseItem;	// 0x34c13e8d
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x34c13dc9
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x34c13ded
// declared property setter: - (void)setPropPatchRemoveElements:(id)elements;	// 0x34c13e59
// declared property setter: - (void)setPropPatchSetElements:(id)elements;	// 0x34c13e7d
// declared property setter: - (void)setResponseItem:(id)item;	// 0x34c13ea1
@end

