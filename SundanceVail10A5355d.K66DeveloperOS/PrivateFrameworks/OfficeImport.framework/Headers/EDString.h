/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDRunsCollection, EDPhoneticInfo, NSString;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {
	NSString *mString;	// 4 = 0x4
	EDRunsCollection *mRuns;	// 8 = 0x8
	EDPhoneticInfo *mPhoneticInfo;	// 12 = 0xc
	bool mDoNotModify;	// 16 = 0x10
}
@property(retain) id phoneticInfo;	// G=0x31d4f965; S=0x31d4f975; converted property
@property(retain) id runs;	// G=0x31c403f1; S=0x31c46601; converted property
@property(retain) id string;	// G=0x31c1a165; S=0x31c1549d; converted property
+ (id)edStringWithString:(id)string;	// 0x31c153dd
+ (id)edStringWithString:(id)string runs:(id)runs;	// 0x31db0931
+ (id)string;	// 0x31db08e9
- (id)init;	// 0x31c1545d
- (id)initWithString:(id)string;	// 0x31c15429
- (id)initWithString:(id)string runs:(id)runs;	// 0x31db08b5
- (bool)areThereRuns;	// 0x31cf6f11
- (id)copyWithZone:(NSZone *)zone;	// 0x31d4f8a5
- (void)dealloc;	// 0x31c26a7d
- (id)firstRunFont;	// 0x31d77c5d
- (unsigned)hash;	// 0x31db0981
- (bool)isEmpty;	// 0x31cfb069
- (BOOL)isEqual:(id)equal;	// 0x31c1a2e1
- (BOOL)isEqualToEDString:(id)edstring;	// 0x31c1a375
- (BOOL)isEqualToString:(id)string;	// 0x31d2148d
// converted property getter: - (id)phoneticInfo;	// 0x31d4f965
// converted property getter: - (id)runs;	// 0x31c403f1
- (void)setDoNotModify:(bool)modify;	// 0x31c24245
// converted property setter: - (void)setPhoneticInfo:(id)info;	// 0x31d4f975
// converted property setter: - (void)setRuns:(id)runs;	// 0x31c46601
// converted property setter: - (void)setString:(id)string;	// 0x31c1549d
// converted property getter: - (id)string;	// 0x31c1a165
@end
