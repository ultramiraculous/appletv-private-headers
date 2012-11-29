/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface UIKBCacheToken : NSObject <NSCopying> {
	NSMutableArray *_components;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	int _emptyFields;	// 12 = 0xc
}
@property(assign, nonatomic) int displayHint;	// G=0x30fc9d21; S=0x30fc9d59; 
@property(assign, nonatomic) int emptyFields;	// G=0x30fca639; S=0x30fca649; @synthesize=_emptyFields
@property(readonly, assign, nonatomic) BOOL hasKey;	// G=0x30fc9da5; 
@property(retain, nonatomic) NSString *name;	// G=0x30fca619; S=0x30fca629; @synthesize=_name
@property(assign, nonatomic) int rowHint;	// G=0x30fc9c9d; S=0x30fc9cd5; 
@property(assign, nonatomic) CGSize size;	// G=0x30fc9bb9; S=0x30fc9c21; 
@property(readonly, assign, nonatomic) NSString *string;	// G=0x30cf97b1; 
+ (id)tokenForKey:(id)key style:(int)style state:(int)state;	// 0x30cf9465
+ (id)tokenForKey:(id)key style:(int)style state:(int)state clipCorners:(int)corners;	// 0x30fca0d1
+ (id)tokenForKeyplane:(id)keyplane;	// 0x30fc9f75
+ (id)tokenTemplateFilledForKey:(id)key style:(int)style size:(CGSize)size;	// 0x30fca471
+ (id)tokenTemplateForKey:(id)key name:(id)name style:(int)style size:(CGSize)size;	// 0x30fca315
+ (id)tokenTemplateForKey:(id)key style:(int)style size:(CGSize)size;	// 0x30fca2c9
- (id)initWithComponents:(id)components name:(id)name;	// 0x30cf9701
- (id)initWithComponents:(id)components name:(id)name emptyFields:(int)fields;	// 0x30cf9725
- (id)copyWithZone:(NSZone *)zone;	// 0x30fc9ba9
- (void)dealloc;	// 0x30cf97d9
// declared property getter: - (int)displayHint;	// 0x30fc9d21
// declared property getter: - (int)emptyFields;	// 0x30fca639
// declared property getter: - (BOOL)hasKey;	// 0x30fc9da5
// declared property getter: - (id)name;	// 0x30fca619
// declared property getter: - (int)rowHint;	// 0x30fc9c9d
// declared property setter: - (void)setDisplayHint:(int)hint;	// 0x30fc9d59
// declared property setter: - (void)setEmptyFields:(int)fields;	// 0x30fca649
// declared property setter: - (void)setName:(id)name;	// 0x30fca629
// declared property setter: - (void)setRowHint:(int)hint;	// 0x30fc9cd5
// declared property setter: - (void)setSize:(CGSize)size;	// 0x30fc9c21
// declared property getter: - (CGSize)size;	// 0x30fc9bb9
// declared property getter: - (id)string;	// 0x30cf97b1
- (id)stringForKey:(id)key state:(int)state;	// 0x30fc9dfd
- (id)stringForSplitState:(BOOL)splitState;	// 0x30fc9ee9
- (id)stringForState:(int)state;	// 0x30fc9ead
@end
