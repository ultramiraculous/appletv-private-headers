/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ECColumnWidthConvertor : NSObject {
@private
	int mMultiplier;	// 4 = 0x4
}
- (double)lassoColumnWidthFromXl:(double)xl;	// 0x30cdb17d
- (void)setupWithEDFont:(id)edfont state:(id)state;	// 0x30ccd915
- (double)xlBaseColumnWidthFromXlColumnWidth:(double)xlColumnWidth;	// 0x30e37a21
- (double)xlColumnWidthFromLasso:(double)lasso;	// 0x30e379fd
- (double)xlColumnWidthFromXlBaseColumnWidth:(double)xlBaseColumnWidth;	// 0x30ccdcf9
@end

