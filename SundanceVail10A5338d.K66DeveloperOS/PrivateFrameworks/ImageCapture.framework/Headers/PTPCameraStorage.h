/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "PTPCameraFolder.h"

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder {
	NSMutableArray *_tempArrayOfAllObjectHandles;	// 28 = 0x1c
	NSMutableArray *_tempArrayOfAllObjectHandlesToBeIgnored;	// 32 = 0x20
}
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandles;	// G=0x33e513c9; converted property
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandlesToBeIgnored;	// G=0x33e513d9; converted property
- (id)initWithStorageID:(unsigned long)storageID device:(id)device;	// 0x33e51095
- (void)dealloc;	// 0x33e51101
- (void)prime;	// 0x33e511e5
- (void)refreshInfo;	// 0x33e51165
// converted property getter: - (id)tempArrayOfAllObjectHandles;	// 0x33e513c9
// converted property getter: - (id)tempArrayOfAllObjectHandlesToBeIgnored;	// 0x33e513d9
@end
