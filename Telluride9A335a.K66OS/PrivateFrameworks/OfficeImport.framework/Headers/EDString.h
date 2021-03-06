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
@property(retain) id phoneticInfo;	// G=0x353283e1; S=0x352a3e29; converted property
@property(retain) id runs;	// G=0x35222cd1; S=0x3520afed; converted property
@property(retain) id string;	// G=0x35203385; S=0x351fe60d; converted property
+ (id)edStringWithString:(id)string;	// 0x351fe54d
+ (id)edStringWithString:(id)string runs:(id)runs;	// 0x35378295
+ (id)string;	// 0x3532c7a1
- (id)init;	// 0x351fe5cd
- (id)initWithString:(id)string;	// 0x351fe599
- (id)initWithString:(id)string runs:(id)runs;	// 0x35378369
- (bool)areThereRuns;	// 0x352f9cd5
- (id)copyWithZone:(NSZone *)zone;	// 0x35328319
- (void)dealloc;	// 0x3520d52d
- (id)firstRunFont;	// 0x3538c325
- (unsigned)hash;	// 0x353782e5
- (bool)isEmpty;	// 0x352964c5
- (BOOL)isEqual:(id)equal;	// 0x35203511
- (BOOL)isEqualToEDString:(id)edstring;	// 0x352035ad
- (BOOL)isEqualToString:(id)string;	// 0x35378341
// converted property getter: - (id)phoneticInfo;	// 0x353283e1
// converted property getter: - (id)runs;	// 0x35222cd1
- (void)setDoNotModify:(bool)modify;	// 0x3520ac91
// converted property setter: - (void)setPhoneticInfo:(id)info;	// 0x352a3e29
// converted property setter: - (void)setRuns:(id)runs;	// 0x3520afed
// converted property setter: - (void)setString:(id)string;	// 0x351fe60d
// converted property getter: - (id)string;	// 0x35203385
@end

