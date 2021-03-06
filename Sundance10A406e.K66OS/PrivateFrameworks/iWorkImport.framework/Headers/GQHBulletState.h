/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQHBulletState : NSObject {
	CFArrayRef mLevels;	// 4 = 0x4
	int mCurrentLevel;	// 8 = 0x8
}
@property(assign) int currentLevel;	// G=0x3246b629; S=0x3246b589; converted property
+ (CFStringRef)createLabelStr:(int)str number:(int)number;	// 0x3246af79
- (id)init;	// 0x3246b019
- (CFStringRef)bulletChar:(int)aChar;	// 0x3246b2e5
- (int)bulletIndentForLevel:(int)level;	// 0x3246b341
- (CFStringRef)createTieredNumberStringForLevel:(int)level;	// 0x3246b455
// converted property getter: - (int)currentLevel;	// 0x3246b629
- (void)dealloc;	// 0x3246b11d
- (BOOL)hasNumberAtLevel:(int)level;	// 0x3246b201
- (int)labelTypeAtLevel:(int)level;	// 0x3246b289
- (id)listStyleAtLevel:(int)level;	// 0x3246b415
- (int)numberAtLevel:(int)level;	// 0x3246b22d
- (void)setBulletChar:(CFStringRef)aChar level:(int)level;	// 0x3246b2b5
- (void)setBulletIndent:(int)indent level:(int)level;	// 0x3246b311
// converted property setter: - (void)setCurrentLevel:(int)level;	// 0x3246b589
- (void)setLabelType:(int)type level:(int)level;	// 0x3246b259
- (void)setListStyle:(id)style atLevel:(int)level;	// 0x3246b3c9
- (void)setNumber:(int)number level:(int)level;	// 0x3246b1b9
- (void)setTextIndent:(int)indent level:(int)level;	// 0x3246b36d
- (void)setType:(int)type level:(int)level;	// 0x3246b15d
- (int)textIndentForLevel:(int)level;	// 0x3246b39d
- (int)typeAtlevel:(int)atlevel;	// 0x3246b18d
@end

