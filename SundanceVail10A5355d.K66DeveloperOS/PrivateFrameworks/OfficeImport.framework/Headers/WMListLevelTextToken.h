/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface WMListLevelTextToken : NSObject {
	NSString *m_string;	// 4 = 0x4
	int m_level;	// 8 = 0x8
}
@property(readonly, assign) int level;	// G=0x31c880b1; converted property
@property(readonly, retain) NSString *string;	// G=0x31c880a1; converted property
+ (id)tokenWithString:(id)string andLevel:(int)level;	// 0x31c87e59
- (id)initWithString:(id)string andLevel:(int)level;	// 0x31c87ea5
- (void)dealloc;	// 0x31c882dd
// converted property getter: - (int)level;	// 0x31c880b1
// converted property getter: - (id)string;	// 0x31c880a1
- (id)stringForIndex:(int)index withFormat:(int)format initialNumber:(int)number;	// 0x31c880dd
@end

