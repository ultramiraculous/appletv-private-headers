/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "EDImmutableObject.h"
#import <NSObject.h> // Unknown library

@class NSString, EDRunsCollection, EDPhoneticInfo;

__attribute__((visibility("hidden")))
@interface EDString : NSObject <NSCopying, EDImmutableObject> {
@private
	NSString *mString;	// 4 = 0x4
	EDRunsCollection *mRuns;	// 8 = 0x8
	EDPhoneticInfo *mPhoneticInfo;	// 12 = 0xc
	bool mDoNotModify;	// 16 = 0x10
}
@property(retain) id phoneticInfo;	// G=0x30de43e1; S=0x30d5fe29; converted property
@property(retain) id runs;	// G=0x30cdecd1; S=0x30cc6fed; converted property
@property(retain) id string;	// G=0x30cbf385; S=0x30cba60d; converted property
+ (id)edStringWithString:(id)string;	// 0x30cba54d
+ (id)edStringWithString:(id)string runs:(id)runs;	// 0x30e34295
+ (id)string;	// 0x30de87a1
- (id)init;	// 0x30cba5cd
- (id)initWithString:(id)string;	// 0x30cba599
- (id)initWithString:(id)string runs:(id)runs;	// 0x30e34369
- (bool)areThereRuns;	// 0x30db5cd5
- (id)copyWithZone:(NSZone *)zone;	// 0x30de4319
- (void)dealloc;	// 0x30cc952d
- (id)firstRunFont;	// 0x30e48325
- (unsigned)hash;	// 0x30e342e5
- (bool)isEmpty;	// 0x30d524c5
- (BOOL)isEqual:(id)equal;	// 0x30cbf511
- (BOOL)isEqualToEDString:(id)edstring;	// 0x30cbf5ad
- (BOOL)isEqualToString:(id)string;	// 0x30e34341
// converted property getter: - (id)phoneticInfo;	// 0x30de43e1
// converted property getter: - (id)runs;	// 0x30cdecd1
- (void)setDoNotModify:(bool)modify;	// 0x30cc6c91
// converted property setter: - (void)setPhoneticInfo:(id)info;	// 0x30d5fe29
// converted property setter: - (void)setRuns:(id)runs;	// 0x30cc6fed
// converted property setter: - (void)setString:(id)string;	// 0x30cba60d
// converted property getter: - (id)string;	// 0x30cbf385
@end

