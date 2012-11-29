/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PBSlideBase.h"


@interface PBSlideMaster : PBSlideBase {
}
+ (id)createMasterStyleMap:(id)map state:(id)state;	// 0x31ba0fc1
+ (void)flattenBaseMasterStyleType:(int)type masterStyleMap:(id)map;	// 0x31dfe1e9
+ (void)flattenMasterStyleType:(int)type baseType:(int)type2 masterStyleMap:(id)map;	// 0x31dfe2f9
+ (void)flattenPlaceholderTextStylesIntoLayout:(id)layout layoutType:(int)type masterStyleMap:(id)map;	// 0x31bf54e5
+ (void)flattenTextStyle:(id)style intoTextBox:(id)box;	// 0x31bf5661
+ (void)padMissingLevels:(id)levels;	// 0x31ba1371
+ (void)readMasterDrawables:(id)drawables slideHolder:(id)holder state:(id)state;	// 0x31ba3a49
+ (void)readSlideLayout:(id)layout slideHolder:(id)holder layoutType:(int)type state:(id)state;	// 0x31dfe141
+ (void)readSlideMasterStyles:(id)styles slideHolder:(id)holder state:(id)state;	// 0x31ba0c5d
+ (void)setCannedOtherTextListStyle:(id)style;	// 0x31dfe3f9
+ (void)setFont:(id)font fromCharacterProperties:(id)characterProperties;	// 0x31ba3179
+ (id)textBodyForPlaceholderType:(int)placeholderType slideLayout:(id)layout;	// 0x31bf55cd
+ (int)textTypeFor:(int)aFor placeholderType:(int)type;	// 0x31bf5631
+ (void)writeSlideMaster:(id)master presentationState:(id)state;	// 0x31dfeed1
+ (void)writeSlideMasterOrLayout:(id)layout presentationState:(id)state;	// 0x31dfe60d
@end
