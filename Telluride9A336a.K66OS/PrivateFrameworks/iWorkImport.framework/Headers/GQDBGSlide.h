/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDBGAbstractSlide.h"

@class GQDWPLayoutFrame, GQDBGMasterSlide;

__attribute__((visibility("hidden")))
@interface GQDBGSlide : GQDBGAbstractSlide {
@private
	GQDBGMasterSlide *mMaster;	// 40 = 0x28
	GQDWPLayoutFrame *mNoteFrame;	// 44 = 0x2c
}
- (id)init;	// 0x30480125
- (void)dealloc;	// 0x304800c5
- (id)master;	// 0x3047ffa5
- (id)noteFrame;	// 0x3047ffb5
@end

