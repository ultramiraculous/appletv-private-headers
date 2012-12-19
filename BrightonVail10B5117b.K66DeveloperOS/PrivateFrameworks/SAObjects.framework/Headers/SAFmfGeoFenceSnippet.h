/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAUISnippet.h"

@class SAFmfGeoFence, NSNumber, NSString, NSURL;

@interface SAFmfGeoFenceSnippet : SAUISnippet {
}
@property(retain, nonatomic) SAFmfGeoFence *aceFmfGeoFence;	// G=0x355c74a1; S=0x355c74f5; 
@property(copy, nonatomic) NSNumber *enable;	// G=0x355c7531; S=0x355c754d; 
@property(copy, nonatomic) NSString *fenceType;	// G=0x355c759d; S=0x355c75b9; 
@property(copy, nonatomic) NSNumber *oneTimeOnly;	// G=0x355c7609; S=0x355c7625; 
@property(copy, nonatomic) NSURL *searchContext;	// G=0x355c7675; S=0x355c76f1; 
+ (id)geoFenceSnippet;	// 0x355c7411
+ (id)geoFenceSnippetWithDictionary:(id)dictionary context:(id)context;	// 0x355c7455
// declared property getter: - (id)aceFmfGeoFence;	// 0x355c74a1
// declared property getter: - (id)enable;	// 0x355c7531
- (id)encodedClassName;	// 0x355c7405
// declared property getter: - (id)fenceType;	// 0x355c759d
- (id)groupIdentifier;	// 0x355c73f5
// declared property getter: - (id)oneTimeOnly;	// 0x355c7609
// declared property getter: - (id)searchContext;	// 0x355c7675
// declared property setter: - (void)setAceFmfGeoFence:(id)fence;	// 0x355c74f5
// declared property setter: - (void)setEnable:(id)enable;	// 0x355c754d
// declared property setter: - (void)setFenceType:(id)type;	// 0x355c75b9
// declared property setter: - (void)setOneTimeOnly:(id)only;	// 0x355c7625
// declared property setter: - (void)setSearchContext:(id)context;	// 0x355c76f1
@end
